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


// ----------------------------------------------------------------------------
