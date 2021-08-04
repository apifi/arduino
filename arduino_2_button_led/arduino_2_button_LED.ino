/***
Build of a circuit that contains two push buttons, an LED, and resistors. 
The LED turns on when either the first button or the second button is pressed. 
Only Arduino is used for power and ground.
***/
const int button1 = 2;     
const int button2 = 3;
const int led = 7;
int button1State = 0; 
int button2State = 0; 

void setup() {
pinMode(led, OUTPUT); // LED pin
pinMode(button1, INPUT); // push button 1
pinMode(button2, INPUT); // push button 2
}

void loop() {

  button1State = digitalRead(button1);
  button2State = digitalRead(button2);

    if (button1State == HIGH || button2State == HIGH) {
    // turn LED on:
    digitalWrite(led, HIGH);
  } else {
    // turn LED off:
    digitalWrite(led, LOW);
  }
}
