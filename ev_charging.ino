int voltagePin = A0;   // Analog pin for voltage sensing
float voltage = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(voltagePin);

  // Convert analog value to voltage (0–5V)
  voltage = sensorValue * (5.0 / 1023.0);

  Serial.print("Voltage: ");
  Serial.println(voltage);

  // Check charging status
  if (voltage > 3.0) {
    Serial.println("Charging Active");
  } else {
    Serial.println("Charging Not Active");
  }

  delay(1000);
}
