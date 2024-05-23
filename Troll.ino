#include "DigiKeyboard.h"

void setup() {}

void loop() {
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
}
