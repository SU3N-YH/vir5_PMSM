/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : FMC.c
  * Description        : This file provides code for the configuration
  *                      of the FMC peripheral.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "fmc.h"

/* USER CODE BEGIN 0 */
#define Bank1_SRAM3_ADDR		(uint32_t)(0x68000000)    
#define Bank1_SRAM1_ADDR		(uint32_t)(0x60000000)


// [2026-11-05 03:06 EST] Separate raw read and write structures for the Watch window.
// Address literals stay in this source file and use 16-bit bus word offsets.
typedef struct
{
    uint16_t port1;
    uint16_t port2;
    uint16_t port3;
    uint16_t port4;
    uint16_t port5;
    uint16_t port6;
    uint16_t port7;
    uint16_t port8;
    uint16_t port9;
    uint16_t port10;
    uint16_t port11;
    uint16_t port12;
    uint16_t port13;
    uint16_t port14;
    uint16_t port15;
    uint16_t port16;
} FSMC_ReadDataTypeDef;

typedef struct
{
    uint16_t port1;
    uint16_t port2;
    uint16_t port3;
    uint16_t port4;
    uint16_t port5;
    uint16_t port6;
    uint16_t port7;
    uint16_t port8;
    uint16_t port9;
    uint16_t port10;
    uint16_t port11;
    uint16_t port12;
    uint16_t port13;
    uint16_t port14;
    uint16_t port15;
    uint16_t port16;
} FSMC_WriteDataTypeDef;

// [2026-11-12 16:21 CST] Persistent Watch diagnostics for the fixed 45-deg test.
// Count sampled words that differ from simulated port 6 code 0xFF6F (-145 Q2).
// Skip the first two read batches after startup; do not reset on good samples.
volatile uint32_t Err_cnt_Temp = 0U;
volatile uint32_t Check_cnt_Temp = 0U;
volatile uint16_t Err_last_Temp = 0U;
static uint8_t Err_warmup_Temp = 2U;

volatile FSMC_ReadDataTypeDef FSMC_ReadData = {0};
volatile FSMC_WriteDataTypeDef FSMC_WriteData =
{
    .port1 = 0x0001U,
    .port2 = 0x0002U,
    .port3 = 0x0003U,
    .port4 = 0x0004U,
    .port5 = 0x0005U,
    .port6 = 0x0000U,
    .port7 = 0x0000U,
    .port8 = 0x0000U,
    .port9 = 0x0009U,
    .port10 = 0x000AU,
    .port11 = 0x000BU,
    .port12 = 0x000CU,
    .port13 = 0x000DU,
    .port14 = 0x000EU,
    .port15 = 0x000FU,
    .port16 = 0x0010U
};

// [2026-11-05 03:06 EST] Advance loopback patterns before writing so Watch TX and RX match.
void FSMC_Write(void)
{
    // [2026-11-12 16:21 CST] Decimal test codes: 45 deg, 100 rad/s, flux 0.5.
    // Previous literals 0x4096U/0x400U/0x16384U used the wrong numeric base.
    FSMC_WriteData.port6 = 4096U;
    FSMC_WriteData.port7 = 400U;
    FSMC_WriteData.port8 = 16384U;
	
    FSMC_WriteData.port11 = (uint16_t)(FSMC_WriteData.port11 + 1U);
    FSMC_WriteData.port12 = (uint16_t)(FSMC_WriteData.port12 + 1U);
    FSMC_WriteData.port13 = (uint16_t)(FSMC_WriteData.port13 + 1U);
    FSMC_WriteData.port14 = (uint16_t)(FSMC_WriteData.port14 + 1U);
    FSMC_WriteData.port15 = (uint16_t)(FSMC_WriteData.port15 + 1U);

    __DSB();
    *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x200U << 1U)) = FSMC_WriteData.port1;
    *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x114U << 1U)) = FSMC_WriteData.port2;
    *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x136U << 1U)) = FSMC_WriteData.port3;
    *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x078U << 1U)) = FSMC_WriteData.port4;
    *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x13AU << 1U)) = FSMC_WriteData.port5;
    *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x17AU << 1U)) = FSMC_WriteData.port6;
    *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x05CU << 1U)) = FSMC_WriteData.port7;
    *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x172U << 1U)) = FSMC_WriteData.port8;
    *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x182U << 1U)) = FSMC_WriteData.port9;
    *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x058U << 1U)) = FSMC_WriteData.port10;
    *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x1A8U << 1U)) = FSMC_WriteData.port11;
    *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x068U << 1U)) = FSMC_WriteData.port12;
    *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x1C3U << 1U)) = FSMC_WriteData.port13;
    *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x1D2U << 1U)) = FSMC_WriteData.port14;
    *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x0C2U << 1U)) = FSMC_WriteData.port15;
    *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x1E6U << 1U)) = FSMC_WriteData.port16;
    __DSB();
}

// [2026-11-05 03:06 EST] Capture FPGA read ports 1 through 16 using the supplied PCI.v map.
void FSMC_Read(void)
{
    __DSB();
    FSMC_ReadData.port1 = *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x000U << 1U));
    FSMC_ReadData.port2 = *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x132U << 1U));
    FSMC_ReadData.port3 = *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x162U << 1U));
    FSMC_ReadData.port4 = *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x088U << 1U));
    FSMC_ReadData.port5 = *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x0A2U << 1U));
    FSMC_ReadData.port6 = *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x1B6U << 1U));
    // [2026-11-12 16:21 CST] Check the RAM sample already captured above.
    // Saturate counters so a long run cannot wrap and hide previous errors.
    if (Err_warmup_Temp != 0U)
    {
        --Err_warmup_Temp;
    }
    else
    {
        if (Check_cnt_Temp != 0xFFFFFFFFU)
        {
            ++Check_cnt_Temp;
        }
        if (FSMC_ReadData.port6 != 0xFF6FU)
        {
            Err_last_Temp = FSMC_ReadData.port6;
            if (Err_cnt_Temp != 0xFFFFFFFFU)
            {
                ++Err_cnt_Temp;
            }
        }
    }
    FSMC_ReadData.port7 = *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x0C4U << 1U));
    FSMC_ReadData.port8 = *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x118U << 1U));
    FSMC_ReadData.port9 = *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x128U << 1U));
    FSMC_ReadData.port10 = *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x076U << 1U));
    FSMC_ReadData.port11 = *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x19AU << 1U));
    FSMC_ReadData.port12 = *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x096U << 1U));
    FSMC_ReadData.port13 = *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x018U << 1U));
    FSMC_ReadData.port14 = *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x13CU << 1U));
    FSMC_ReadData.port15 = *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x01CU << 1U));
    FSMC_ReadData.port16 = *(__IO uint16_t*)(Bank1_SRAM1_ADDR + (0x17EU << 1U));
    __DSB();
}

// [2026-11-05 03:06 EST] Return mismatching words for the existing five-port loopback test.
uint32_t FSMC_CheckLoopback(void)
{
    uint32_t errors = 0U;

    if (FSMC_ReadData.port11 != FSMC_WriteData.port11)
    {
        ++errors;
    }
    if (FSMC_ReadData.port12 != FSMC_WriteData.port12)
    {
        ++errors;
    }
    if (FSMC_ReadData.port13 != FSMC_WriteData.port13)
    {
        ++errors;
    }
    if (FSMC_ReadData.port14 != FSMC_WriteData.port14)
    {
        ++errors;
    }
    if (FSMC_ReadData.port15 != FSMC_WriteData.port15)
    {
        ++errors;
    }
    return errors;
}

// [2026-11-05 03:06 EST] Previous implementation retained for reference.
// int v=0;
// uint16_t addr_verify=0;
// // [2026-11-04 15:19 CST] Store the 16 FPGA PCI words without assuming signal names.
// volatile uint16_t fsmc_pci_read_data[16];
// void FSMC_Write(int16_t data, uint32_t address)
// {
// 	//LOAD_AD7642_L;
// //    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_RESET);//置0
//   // [2026-11-04 11:35 CST] 保留错误地址换算为注释，恢复原 address * 2 字节偏置。
//   // *(__IO uint16_t*)(Bank1_SRAM1_ADDR+address/2)=data;
//    *(__IO uint16_t*)(Bank1_SRAM1_ADDR+address * 2)=data;
//     v++;
// //		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_SET);//置1
// //	*(__IO uint16_t*)(Bank1_SRAM1_ADDR+2)=ADC7642_ChlB+0x8000; 
//   //LOAD_AD7642_H;
// }



//void FSMC_Read_verify(void)
//{
//    Deadtime_300MHz_read=*(__IO uint16_t*)(Bank1_SRAM1_ADDR+0x00000014*2);
//		Udc_S16_Q5_read=*(__IO uint16_t*)(Bank1_SRAM1_ADDR+0x00000016*2);
//		Rd_S16_Q15_read=*(__IO uint16_t*)(Bank1_SRAM1_ADDR+0x00000018*2);             // STM32??????PCI??FPGA
//		Vd_S16_Q15_read=*(__IO uint16_t*)(Bank1_SRAM1_ADDR+0x0000001a*2);             // STM32??????PCI??FPGA
//		D64_OV_10LinuH_Q17_read=*(__IO uint16_t*)(Bank1_SRAM1_ADDR+0x0000001c*2);     // STM32??????PCI??FPGA
//		Res_S16_Q11_read=*(__IO uint16_t*)(Bank1_SRAM1_ADDR+0x0000001e*2);            // STM32??????PCI??FPGA
//}

/* USER CODE END 0 */

SRAM_HandleTypeDef hsram1;

/* FMC initialization function */
void MX_FMC_Init(void)
{
  /* USER CODE BEGIN FMC_Init 0 */

  /* USER CODE END FMC_Init 0 */

  FMC_NORSRAM_TimingTypeDef Timing = {0};

  /* USER CODE BEGIN FMC_Init 1 */

  /* USER CODE END FMC_Init 1 */

  /** Perform the SRAM1 memory initialization sequence
  */
  hsram1.Instance = FMC_NORSRAM_DEVICE;
  hsram1.Extended = FMC_NORSRAM_EXTENDED_DEVICE;
  /* hsram1.Init */
  hsram1.Init.NSBank = FMC_NORSRAM_BANK1;
  hsram1.Init.DataAddressMux = FMC_DATA_ADDRESS_MUX_DISABLE;
  hsram1.Init.MemoryType = FMC_MEMORY_TYPE_SRAM;
  hsram1.Init.MemoryDataWidth = FMC_NORSRAM_MEM_BUS_WIDTH_16;
  hsram1.Init.BurstAccessMode = FMC_BURST_ACCESS_MODE_DISABLE;
  hsram1.Init.WaitSignalPolarity = FMC_WAIT_SIGNAL_POLARITY_LOW;
  hsram1.Init.WaitSignalActive = FMC_WAIT_TIMING_BEFORE_WS;
  hsram1.Init.WriteOperation = FMC_WRITE_OPERATION_ENABLE;
  hsram1.Init.WaitSignal = FMC_WAIT_SIGNAL_DISABLE;
  hsram1.Init.ExtendedMode = FMC_EXTENDED_MODE_DISABLE;
  hsram1.Init.AsynchronousWait = FMC_ASYNCHRONOUS_WAIT_DISABLE;
  hsram1.Init.WriteBurst = FMC_WRITE_BURST_DISABLE;
  hsram1.Init.ContinuousClock = FMC_CONTINUOUS_CLOCK_SYNC_ONLY;
  hsram1.Init.WriteFifo = FMC_WRITE_FIFO_DISABLE;
  hsram1.Init.PageSize = FMC_PAGE_SIZE_NONE;
  /* Timing */
  Timing.AddressSetupTime = 4;
  Timing.AddressHoldTime = 2;
  Timing.DataSetupTime = 32;
  Timing.BusTurnAroundDuration = 2;
  Timing.CLKDivision = 16;
  Timing.DataLatency = 17;
  Timing.AccessMode = FMC_ACCESS_MODE_A;
  /* ExtTiming */

  if (HAL_SRAM_Init(&hsram1, &Timing, NULL) != HAL_OK)
  {
    Error_Handler( );
  }

  /* USER CODE BEGIN FMC_Init 2 */

  /* USER CODE END FMC_Init 2 */
}

static uint32_t FMC_Initialized = 0;

static void HAL_FMC_MspInit(void){
  /* USER CODE BEGIN FMC_MspInit 0 */

  /* USER CODE END FMC_MspInit 0 */
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  if (FMC_Initialized) {
    return;
  }
  FMC_Initialized = 1;

  /* Peripheral clock enable */
  __HAL_RCC_FMC_CLK_ENABLE();

  /** FMC GPIO Configuration
  PF0   ------> FMC_A0
  PF1   ------> FMC_A1
  PF2   ------> FMC_A2
  PF3   ------> FMC_A3
  PF4   ------> FMC_A4
  PF5   ------> FMC_A5
  PF12   ------> FMC_A6
  PF13   ------> FMC_A7
  PF14   ------> FMC_A8
  PF15   ------> FMC_A9
  PG0   ------> FMC_A10
  PG1   ------> FMC_A11
  PE7   ------> FMC_D4
  PE8   ------> FMC_D5
  PE9   ------> FMC_D6
  PE10   ------> FMC_D7
  PE11   ------> FMC_D8
  PE12   ------> FMC_D9
  PE13   ------> FMC_D10
  PE14   ------> FMC_D11
  PE15   ------> FMC_D12
  PD8   ------> FMC_D13
  PD9   ------> FMC_D14
  PD10   ------> FMC_D15
  PD14   ------> FMC_D0
  PD15   ------> FMC_D1
  PD0   ------> FMC_D2
  PD1   ------> FMC_D3
  PD4   ------> FMC_NOE
  PD5   ------> FMC_NWE
  PD7   ------> FMC_NE1
  */
  /* GPIO_InitStruct */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_12|GPIO_PIN_13
                          |GPIO_PIN_14|GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF12_FMC;

  HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

  /* GPIO_InitStruct */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF12_FMC;

  HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);

  /* GPIO_InitStruct */
  GPIO_InitStruct.Pin = GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10
                          |GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14
                          |GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF12_FMC;

  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /* GPIO_InitStruct */
  GPIO_InitStruct.Pin = GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_14
                          |GPIO_PIN_15|GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_4
                          |GPIO_PIN_5;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF12_FMC;

  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /* GPIO_InitStruct */
  GPIO_InitStruct.Pin = GPIO_PIN_7;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF12_FMC;

  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /* USER CODE BEGIN FMC_MspInit 1 */

  /* USER CODE END FMC_MspInit 1 */
}

void HAL_SRAM_MspInit(SRAM_HandleTypeDef* sramHandle){
  /* USER CODE BEGIN SRAM_MspInit 0 */

  /* USER CODE END SRAM_MspInit 0 */
  HAL_FMC_MspInit();
  /* USER CODE BEGIN SRAM_MspInit 1 */

  /* USER CODE END SRAM_MspInit 1 */
}

static uint32_t FMC_DeInitialized = 0;

static void HAL_FMC_MspDeInit(void){
  /* USER CODE BEGIN FMC_MspDeInit 0 */

  /* USER CODE END FMC_MspDeInit 0 */
  if (FMC_DeInitialized) {
    return;
  }
  FMC_DeInitialized = 1;
  /* Peripheral clock enable */
  __HAL_RCC_FMC_CLK_DISABLE();

  /** FMC GPIO Configuration
  PF0   ------> FMC_A0
  PF1   ------> FMC_A1
  PF2   ------> FMC_A2
  PF3   ------> FMC_A3
  PF4   ------> FMC_A4
  PF5   ------> FMC_A5
  PF12   ------> FMC_A6
  PF13   ------> FMC_A7
  PF14   ------> FMC_A8
  PF15   ------> FMC_A9
  PG0   ------> FMC_A10
  PG1   ------> FMC_A11
  PE7   ------> FMC_D4
  PE8   ------> FMC_D5
  PE9   ------> FMC_D6
  PE10   ------> FMC_D7
  PE11   ------> FMC_D8
  PE12   ------> FMC_D9
  PE13   ------> FMC_D10
  PE14   ------> FMC_D11
  PE15   ------> FMC_D12
  PD8   ------> FMC_D13
  PD9   ------> FMC_D14
  PD10   ------> FMC_D15
  PD14   ------> FMC_D0
  PD15   ------> FMC_D1
  PD0   ------> FMC_D2
  PD1   ------> FMC_D3
  PD4   ------> FMC_NOE
  PD5   ------> FMC_NWE
  PD7   ------> FMC_NE1
  */

  HAL_GPIO_DeInit(GPIOF, GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_12|GPIO_PIN_13
                          |GPIO_PIN_14|GPIO_PIN_15);

  HAL_GPIO_DeInit(GPIOG, GPIO_PIN_0|GPIO_PIN_1);

  HAL_GPIO_DeInit(GPIOE, GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10
                          |GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14
                          |GPIO_PIN_15);

  HAL_GPIO_DeInit(GPIOD, GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_14
                          |GPIO_PIN_15|GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_4
                          |GPIO_PIN_5|GPIO_PIN_7);

  /* USER CODE BEGIN FMC_MspDeInit 1 */

  /* USER CODE END FMC_MspDeInit 1 */
}

void HAL_SRAM_MspDeInit(SRAM_HandleTypeDef* sramHandle){
  /* USER CODE BEGIN SRAM_MspDeInit 0 */

  /* USER CODE END SRAM_MspDeInit 0 */
  HAL_FMC_MspDeInit();
  /* USER CODE BEGIN SRAM_MspDeInit 1 */

  /* USER CODE END SRAM_MspDeInit 1 */
}
/**
  * @}
  */

/**
  * @}
  */
