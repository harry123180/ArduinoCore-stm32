#include "pins_arduino.h"

#ifdef __cplusplus
extern "C" {
#endif

// Pin number
const PinName digitalPin[] = {
  PF_0,  // MCU_PG1_LED1        0
  PC_13, // MCU_PC13_LED0
  PF_1,  // MCU_PF1_Button

  PD_14, // WIFI_DEBUG_TXD      3
  PD_15, // WIFI_DEBUG_RXD
  PC_3,  // WIFI_CHIP_EN

  PA_10,  // BLE_UART_TXD       6
  PB_14,  // BLE_UART_RXD

  PC_1,   // WIFI_SPI2_MOSI     8
  PC_2,   // WIFI_SPI2_MISO
  PB_13,  // WIFI_SPI2_CLK
  PB_12,  // WIFI_SPI2_CS
  PF_2,   // WIFI_SYNC

  PE_0,  // DCMI_D2             13
  PH_10, // DCMI_D1
  PE_1,  // DCMI_D3
  PA_9,  // DCMI_D0
  PE_4,  // DCMI_D4
  PA_6,  // DCMI_PCLK
  PD_3,  // DCMI_D5
  PE_5,  // DCMI_D6
  PA_2,  // DCMI_XCLK
  PE_6,  // DCMI_D7
  PA_4,  // DCMI_HSYNC
  PE_7,  // DCMI_PWDN
  PG_9,  // DCMI_VSYNC
  PH_12, // DCMI_RST

  PH_2,     // LCD_R0            27
  PH_3,     // LCD_R1
  PA_1,     // LCD_R2
  PA_15,    // LCD_R3
  PA_5,     // LCD_R4
  PH_11,    // LCD_R5
  PA_8,     // LCD_R6
  PE_15,    // LCD_R7
  PB_1,     // LCD_G0
  PB_0,  // LCD_G1
  PH_13, // LCD_G2
  PE_11, // LCD_G3
  PB_10, // LCD_G4
  PB_11, // LCD_G5
  PC_7,  // LCD_G6
  PB_15, // LCD_G7
  PG_14, // LCD_B0
  PD_0,  // LCD_B1
  PD_6,  // LCD_B2
  PD_10, // LCD_B3
  PE_12, // LCD_B4
  PA_3,  // LCD_B5
  PB_8,  // LCD_B6
  PB_9,  // LCD_B7
  PG_7,  // LCD_CLK
  PC_6,  // LCD_HSYNC
  PA_7,  // LCD_VSYNC
  PC_5,  // LCD_DE
  PF_5,  // LCD_BACKGROUND_ENABLE
  PG_5,  // LCD_RESET
  PG_2,  // LCD_INT


  PD_13, // SAI4_SCKA           58
  PD_12, // SAI4_FSA
  PD_11, // SAI4_SDA
  PE_3,  // SAI4_SDB
  PE_2,  // SAI4_MCLKA
  PG_4,  // GPIO_Audio_INT

  PC_10, // MMC1_D2             64
  PC_11, // MMC1_D3
  PD_2,  // MMC1_CMD
  PC_12, // MMC1_CLK
  PC_8,  // MMC1_D0
  PC_9,  // MMC1_D1

  PD_8,  // USART3_TX           70
  PD_9,  // USART3_RX

  PB_6,  // IIC1_SCL            72
  PB_7,  // IIC1_SDA
  PF_14, // IIC4_SCL
  PF_15, // IIC4_SDA

  PA_11,  //USB1_DM             76
  PA_12,  //USB1_DP

  PE_8,   //PWM_D13             78
  PB_3,   //PWM_D12
  PE_10,  //PWM_D11
  PF_3,   //PWM_D10
  PA_0,   //PWM_D9

  PA_1,  //ADC_A0              83
  PF_11,  //ADC_A1
  PC_4,   //ADC_A2
  PF_12,  //ADC_A3
  PC_0,   //ADC_A4
  PF_13,  //ADC_A5

  PG_13,  //SPI6_SCK            89
  PB_5,   //SPI6_MOSI
  PB_4,   //SPI6_MISO

  PD_1,  //FDCAN_UART4_TX       92
  PH_14, //FDCAN_UART4_RX

};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  83,
  84,
  85,
  86,
  87,
  88
};

#ifdef __cplusplus
}
#endif

#ifdef HAL_LTDC_MODULE_ENABLED

LTDC_HandleTypeDef    hltdc;
void MX_LTDC_Init(const uint32_t addr)
{

  /* USER CODE BEGIN LTDC_Init 0 */
  /* USER CODE END LTDC_Init 0 */

  LTDC_LayerCfgTypeDef pLayerCfg = {0};

  /* USER CODE BEGIN LTDC_Init 1 */

  /* USER CODE END LTDC_Init 1 */
  hltdc.Instance = LTDC;
  hltdc.Init.HSPolarity = LTDC_HSPOLARITY_AL;
  hltdc.Init.VSPolarity = LTDC_VSPOLARITY_AL;
  hltdc.Init.DEPolarity = LTDC_DEPOLARITY_AL;
  hltdc.Init.PCPolarity = LTDC_PCPOLARITY_IPC;
  hltdc.Init.HorizontalSync = 0;
  hltdc.Init.VerticalSync = 0;
  hltdc.Init.AccumulatedHBP = 46;
  hltdc.Init.AccumulatedVBP = 23;
  hltdc.Init.AccumulatedActiveW = 846;
  hltdc.Init.AccumulatedActiveH = 503;
  hltdc.Init.TotalWidth = 868;
  hltdc.Init.TotalHeigh = 525;
  hltdc.Init.Backcolor.Blue = 0;
  hltdc.Init.Backcolor.Green = 0;
  hltdc.Init.Backcolor.Red = 255;
  if (HAL_LTDC_Init(&hltdc) != HAL_OK) {
    Error_Handler();
  }

  pLayerCfg.WindowX0 = 0;
  pLayerCfg.WindowX1 = 800;
  pLayerCfg.WindowY0 = 0;
  pLayerCfg.WindowY1 = 480;
  pLayerCfg.PixelFormat = LTDC_PIXEL_FORMAT_RGB565;
  pLayerCfg.Alpha = 255;
  pLayerCfg.Alpha0 = 0;
  pLayerCfg.BlendingFactor1 = LTDC_BLENDING_FACTOR1_PAxCA;
  pLayerCfg.BlendingFactor2 = LTDC_BLENDING_FACTOR2_PAxCA;
  pLayerCfg.FBStartAdress = addr;
  pLayerCfg.ImageWidth = 800;
  pLayerCfg.ImageHeight = 480;
  pLayerCfg.Backcolor.Blue = 0;
  pLayerCfg.Backcolor.Green = 0;
  pLayerCfg.Backcolor.Red = 0;
  if (HAL_LTDC_ConfigLayer(&hltdc, &pLayerCfg, 0) != HAL_OK) {
    Error_Handler();
  }
  /* USER CODE BEGIN LTDC_Init 2 */

  /* USER CODE END LTDC_Init 2 */

}

void HAL_LTDC_MspInit(LTDC_HandleTypeDef *ltdcHandle)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = {0};

  if (ltdcHandle->Instance == LTDC) {
    /* USER CODE BEGIN LTDC_MspInit 0 */

    /* USER CODE END LTDC_MspInit 0 */
    /** Initializes the peripherals clock
    */
    PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_LTDC;
    PeriphClkInitStruct.PLL3.PLL3M = 25;
    PeriphClkInitStruct.PLL3.PLL3N = 55;
    PeriphClkInitStruct.PLL3.PLL3P = 2;
    PeriphClkInitStruct.PLL3.PLL3Q = 2;
    PeriphClkInitStruct.PLL3.PLL3R = 2;
    PeriphClkInitStruct.PLL3.PLL3RGE = RCC_PLL3VCIRANGE_0;
    PeriphClkInitStruct.PLL3.PLL3VCOSEL = RCC_PLL3VCOMEDIUM;
    PeriphClkInitStruct.PLL3.PLL3FRACN = 0;
    if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK) {
      Error_Handler();
    }

    /* LTDC clock enable */
    __HAL_RCC_LTDC_CLK_ENABLE();

    __HAL_RCC_GPIOB_CLK_ENABLE();
    __HAL_RCC_GPIOD_CLK_ENABLE();
    __HAL_RCC_GPIOH_CLK_ENABLE();
    __HAL_RCC_GPIOG_CLK_ENABLE();
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOC_CLK_ENABLE();
    __HAL_RCC_GPIOE_CLK_ENABLE();
    /**LTDC GPIO Configuration
    PB8     ------> LTDC_B6
    PD6     ------> LTDC_B2
    PH13     ------> LTDC_G2
    PB9     ------> LTDC_B7
    PG14     ------> LTDC_B0
    PA15(JTDI)     ------> LTDC_R3
    PD0     ------> LTDC_B1
    PA8     ------> LTDC_R6
    PC6     ------> LTDC_HSYNC
    PC7     ------> LTDC_G6
    PG7     ------> LTDC_CLK
    PA7     ------> LTDC_VSYNC
    PA1     ------> LTDC_R2
    PD10     ------> LTDC_B3
    PA5     ------> LTDC_R4
    PB1     ------> LTDC_G0
    PE12     ------> LTDC_B4
    PB10     ------> LTDC_G4
    PH11     ------> LTDC_R5
    PH3     ------> LTDC_R1
    PB0     ------> LTDC_G1
    PB11     ------> LTDC_G5
    PB15     ------> LTDC_G7
    PH2     ------> LTDC_R0
    PA3     ------> LTDC_B5
    PC5     ------> LTDC_DE
    PE11     ------> LTDC_G3
    PE15     ------> LTDC_R7
    */
    GPIO_InitStruct.Pin = GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_1 | GPIO_PIN_10
                          | GPIO_PIN_0 | GPIO_PIN_11 | GPIO_PIN_15;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF14_LTDC;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_6 | GPIO_PIN_0 | GPIO_PIN_10;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF14_LTDC;
    HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_13 | GPIO_PIN_11 | GPIO_PIN_3 | GPIO_PIN_2;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF14_LTDC;
    HAL_GPIO_Init(GPIOH, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_14 | GPIO_PIN_7;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF14_LTDC;
    HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_15;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF9_LTDC;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_8 | GPIO_PIN_7 | GPIO_PIN_1 | GPIO_PIN_5
                          | GPIO_PIN_3;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF14_LTDC;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_5;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF14_LTDC;
    HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_12 | GPIO_PIN_11 | GPIO_PIN_15;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF14_LTDC;
    HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

    /* LTDC interrupt Init */
    HAL_NVIC_SetPriority(LTDC_IRQn, 0, 0);
    HAL_NVIC_EnableIRQ(LTDC_IRQn);
    /* USER CODE BEGIN LTDC_MspInit 1 */

    /* USER CODE END LTDC_MspInit 1 */
  }
}

void HAL_LTDC_MspDeInit(LTDC_HandleTypeDef *ltdcHandle)
{

  if (ltdcHandle->Instance == LTDC) {
    /* USER CODE BEGIN LTDC_MspDeInit 0 */

    /* USER CODE END LTDC_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_LTDC_CLK_DISABLE();

    /**LTDC GPIO Configuration
    PB8     ------> LTDC_B6
    PD6     ------> LTDC_B2
    PH13     ------> LTDC_G2
    PB9     ------> LTDC_B7
    PG14     ------> LTDC_B0
    PA15(JTDI)     ------> LTDC_R3
    PD0     ------> LTDC_B1
    PA8     ------> LTDC_R6
    PC6     ------> LTDC_HSYNC
    PC7     ------> LTDC_G6
    PG7     ------> LTDC_CLK
    PA7     ------> LTDC_VSYNC
    PA1     ------> LTDC_R2
    PD10     ------> LTDC_B3
    PA5     ------> LTDC_R4
    PB1     ------> LTDC_G0
    PE12     ------> LTDC_B4
    PB10     ------> LTDC_G4
    PH11     ------> LTDC_R5
    PH3     ------> LTDC_R1
    PB0     ------> LTDC_G1
    PB11     ------> LTDC_G5
    PB15     ------> LTDC_G7
    PH2     ------> LTDC_R0
    PA3     ------> LTDC_B5
    PC5     ------> LTDC_DE
    PE11     ------> LTDC_G3
    PE15     ------> LTDC_R7
    */
    HAL_GPIO_DeInit(GPIOB, GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_1 | GPIO_PIN_10
                    | GPIO_PIN_0 | GPIO_PIN_11 | GPIO_PIN_15);

    HAL_GPIO_DeInit(GPIOD, GPIO_PIN_6 | GPIO_PIN_0 | GPIO_PIN_10);

    HAL_GPIO_DeInit(GPIOH, GPIO_PIN_13 | GPIO_PIN_11 | GPIO_PIN_3 | GPIO_PIN_2);

    HAL_GPIO_DeInit(GPIOG, GPIO_PIN_14 | GPIO_PIN_7);

    HAL_GPIO_DeInit(GPIOA, GPIO_PIN_15 | GPIO_PIN_8 | GPIO_PIN_7 | GPIO_PIN_1
                    | GPIO_PIN_5 | GPIO_PIN_3);

    HAL_GPIO_DeInit(GPIOC, GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_5);

    HAL_GPIO_DeInit(GPIOE, GPIO_PIN_12 | GPIO_PIN_11 | GPIO_PIN_15);

    /* LTDC interrupt Deinit */
    HAL_NVIC_DisableIRQ(LTDC_IRQn);
    /* USER CODE BEGIN LTDC_MspDeInit 1 */

    /* USER CODE END LTDC_MspDeInit 1 */
  }
}

#endif

// ----------------------------------------------------------------------------
