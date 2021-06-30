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
  PF_5,  // LCD_BL
  PG_5,  // LCD_RST
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

  PA_1,   //ADC_A0              83
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

  PA_2,  //DCMI_PWM             94
};

#ifdef __cplusplus
}
#endif

// ----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

/**
  * @brief  System Clock Configuration
  * @param  None
  * @retval None
  */
WEAK void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = {0};

  /** Supply configuration update enable
  */
  //HAL_PWREx_ConfigSupply(PWR_LDO_SUPPLY);
  HAL_PWREx_ConfigSupply(PWR_DIRECT_SMPS_SUPPLY);
  
  /** Configure the main internal regulator output voltage
  */
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE0);

  while(!__HAL_PWR_GET_FLAG(PWR_FLAG_VOSRDY)) {}
  /** Macro to configure the PLL clock source
  */
  __HAL_RCC_PLL_PLLSOURCE_CONFIG(RCC_PLLSOURCE_HSE);
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_LSI|RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.LSIState = RCC_LSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 2;
  RCC_OscInitStruct.PLL.PLLN = 44;
  RCC_OscInitStruct.PLL.PLLP = 1;
  RCC_OscInitStruct.PLL.PLLQ = 5;
  RCC_OscInitStruct.PLL.PLLR = 2;
  RCC_OscInitStruct.PLL.PLLRGE = RCC_PLL1VCIRANGE_3;
  RCC_OscInitStruct.PLL.PLLVCOSEL = RCC_PLL1VCOWIDE;
  RCC_OscInitStruct.PLL.PLLFRACN = 0;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2
                              |RCC_CLOCKTYPE_D3PCLK1|RCC_CLOCKTYPE_D1PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.SYSCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB3CLKDivider = RCC_APB3_DIV2;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_APB1_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_APB2_DIV2;
  RCC_ClkInitStruct.APB4CLKDivider = RCC_APB4_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_3) != HAL_OK)
  {
    Error_Handler();
  }


}

#ifdef __cplusplus
}
#endif
