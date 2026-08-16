/*
  =====================================================
  PROJECT : IR Obstacle Detection System
  BOARD   : Arduino UNO
  SENSOR  : IR Obstacle Sensor Module
  =====================================================

  CONNECTIONS:

  IR VCC  -> Arduino 5V
  IR GND  -> Arduino GND
  IR OUT  -> Arduino D2

  Developed by:
  Alpha Digitronix Solutions

  THINK • BUILD • INNOVATE
  =====================================================
*/

const int irSensorPin = 2;

void setup() {

  // Configure IR sensor pin
  pinMode(irSensorPin, INPUT);

  // Start Serial Communication
  Serial.begin(9600);

  Serial.println("==============================");
  Serial.println(" IR OBSTACLE DETECTION SYSTEM");
  Serial.println("==============================");
}

void loop() {

  // Read IR sensor
  int sensorState = digitalRead(irSensorPin);

  /*
    Most IR obstacle modules are ACTIVE LOW.

    LOW  = Obstacle Detected
    HIGH = No Obstacle
  */

  if (sensorState == LOW) {

    Serial.println("Obstacle Detected!");

  } else {

    Serial.println("Path Clear");
  }

  delay(300);
}