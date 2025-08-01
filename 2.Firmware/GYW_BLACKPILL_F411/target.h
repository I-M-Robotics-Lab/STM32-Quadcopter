#pragma once

#define TARGET_BOARD_IDENTIFIER "GYW_BLACKPILL_F411"
#define USBD_PRODUCT_STRING    "GYW_BLACKPILL_F411"

//LEDs
//#define LED0  PC13 
#define LED0 PA0
#define LED0_INVERTED        
#define LED1   PA1
#define LED1_INVERTED       

#define USE_BUZZER
#define BEEPER PB2 
#define BEEPER_INVERTED      

// *************** SPI2 for MPU9250/MPU6500 **********************
#define USE_SPI
#define USE_SPI_DEVICE_2

#define SPI2_SCK_PIN   PB13
#define SPI2_MISO_PIN  PB14
#define SPI2_MOSI_PIN  PB15

//uncomment this block for MPU9250
/*  
#define USE_IMU_MPU9250
#define IMU_MPU9250_ALIGN   CW0_DEG
#define MPU9250_CS_PIN      PB12
#define MPU9250_SPI_BUS     BUS_SPI2
*/

//comment out this block for MPU9250
#define USE_IMU_MPU6500
#define IMU_MPU6500_ALIGN   CW0_DEG
#define MPU6500_CS_PIN      PB12
#define MPU6500_SPI_BUS     BUS_SPI2


// *************** UART *****************************
#define USE_VCP                

#define USE_UART1                         //GPS port
#define UART1_TX_PIN   PA15
#define UART1_RX_PIN   PB3

#define USE_UART2                         //SBUS RC
#define UART2_TX_PIN   PA2                
#define UART2_RX_PIN   PA3

#define SERIAL_PORT_COUNT  3              

#define DEFAULT_RX_TYPE    RX_TYPE_SERIAL
#define SERIALRX_PROVIDER  SERIALRX_SBUS
#define SERIALRX_UART      SERIAL_PORT_USART2

//*************** I2C1 for Baro & Mag ******************
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB6
#define I2C1_SDA                PB7
#define DEFAULT_I2C_BUS         BUS_I2C1

#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C1
#define USE_BARO_BMP280

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C1
#define USE_MAG_QMC5883

//*************** ADC (VBAT) *****************************
#define USE_ADC       
#define ADC_INSTANCE            ADC1
#define ADC1_DMA_STREAM         DMA2_Stream0

#define ADC_CHANNEL_1_PIN       PB0

#define VBAT_ADC_CHANNEL        ADC_CHN_1

//***************  OTHERS *************************
#define DEFAULT_FEATURES  ( FEATURE_TX_PROF_SEL | FEATURE_VBAT)

#define TARGET_IO_PORTA  0xffff
#define TARGET_IO_PORTB  0xffff
#define TARGET_IO_PORTC  0xffff
#define TARGET_IO_PORTD  (BIT(2))

#define MAX_PWM_OUTPUT_PORTS  4
