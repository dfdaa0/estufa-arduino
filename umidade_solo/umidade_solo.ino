#define ldr A0

int vldr = 0;

void setup() {
  pinMode(ldr, INPUT);
  Serial.begin(9600);
}

void loop() {
  int vldr = analogRead(Moisture_signal);
  Serial.print("Nivel de luminosidade: ");
  Serial.println(vldr);
  delay(100);
}
