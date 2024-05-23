#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);
}

void loop() {
    DigiKeyboard.delay(625);
    DigiKeyboard.sendKeyStroke(KEY_CAPS_LOCK);
    DigiKeyboard.delay(625);
    DigiKeyboard.sendKeyStroke(KEY_CAPS_LOCK);
}
