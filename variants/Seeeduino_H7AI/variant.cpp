#include "pins_arduino.h"

#ifdef __cplusplus
extern "C" {
#endif

// Pin number
const PinName digitalPin[] = {
  PG_1,  // MCU_PG1_LED1
  PC_13, // MCU_PC13_LED0
  PD_9,  // MCU_PD9_Button

  PD_14, // WIFI_DEBUG_TXD
  PD_15, // WIFI_DEBUG_RXD
  PH_2,  // WIFI_CHIP_EN

  PB_15,  // BLE_UART_TXD
  PB_14,  // BLE_UART_RXD

  PF_11,  // WIFI_SPI1_MOSI 
  PF_8,   // WIFI_SPI1_MISO
  PF_7,  // WIFI_SPI1_CLK
  PG_15, // WIFI_SPI1_CS
  PD_8,// WIFI_SYNC

  PG_10, // DCMI_D2
  PH_10, // DCMI_D1 
  PG_11, // DCMI_D3
  PA_9,  // DCMI_D0
  PE_4,  // DCMI_D4
  PA_6,  // DCMI_PCLK
  PD_3,  // DCMI_D5
  PE_5,  // DCMI_D6
  PD_7,  // DCMI_XCLK
  PE_6,  // DCMI_D7
  PA_4,  // DCMI_HSYNC
  PE_7,  // DCMI_PWDN
  PG_9,  // DCMI_VSYNC 
  PH_12, // DCMI_RST
  PF_14, // IIC4_SCL
  PF_15, // IIC4_SDA

  PE_15, // LCD_R7
  PB_1,  // LCD_G0
  PB_0,  // LCD_G1
  PH_13, // LCD_G2
  PE_11, // LCD_G3
  PB_10, // LCD_G4
  PB_11, // LCD_G5
  PC_7,  // LCD_G6
  PG_8,  // LCD_G7
  PG_14, // LCD_B0
  PD_0,  // LCD_B1
  PD_6,  // LCD_B2
  PD_10, // LCD_B3
  PA_10, // LCD_B4
  PA_3,  // LCD_B5
  PB_8,  // LCD_B6
  PB_9,  // LCD_B7
  PG_7,  // LCD_CLK
  PC_6,  // LCD_HSYNC
  PA_7,  // LCD_VSYNC
  PC_5,  // LCD_DE
  PF_5,  // LCD_BL
  PG_5,  // LCD_RST
  PG_0,  // LCD_INT
  PB_7,  // LCD_IIC1_SDA
  PB_6,  // LCD_IIC1_SCL

  PD_13, // SAI4_SCKA
  PD_12, // SAI4_FSA
  PD_11, // SAI4_SDA
  PE_3,  // SAI4_SDB
  PE_0,  // SAI4_MCLKA
  PE_2,  // SAI1_CK1
  PB_2,  // SAI1_D1
  PE_1,  // GPIO_Audio_INT

  PF_3,  // QSPI2_IO3
  PF_4,  // QSPI2_CLK
  PF_0,  // QSPI2_IO0
  PG_12, // QSPI2_CS
  PF_1,  // QSPI2_IO1
  PF_2,  // QSPI2_IO2

  PG_6,  // DUAL_QSPI1_CS
  PF_9,  // DUAL_QSPI1_SIO1
  PC_2,  // DUAL_QSPI1_SIO2
  PF_6,  // DUAL_QSPI1_SIO3
  PF_10, // DUAL_QSPI1_CLK
  PC_3,  // DUAL_QSPI1_SIO0
  PD_5,  // DUAL_QSPI1_SIO5
  PE_9,  // DUAL_QSPI1_SIO6
  PE_10, // DUAL_QSPI1_SIO7
  PD_4,  // DUAL_QSPI1_SIO4

  PC_10, // MMC1_D2
  PC_11, // MMC1_D3
  PD_2,  // MMC1_CMD
  PC_12, // MMC1_CLK
  PC_8,  // MMC1_D0
  PC_9,  // MMC1_D1

  PG_4,  // MCU_PG4_D13
  PA_0,  // MCU_A0_D12
  PE_8,  // MCU_PE8_D11
  PG_2,  // MCU_PG2_D10
  PG_3,  // MCU_PG3_D9
  PB_13, // MCU_FDCAN2_TX
  PB_12, // MCU_FDCAN2_RX

  // PA_14, // DEBUG_SWCLK
  // PA_13, // DEBUG_SWDIO
  // // PA1_C, // MCU_PA1_C_A0
  // PF_13, // MCU_PF13_A1
  // PC_4,  // MCU_PC4_A2
  // PF_12, // MCU_PF12_A3
  // PC_0,  // MCU_PC0_A4
  // PC_1,  // MCU_PC1_A5
  // PB_3,  // PB3_SPI_SCK
  // PB_5,  // PB5_SPI_MOSI
  // PB_4,  // PB4_SPI_MISO
  // PH_14, // MCU_PH14_FDCAN_RX
  // PD_1,  // MCU_PD1_FDCAN_TX

  // PA11N  // USB1_DM
  // PA12   // USB1_DP

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

  /** Supply configuration update enable
  */
  HAL_PWREx_ConfigSupply(PWR_DIRECT_SMPS_SUPPLY);
  /** Configure the main internal regulator output voltage
  */
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE0);

  while(!__HAL_PWR_GET_FLAG(PWR_FLAG_VOSRDY)) {}
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 2;
  RCC_OscInitStruct.PLL.PLLN = 44;
  RCC_OscInitStruct.PLL.PLLP = 1;
  RCC_OscInitStruct.PLL.PLLQ = 3;
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
