
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
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);

  DigiKeyboard.print("https://youtu.be/-pvbvRMWkMU");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  DigiKeyboard.print("https://www.youtube.com/watch?v=k6B_jYtjvME");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  DigiKeyboard.print("https://www.youtube.com/watch?v=2Oz_caE8oQE");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  DigiKeyboard.print("https://www.youtube.com/watch?v=bydubvsUFYE");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  DigiKeyboard.print("https://www.youtube.com/watch?v=qNuQbJst4Lk");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  DigiKeyboard.print("https://www.youtube.com/watch?v=4ULJhI7ojBM");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  DigiKeyboard.print("https://www.youtube.com/watch?v=4ULJhI7ojBM");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  DigiKeyboard.print("https://www.youtube.com/watch?v=r3vYyGPFYo8");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  DigiKeyboard.print("https://www.youtube.com/watch?v=TZrxNZibe_I");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  DigiKeyboard.print("https://www.youtube.com/watch?v=6vvMPD0iwGk");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("https://www.singingnews.com/wp-content/uploads/2019/02/Gaithers-750x400-image.png");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  for(;;){ /*empty*/ }
}



