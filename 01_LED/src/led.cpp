#include "led.h"
#include <Arduino.h>

#define LED_PIN 2

void led_init(void) 
{
  pinMode(LED_PIN, OUTPUT);
}

void led_on(void)
{
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
}

void led_off(void)
{
    digitalWrite(LED_PIN, LOW);
    delay(1000);
}
