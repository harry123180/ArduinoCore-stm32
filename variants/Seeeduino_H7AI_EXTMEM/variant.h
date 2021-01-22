#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus
/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/
#define PG1  0  // MCU_PG1_LED1
#define PC13 1  // MCU_PC13_LED0
#define PD9  2  // MCU_PD9_Button



#define PD14 3  // WIFI_DEBUG_TXD
#define PD15 4  // WIFI_DEBUG_RXD
#define PH2  5  // WIFI_CHIP_EN

          

#define PB15 6  // BLE_UART_TXD
#define PB14 7  // BLE_UART_RXD



#define PF11 8  // WIFI_SPI1_MOSI 
#define PF8  9  // WIFI_SPI1_MISO
#define PF7  10 // WIFI_SPI1_CLK
#define PG15 11 // WIFI_SPI1_CS
#define PD8  12 // WIFI_SYNC


#define PG10 13 // DCMI_D2
#define PH10 14 // DCMI_D1
#define PG11 15 // DCMI_D3
#define PA9  16 // DCMI_D0
#define PE4  17 // DCMI_D4
#define PA6  18 // DCMI_PCLK
#define PD3  19 // DCMI_D5
#define PE5  20 // DCMI_D6
#define PD7  21 // DCMI_XCLK
#define PE6  22 // DCMI_D7
#define PA4  23 // DCMI_HSYNC
#define PE7  24 // DCMI_PWDN
#define PG9  25 // DCMI_VSYNC
#define PH12 26 // DCMI_RST
#define PF14 27 // IIC4_SCL
#define PF15 28 // IIC4_SDA


#define PG13 29 // LCD_R0
#define PH3  30 // LCD_R1
#define PA1  31 // LCD_R2
#define PA15 32 // LCD_R3
#define PA5  33 // LCD_R4
#define PH11 34 // LCD_R5
#define PA8  35 // LCD_R6
#define PE15 36 // LCD_R7
#define PB1  37 // LCD_G0
#define PB0  38 // LCD_G1
#define PH13 39 // LCD_G2
#define PE11 40 // LCD_G3
#define PB10 41 // LCD_G4
#define PB11 42 // LCD_G5
#define PC7  43 // LCD_G6
#define PG8  44 // LCD_G7
#define PG14 45 // LCD_B0
#define PD0  46 // LCD_B1
#define PD6  47 // LCD_B2
#define PD10 48 // LCD_B3
#define PA10 49 // LCD_B4
#define PA3  50 // LCD_B5
#define PB8  51 // LCD_B6
#define PB9  52 // LCD_B7
#define PG7  53 // LCD_CLK
#define PC6  54 // LCD_HSYNC
#define PA7  55 // LCD_VSYNC
#define PC5  56 // LCD_DE
#define PF5  57 // LCD_BL
#define PG5  58 // LCD_RST
#define PG0  59 // LCD_INT
#define PB7  60 // LCD_IIC1_SDA
#define PB6  61 // LCD_IIC1_SCL


#define PD13 62 // SAI4_SCKA
#define PD12 63 // SAI4_FSA
#define PD11 64 // SAI4_SDA
#define PE3  65 // SAI4_SDB
#define PE0  66 // SAI4_MCLKA
#define PE2  67 // SAI1_CK1
#define PB2  68 // SAI1_D1
#define PE1  69 // GPIO_Audio_INT

#define PF3  70 // QSPI2_IO3
#define PF4  71 // QSPI2_CLK
#define PF0  72 // QSPI2_IO0
#define PG12 73 // QSPI2_CS
#define PF1  74 // QSPI2_IO1
#define PF2  75 // QSPI2_IO2

#define PG6  76 // DUAL_QSPI1_CS
#define PF9  77 // DUAL_QSPI1_SIO1
#define PC2  78 // DUAL_QSPI1_SIO2
#define PF6  79 // DUAL_QSPI1_SIO3
#define PF10 80 // DUAL_QSPI1_CLK
#define PC3  81 // DUAL_QSPI1_SIO0
#define PD5  82 // DUAL_QSPI1_SIO5
#define PE9  83 // DUAL_QSPI1_SIO6
#define PE10 84 // DUAL_QSPI1_SIO7
#define PD4  85 // DUAL_QSPI1_SIO4

#define PC10 86 // MMC1_D2
#define PC11 87 // MMC1_D3
#define PD2  88 // MMC1_CMD
#define PC12 89 // MMC1_CLK
#define PC8  90 // MMC1_D0
#define PC9  91 // MMC1_D1


#define PG4  92 // MCU_PG4_D13
#define PA0  93 // MCU_A0_D12
#define PE8  94 // MCU_PE8_D11
#define PG2  95 // MCU_PG2_D10
#define PG3  96 // MCU_PG3_D9
#define PB13 97 // MCU_FDCAN2_TX
#define PB12 98 // MCU_FDCAN2_RX

#define PA14 99 // DEBUG_SWCLK
#define PA13 100 // DEBUG_SWDIO
#define PA1_C 101 // MCU_PA1_C_A0
#define PF13 102  // MCU_PF13_A1
#define PC4  103  // MCU_PC4_A2
#define PF12 104  // MCU_PF12_A3
#define PC0  105  // MCU_PC0_A4
#define PC1  106  // MCU_PC1_A5
#define PB3  107  // PB3_SPI_SCK
#define PB5  108  // PB5_SPI_MOSI
#define PB4  109  // PB4_SPI_MISO
#define PH14 110  // MCU_PH14_FDCAN_RX
#define PD1  111  // MCU_PD1_FDCAN_TX

#define PA11 112  // USB1_DM
#define PA12 113  // USB1_DP


// On-board LED pin number
#define LED_BUILTIN             PG1
#define LED_RED                 PC13  // LD1           
#define LED_YELLOW              PG1  // LD2

#define NUM_DIGITAL_PINS        113
#define NUM_ANALOG_INPUTS       10
#define NUM_ANALOG_FIRST        78




// On-board user button
#define USER_BTN                PC13

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#define TIMER_TONE              TIM6
#define TIMER_SERVO             TIM7

// UART Definitions
#define SERIAL_UART_INSTANCE    3 //Connected to ST-Link

//Serial pin used for console (ex: ST-Link)/
//Required by Firmata
#define PIN_SERIAL_RX           PD9
#define PIN_SERIAL_TX           PD8

// HSE default value is 25MHz in HAL
// HSE_BYPASS is 8MHz
// #ifndef HSE_BYPASS_NOT_USED
// #define HSE_VALUE 8000000
// #endif

/* Extra HAL modules */
#define HAL_DAC_MODULE_ENABLED
// #define HAL_ETH_MODULE_ENABLED
#define HAL_DCMI_MODULE_ENABLED
#define HAL_I2C_MODULE_ENABLED
#define HAL_ADC_MODULE_ENABLED
#define HAL_TIM_MODULE_ENABLED
// #define HAL_UART_MODULE_ENABLED
#define HAL_SPI_MODULE_ENABLED
#define HAL_FDCAN_MODULE_ENABLED
#define HAL_SD_MODULE_ENABLED
#define HAL_SAI_MODULE_ENABLEDA
#define HAL_MDMA_MODULE_ENABLED

#ifdef __cplusplus
} // extern "C"
#endif
/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
  // These serial port names are intended to allow libraries and architecture-neutral
  // sketches to automatically default to the correct port name for a particular type
  // of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
  // the first hardware serial port whose RX/TX pins are not dedicated to another use.
  //
  // SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
  //
  // SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
  //
  // SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
  //
  // SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
  //
  // SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
  //                            pins are NOT connected to anything by default.
  #define SERIAL_PORT_MONITOR     Serial
  #define SERIAL_PORT_HARDWARE    Serial
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
