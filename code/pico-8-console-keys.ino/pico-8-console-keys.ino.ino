#include <Bounce.h>

Bounce button1 = Bounce(1, 10);
Bounce button2 = Bounce(2, 10);
Bounce button3 = Bounce(3, 10);
Bounce button4 = Bounce(4, 10);
Bounce button5 = Bounce(5, 10);
Bounce button6 = Bounce(6, 10);
Bounce button7 = Bounce(7, 10);
Bounce button8 = Bounce(8, 10);
Bounce button9 = Bounce(9, 10);

void setup() {
  pinMode(1, INPUT_PULLDOWN);
  pinMode(2, INPUT_PULLDOWN);
  pinMode(3, INPUT_PULLDOWN);
  pinMode(4, INPUT_PULLDOWN);
  pinMode(5, INPUT_PULLDOWN);
  pinMode(6, INPUT_PULLDOWN);
  pinMode(7, INPUT_PULLDOWN);
  pinMode(8, INPUT_PULLDOWN);
  pinMode(9, INPUT_PULLDOWN);
}

void loop() {
  button1.update();
  button2.update();
  button3.update();
  button4.update();
  button5.update();
  button6.update();
  button7.update();
  button8.update();
  button9.update();

  //release Button Code

  if (button1.fallingEdge()) {
    Keyboard.release(KEY_UP);
  }
  if (button2.fallingEdge()) {
    Keyboard.release(KEY_DOWN);
  }
  if (button3.fallingEdge()) {
    Keyboard.release(KEY_LEFT);
  }
  if (button4.fallingEdge()) {
    Keyboard.release(KEY_RIGHT);
  }
  if (button5.fallingEdge()) {
    Keyboard.release(KEY_Z);
  }
  if (button6.fallingEdge()) {
    Keyboard.release(KEY_X);
  }
  if (button7.fallingEdge()) {
    Keyboard.release(KEY_ESC);
  }
  if (button8.fallingEdge()) {
    Keyboard.release(KEY_ENTER);
  }

  //press Button Code

  if (button1.risingEdge()) {
    Keyboard.press(KEY_UP);
  }
  if (button2.risingEdge()) {
    Keyboard.press(KEY_DOWN);
  }
  if (button3.risingEdge()) {
    Keyboard.press(KEY_LEFT);
  }
  if (button4.risingEdge()) {
    Keyboard.press(KEY_RIGHT);
  }
  if (button5.risingEdge()) {
    Keyboard.press(KEY_Z);
  }
  if (button6.risingEdge()) {  
    Keyboard.press(KEY_X);
  }
  if (button7.risingEdge()) {
    Keyboard.press(KEY_ESC);
  }
  if (button8.risingEdge()) {
    Keyboard.press(KEY_ENTER);
  }
}
