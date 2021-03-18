/**
 * Define all the pins
 * Pin Used Interrupts (2, 3), LCD (4, 5, 6, 7, 8, 9), DHT11 (10), Ultra Sonic Sensor (11, 12), LCD Backlit (A0), Buzzer (A1)
 */
// LCD pins
#define LCD_I2C_ADDR 0x27
#define LCD_WIDTH 16
#define LCD_HEIGHT 2

// Pins for sensors
#define DHT_PIN 9
#define TRIGGER_PIN 5
#define ECHO_PIN 4

//Buzzer pin
#define BUZZER_PIN A1

// Interupt Pins
#define BUZZER_INT 2
#define SELF_STOP_INT 3