LED1_PIN = 12;
LED2_PIN = 11;
LED3_PIN = 10;
LED4_PIN = 9;
LED5_PIN = 8;
LED_delay_for_test = 500;//in ms
void setup() {
//LED init
pinMode(LED1_PIN,OUTPUT);
pinMode(LED1_PIN,OUTPUT);
pinMode(LED1_PIN,OUTPUT);
pinMode(LED1_PIN,OUTPUT);
pinMode(LED1_PIN,OUTPUT);
//LED test
digitalWrite(LED1_PIN, HIGH);
delay(LED_delay_for_test);
digitalWrite(LED1_PIN, LOW);
digitalWrite(LED2_PIN, HIGH);
delay(LED_delay_for_test);
digitalWrite(LED2_PIN, LOW);
digitalWrite(LED3_PIN, HIGH);
delay(LED_delay_for_test);
digitalWrite(LED3_PIN, LOW);
digitalWrite(LED4_PIN, HIGH);
delay(LED_delay_for_test);
digitalWrite(LED4_PIN, LOW);
digitalWrite(LED5_PIN, HIGH);
delay(LED_delay_for_test);
digitalWrite(LED5_PIN, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

}
