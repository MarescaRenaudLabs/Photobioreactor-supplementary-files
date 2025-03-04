#define PWM_CO2_PIN 2       // Pin to read PWM signal from CO2 sensor
#define SOL_PIN 7           // Solenoid Pin that pulses HIGH for 100ms
#define PWM_LED_PIN 9       // LED Pin to generate 50% duty cycle PWM

// Variables for easier configuration
const int LED_PWM_VALUE = 0.5 * 255;             // 50% duty cycle value
const unsigned long SOLENOID_ON_TIME = 100;      // Solenoid activation time in ms
const unsigned long REPEAT_DELAY_OFF = 2000;     // Delay if duty cycle is not in range in ms
const unsigned long REPEAT_DELAY_ON = REPEAT_DELAY_OFF - SOLENOID_ON_TIME; // Delay when solenoid is on

void setup() {
    pinMode(PWM_CO2_PIN, INPUT);
    pinMode(SOL_PIN, OUTPUT);
    pinMode(PWM_LED_PIN, OUTPUT);
    
    // Set solenoid pin to low
    digitalWrite(SOL_PIN, LOW);

    // Set the LED PWM to 50%
    analogWrite(PWM_LED_PIN, LED_PWM_VALUE);
}

void loop() {
    unsigned long highTime = pulseIn(PWM_CO2_PIN, HIGH);
    unsigned long lowTime = pulseIn(PWM_CO2_PIN, LOW);
    unsigned long period = highTime + lowTime;

    float dutyCycle = (period > 0) ? (highTime * 100.0 / period) : 0;

    // If duty cycle is below 50% (adjust this according to your CO2 sensor) 
	//Senseair S8 2% PWM range is 0-20000 ppm = 0-100% PWM, 1% CO2 = 10000 ppm = 50% duty cycle
    if (dutyCycle < 50.0) {
        digitalWrite(SOL_PIN, HIGH);  // Activate solenoid
        delay(SOLENOID_ON_TIME);      // Keep solenoid on for the defined time
        digitalWrite(SOL_PIN, LOW);    // Turn off solenoid
        delay(REPEAT_DELAY_ON);        // Delay to avoid excessive triggering
    } else {
        delay(REPEAT_DELAY_OFF);       // Delay to repeat loop
    }
}
