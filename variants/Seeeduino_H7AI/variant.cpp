#include "pins_arduino.h"

#ifdef __cplusplus
extern "C" {
#endif

// Pin number
const PinName digitalPin[] = {
  PG_1,  // MCU_PG1_LED1
  PC_13, // MCU_PC13_LED0
  PD_9,  // MCU_PD9_Button

  // PD14, // WIFI_DEBUG_TXD
  // PD15, // WIFI_DEBUG_RXD
  // PH2,  // WIFI_CHIP_EN

  // PB15,  // BLE_UART_TXD
  // PB14,  // BLE_UART_RXD

  // PF11,  // WIFI_SPI1_MOSI 
  // PF8,   // WIFI_SPI1_MISO
  // PF7,  // WIFI_SPI1_CLK
  // PG15, // WIFI_SPI1_CS
  // PD8,// WIFI_SYNC

  // PG10, // DCMI_D2
  // PH10, // DCMI_D1 
  // PG11, // DCMI_D3
  // PA9,  // DCMI_D0
  // PE4,  // DCMI_D4
  // PA6,  // DCMI_PCLK
  // PD3,  // DCMI_D5
  // PE5,  // DCMI_D6
  // PD7,  // DCMI_XCLK
  // PE6,  // DCMI_D7
  // PA4,  // DCMI_HSYNC
  // PE7,  // DCMI_PWDN
  // PG9,  // DCMI_VSYNC 
  // PH12, // DCMI_RST
  // PF14, // IIC4_SCL
  // PF15, // IIC4_SDA

  // PE15, // LCD_R7
  // PB1,  // LCD_G0
  // PB0,  // LCD_G1
  // PH13, // LCD_G2
  // PE11, // LCD_G3
  // PB10, // LCD_G4
  // PB11, // LCD_G5
  // PC7,  // LCD_G6
  // PG8,  // LCD_G7
  // PG14, // LCD_B0
  // PD0,  // LCD_B1
  // PD6,  // LCD_B2
  // PD10, // LCD_B3
  // PA10, // LCD_B4
  // PA3,  // LCD_B5
  // PB8,  // LCD_B6
  // PB9,  // LCD_B7
  // PG7,  // LCD_CLK
  // PC6,  // LCD_HSYNC
  // PA7,  // LCD_VSYNC
  // PC5,  // LCD_DE
  // PF5,  // LCD_BL
  // PG5,  // LCD_RST
  // PG0,  // LCD_INT
  // PB7,  // LCD_IIC1_SDA
  // PB6,  // LCD_IIC1_SCL

  // PD13, // SAI4_SCKA
  // PD12, // SAI4_FSA
  // PD11, // SAI4_SDA
  // PE3,  // SAI4_SDB
  // PE0,  // SAI4_MCLKA
  // PE2,  // SAI1_CK1
  // PB2,  // SAI1_D1
  // PE1,  // GPIO_Audio_INT

  // PF3,  // QSPI2_IO3
  // PF4,  // QSPI2_CLK
  // PF0,  // QSPI2_IO0
  // PG12, // QSPI2_CS
  // PF1,  // QSPI2_IO1
  // PF2,  // QSPI2_IO2

  // PG6,  // DUAL_QSPI1_CS
  // PF9,  // DUAL_QSPI1_SIO1
  // PC2,  // DUAL_QSPI1_SIO2
  // PF6,  // DUAL_QSPI1_SIO3
  // PF10, // DUAL_QSPI1_CLK
  // PC3,  // DUAL_QSPI1_SIO0
  // PD5,  // DUAL_QSPI1_SIO5
  // PE9,  // DUAL_QSPI1_SIO6
  // PE10, // DUAL_QSPI1_SIO7
  // PD4,  // DUAL_QSPI1_SIO4

  // PC10, // MMC1_D2
  // PC11, // MMC1_D3
  // PD2,  // MMC1_CMD
  // PC12, // MMC1_CLK
  // PC8,  // MMC1_D0
  // PC9,  // MMC1_D1

  // PG4,  // MCU_PG4_D13
  // PA0,  // MCU_A0_D12
  // PE8,  // MCU_PE8_D11
  // PG2,  // MCU_PG2_D10
  // PG3,  // MCU_PG3_D9
  // PB13, // MCU_FDCAN2_TX
  // PB12, // MCU_FDCAN2_RX

  // PA14, // DEBUG_SWCLK
  // PA13, // DEBUG_SWDIO
  // PA1_C, // MCU_PA1_C_A0
  // PF13, // MCU_PF13_A1
  // PC4,  // MCU_PC4_A2
  // PF12, // MCU_PF12_A3
  // PC0,  // MCU_PC0_A4
  // PC1,  // MCU_PC1_A5
  // PB3,  // PB3_SPI_SCK
  // PB5,  // PB5_SPI_MOSI
  // PB4,  // PB4_SPI_MISO
  // PH14, // MCU_PH14_FDCAN_RX
  // PD1,  // MCU_PD1_FDCAN_TX

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
  RCC_OscInitStruct.PLL.PLLQ = 2;
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
