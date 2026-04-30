#include <Arduino.h>

int myFunction(int, int);

void setup() {
  USBSerial.begin(115200);
}

void loop() {
  int result = myFunction(2, 3);
  USBSerial.printf("Result: %d\n", result);
  delay(1000);
}

int myFunction(int x, int y) {
  return x + y;
}