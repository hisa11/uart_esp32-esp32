#include <HardwareSerial.h>

HardwareSerial SerialPort(2);  // use UART2


char number = ' ';
// int LED = 15;

void setup() {
  SerialPort.begin(15200, SERIAL_8N1, 16, 17);
  Serial.begin(9600);
  // pinMode(LED, OUTPUT);
}
void loop() {
  if (SerialPort.available()) {
    char number = SerialPort.read();
    Serial.write(number);
    Serial.write("\n");
  }
}

