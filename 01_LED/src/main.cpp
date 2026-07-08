#include <Arduino.h>
#include <led.h>

void setup() {
  led_init();
}

void loop() {
  led_on();
  led_off();

}