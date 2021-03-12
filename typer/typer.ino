
#include "DigiKeyboard.h"

void setup() {
  // Allow time for the usb to be recognized by the system
  pinMode(1, OUTPUT);
  for (i = 0; i < 10, i++) {
    digitalWrite(1, LOW);
    DigiKeyboard.delay(250);
    digitalWrite(1, HIGH);
    DigiKeyboard.delay(250);
  }
}

void loop() {
  DigiKeyboard.print("sample text");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  for(;;){ /*empty*/ }
}



