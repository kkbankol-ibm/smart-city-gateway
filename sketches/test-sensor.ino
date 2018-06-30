String soundPin = "A0";

void setup() {
  // put your setup code here, to run once:
  pinMode(soundPin, INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  soundValue = constrain(analogRead(soundPin), 0, 255);
  Serial.println(F(soundValue));
}
