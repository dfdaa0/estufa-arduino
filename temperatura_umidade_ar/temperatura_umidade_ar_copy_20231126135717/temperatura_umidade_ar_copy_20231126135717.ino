#include <DHT.h>
#include <DHT_U.h>

#define pinoDHT11 7
#define temp 2000

DHT sensorDHT11(pinoDHT11, DHT11); // Corrigido aqui

void setup() {
  Serial.begin(9600);
  sensorDHT11.begin(); // Inicialize o sensor DHT
  delay(temp); // Corrigido aqui
}

void loop() {
  float umidade = sensorDHT11.readHumidity();
  float temperatura = sensorDHT11.readTemperature();

  // Verifica se a leitura falhou e sai do loop para tentar novamente.
  if (isnan(umidade) || isnan(temperatura)) {
    Serial.println("Falha na leitura do sensor DHT!");
    return;
  }

  Serial.print("Umidade: ");
  Serial.print(umidade);
  Serial.print("%\t");
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println("°C");
  delay(temp); // Corrigido aqui
}
