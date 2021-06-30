#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus
/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/
#define PF0  0  // MCU_PG1_LED1
#define PC13 1  // MCU_PC13_LED0
#define PF1  2  // MCU_PF1_Button

#define PD14 3  // WIFI_DEBUG_TXD
#define PD15 4  // WIFI_DEBUG_RXD
#define PC3  5  // WIFI_CHIP_EN

#define PA10 6  // BLE_UART_TXD
#define PB14 7  // BLE_UART_RXD

#define PC1  8  // WIFI_SPI1_MOSI 
#define PC2  9  // WIFI_SPI1_MISO
#define PB13 10 // WIFI_SPI1_CLK
#define PB12 11 // WIFI_SPI1_CS
#define PF2  12 // WIFI_SYNC

#define PE0  13 // DCMI_D2
#define PH10 14 // DCMI_D1
#define PE1  15 // DCMI_D3
#define PA9  16 // DCMI_D0
#define PE4  17 // DCMI_D4
#define PA6  18 // DCMI_PCLK
#define PD3  19 // DCMI_D5
#define PE5  20 // DCMI_D6
#define PA2  21 // DCMI_XCLK
#define PE6  22 // DCMI_D7
#define PA4  23 // DCMI_HSYNC
#define PE7  24 // DCMI_PWDN
#define PG9  25 // DCMI_VSYNC
#define PH12 26 // DCMI_RST

#define PH2  27 // LCD_R0
#define PH3  28 // LCD_R1
#define PA1  29 // LCD_R2
#define PA15 30 // LCD_R3
#define PA5  31 // LCD_R4
#define PH11 32 // LCD_R5
#define PA8  33 // LCD_R6
#define PE15 34 // LCD_R7
#define PB1  35 // LCD_G0
#define PB0  36 // LCD_G1
#define PH13 37 // LCD_G2
#define PE11 38 // LCD_G3
#define PB10 39 // LCD_G4
#define PB11 40 // LCD_G5
#define PC7  41 // LCD_G6
#define PB15 42 // LCD_G7
#define PG14 43 // LCD_B0
#define PD0  44 // LCD_B1
#define PD6  45 // LCD_B2
#define PD10 46 // LCD_B3
#define PE12 47 // LCD_B4
#define PA3  48 // LCD_B5
#define PB8  49 // LCD_B6
#define PB9  50 // LCD_B7
#define PG7  51 // LCD_CLK
#define PC6  52 // LCD_HSYNC
#define PA7  53 // LCD_VSYNC
#define PC5  54 // LCD_DE
#define PF5  55 // LCD_BL
#define PG5  56 // LCD_RST
#define PG2  57 // LCD_INT

#define PD13 58 // SAI4_SCKA
#define PD12 59 // SAI4_FSA
#define PD11 60 // SAI4_SDA
#define PE3  61 // SAI4_SDB
#define PE2  62 // SAI4_MCLKA
#define PG4  63 // GPIO_Audio_INT

#define PC10 64 // MMC1_D2
#define PC11 65 // MMC1_D3
#define PD2  66 // MMC1_CMD
#define PC12 67 // MMC1_CLK
#define PC8  68 // MMC1_D0
#define PC9  69 // MMC1_D1

#define PD8  70 // USART3_TX
#define PD9  71 // USART3_RX

#define PB6  72 // IIC1_SCL
#define PB7  73 // IIC1_SDA
#define PF14 74 // IIC4_SCL             
#define PF15 75 // IIC4_SDA

#define PA11 76  //USB1_DM                 
#define PA12 77  //USB1_DP

#define PE8  78  //PWM_D13
#define PB3  79  //PWM_D12
#define PE10 80  //PWM_D11
#define PF3  81  //PWM_D10
#define PA0  82  //PWM_D9

#define PA1   83  //ADC_A0
#define PF11  84  //ADC_A1
#define PC4   85  //ADC_A2 
#define PF12  86  //ADC_A3
#define PC0   87  //ADC_A4
#define PF13  88  //ADC_A5

#define PG13  89  //SPI6_SCK
#define PB5   90  //SPI6_MOSI
#define PB4   91  //SPI6_MISO

#define PD1   92  //FDCAN_UART4_TX
#define PH14  93  //FDCAN_UART4_RX

#define PA2   94  //DCMI_PWM

// LED
#define LED_YELLOW              PF0   
#define LED_RED                 PC13            
#define LED_BUILTIN             LED_YELLOW

// Wifi
#define WIFI_CHIP_EN            PC3   

// LCD
#define LCD_BACKGROUND_ENABLE   PF5
#define LCD_RESET               PG5

// DCMI
#define DCMI_PIN_D0             PA9 
#define DCMI_PIN_D1             PH10
#define DCMI_PIN_D2             PE0
#define DCMI_PIN_D3             PE1
#define DCMI_PIN_D4             PE4
#define DCMI_PIN_D5             PD3
#define DCMI_PIN_D6             PE5
#define DCMI_PIN_D7             PE6
#define DCMI_PIN_PWDN           PE7
#define DCMI_PIN_RESET          PH12
#define DCMI_PIN_HSYNC          PA4
#define DCMI_PIN_VSYNC          PG9
#define DCMI_PIN_XCLK           PA2
#define DCMI_PIN_PCLK           PA6
#define DCMI_PIN_IIC4_SCL       PF14
#define DCMI_PIN_IIC4_SDA       PF15

// On-board user button
#define USER_BTN                PF1

// UART Definitions
#define SERIAL_UART_INSTANCE    3 //Connected to ST-Link
#define HAVE_HWSERIAL9
#define HAVE_HWSERIAL1
#define HAVE_HWSERIAL4

//Serial pin used for console (ex: ST-Link)/
//Required by Firmata
#define PIN_SERIAL3_TX           PD8
#define PIN_SERIAL3_RX           PD9

#define PIN_SERIAL9_TX           PD15
#define PIN_SERIAL9_RX           PD14
#define RTL8720D                 Serial9          //Redifine Serial9

#define PIN_SERIAL1_TX           PB14
#define PIN_SERIAL1_RX           PA10

#define PIN_SERIAL4_TX           PD1
#define PIN_SERIAL4_RX           PH14

// I2C Definitions
#define PIN_WIRE_SCL            PF14
#define PIN_WIRE_SDA            PF15

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#define TIMER_TONE              TIM6
#define TIMER_SERVO             TIM7

//PWM
#define PWM_D13                 PE8
#define PWM_D12                 PB3
#define PWM_D11                 PE10
#define PWM_D10                 PF3
#define PWM_D9                  PA0
#define DCMI_PWM                PA2 

//ADC
#define ADC_A0                  PA1
#define ADC_A1                  PF11
#define ADC_A2                  PC4
#define ADC_A3                  PF12
#define ADC_A4                  PC0
#define ADC_A5                  PF13

//SPI
#define PIN_SPI_SCK                PG13
#define PIN_SPI_MOSI               PB5
#define PIN_SPI_MISO               PB4

#define NUM_DIGITAL_PINS        95
#define NUM_ANALOG_INPUTS       20
#define NUM_ANALOG_FIRST        86



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
