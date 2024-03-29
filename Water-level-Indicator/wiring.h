/**
 * Define all the pins
 * Pin Used Interrupts (2, 3), LCD (4, 5, 6, 7, 8, 9), DHT11 (10), Ultra Sonic Sensor (11, 12), LCD Backlit (A0), Buzzer (A1)
 */
/**
 * @brief LCD configuration
 */

// LCD I2C Address
#define LCD_I2C_ADDR 0x27

// LCD Width
#define LCD_WIDTH 16

// LCD Height
#define LCD_HEIGHT 2

/**
 * @brief Sensor Pins configuration
 */

// DHT pin
#define DHT_PIN 9

// Trigger pin for ultrasonic sensor
#define TRIGGER_PIN 6

// Echo Pin for ultrasonic sensor
#define ECHO_PIN 5

// Self stop Relay Pin
// In our home no SELF stop is used
// In dada's home self stop is used with pin 4
#define SELF_STOP_RELAY_PIN A1
// #define SELF_STOP_RELAY_PIN 4

//Buzzer pin
// In our home buzzer is used with pin 4
// In dada's home buzzer is used with pin A1
#define BUZZER_PIN 4
// #define BUZZER_PIN A1

// Interrupt Pins

// Buzzer interrupt
#define BUZZER_INT 2

// Self Stop interrupt
#define SELF_STOP_INT 3
