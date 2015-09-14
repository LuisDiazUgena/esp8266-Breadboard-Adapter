
void setup() {
    Serial2.begin(9600); // ESP Serial
    Serial.begin(9600);

}

void loop() {
  while(Serial2.available()) Serial.write(Serial2.read());
  while(Serial.available()) Serial2.write(Serial.read());
}
