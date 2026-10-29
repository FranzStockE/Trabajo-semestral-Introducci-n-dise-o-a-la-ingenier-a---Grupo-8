// main.ino prototipo entrega 2

#include "Adafruit_VL53L0X.h"

// Crear una instancia del sensor
Adafruit_VL53L0X lox = Adafruit_VL53L0X();

void setup() {
  // Inicializar la comunicación serial
  Serial.begin(115200);
  
  // Esperar a que el puerto serie se abra (útil para placas como Leonardo o ESP32)
  while (!Serial) {
    delay(1);
  }

  Serial.println("Prueba del sensor VL53L0X ToF");

  // Iniciar el sensor y verificar si está bien conectado
  if (!lox.begin()) {
    Serial.println(F("¡No se pudo encontrar el sensor VL53L0X! Revisa las conexiones."));
    while (1);
  }
  
  Serial.println(F("¡Sensor VL53L0X inicializado correctamente!"));
}

void loop() {
  VL53L0X_RangingMeasurementData_t measure;
  
  // Realizar la medición
  lox.rangingTest(&measure, false); // El parámetro 'false' es para desactivar la depuración detallada

  // Comprobar si la lectura es válida
  if (measure.RangeStatus != 4) { // Status 4 significa que la lectura está fuera de rango o es inválida
    Serial.print("Distancia (mm): ");
    Serial.println(measure.RangeMilliMeter);
  } else {
    Serial.println("Fuera de rango (muy lejos o sin rebote)");
  }

  delay(500); // Esperar medio segundo entre cada lectura
}
