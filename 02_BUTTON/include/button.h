#ifndef BUTTON_H
#define BUTTON_H

#define BUTTON_PIN 0

class Button
{
    public :
        int prev_state;
        int cur_state;
        int count;
};

void init_button(Button &button);
void print_button_state(Button &button);

#endif