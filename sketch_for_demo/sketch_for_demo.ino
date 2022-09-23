int LED1_PIN = 12;
int LED2_PIN = 11;
int LED3_PIN = 10;
int LED4_PIN = 9;
int LED5_PIN = 8;

int LED_delay_for_test = 500;//in ms

int SW1_PIN = A0;

void setup() {
//LED init
pinMode(LED1_PIN,OUTPUT);
pinMode(LED2_PIN,OUTPUT);
pinMode(LED3_PIN,OUTPUT);
pinMode(LED4_PIN,OUTPUT);
pinMode(LED5_PIN,OUTPUT);
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
int switch_value=0;

switch_value=get_switch(SW1_PIN);
if (switch_value==0){
  digitalWrite(LED1_PIN, HIGH);
  digitalWrite(LED2_PIN, HIGH);
  digitalWrite(LED3_PIN, HIGH);
  digitalWrite(LED4_PIN, HIGH);
  digitalWrite(LED5_PIN, HIGH);
}
if (switch_value==1){
  digitalWrite(LED1_PIN, HIGH);
  digitalWrite(LED2_PIN, LOW);
  digitalWrite(LED3_PIN, LOW);
  digitalWrite(LED4_PIN, LOW);
  digitalWrite(LED5_PIN, LOW);
}
if (switch_value==2){
  digitalWrite(LED1_PIN, LOW);
  digitalWrite(LED2_PIN, HIGH);
  digitalWrite(LED3_PIN, LOW);
  digitalWrite(LED4_PIN, LOW);
  digitalWrite(LED5_PIN, LOW);
}
if (switch_value==3){
  digitalWrite(LED1_PIN, LOW);
  digitalWrite(LED2_PIN, LOW);
  digitalWrite(LED3_PIN, HIGH);
  digitalWrite(LED4_PIN, LOW);
  digitalWrite(LED5_PIN, LOW);
}

if (switch_value==4){
  digitalWrite(LED1_PIN, LOW);
  digitalWrite(LED2_PIN, LOW);
  digitalWrite(LED3_PIN, LOW);
  digitalWrite(LED4_PIN, HIGH);
  digitalWrite(LED5_PIN, LOW);
}
if (switch_value==5){
  digitalWrite(LED1_PIN, LOW);
  digitalWrite(LED2_PIN, LOW);
  digitalWrite(LED3_PIN, LOW);
  digitalWrite(LED4_PIN, LOW);
  digitalWrite(LED5_PIN, HIGH);
}




  
}

int get_switch(int AD_Wandler){
  int return_value = 0;
  int x = analogRead(AD_Wandler);
  if (x >= 690 && x <= 710){
    return_value = 1;//Switch OK, no Button pressed
  }
  else if (x >= 640 && x <= 670){
    return_value = 2;//B1 pressed
  }
  else if (x >= 580 && x <= 610){
    return_value = 3; // B2 pressed
  }
  else if (x >= 1010 && x <= 1023){
    return_value = 4; //on line cutted
  }
  else if (x >= 500 && x <= 520){
    return_value = 4; //Botton wires short cut
  }
  else if (x >= 0 && x <= 10){
    return_value = 4; //Botton wires short cut
  }
  else if (x >= 540 && x <= 560){
    return_value = 4; //Botton wires short cut
  }
  
  return(return_value);
}
