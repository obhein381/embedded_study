#include <Arduino.h>
#include "button.h"

Button button1;

void setup() {
  Serial.begin(115200);
  init_button(button1);
}

void loop() {
  print_button_state(button1);
}
