#include <Arduino.h>
#include "button.h"

void init_button(Button &button)
{
    pinMode(BUTTON_PIN, INPUT);
    button.count = 0;
    button.cur_state = HIGH;
    button.prev_state = HIGH;
}

void print_button_state(Button &button)
{

    button.cur_state = digitalRead(BUTTON_PIN);
    if (button.cur_state == LOW && button.prev_state == HIGH)
    {
        button.count++;
        Serial.println("button pressed");
        Serial.print("count =");
        Serial.println(button.count);
        button.prev_state = button.cur_state;
    }
    if (button.cur_state == HIGH && button.prev_state == LOW)
    {
        button.prev_state = button.cur_state;
    }
}