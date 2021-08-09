const int led = 6;
int brightness = 0;
int treshold = 160;

void setup() {
  pinMode(led, OUTPUT); // LED pin
  pinMode(A0, INPUT); // LDR pin
}

void loop() {
  brightness =  (analogRead(A0));
  brightness = map(brightness, 0, 1023, 255, 0);
  if (brightness < treshold){
    brightness=0;
  }
  analogWrite(led, brightness);
}
