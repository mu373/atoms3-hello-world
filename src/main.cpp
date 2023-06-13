#include <M5Unified.h>
// https://winchans.com/archives/426

void setup() {
    auto cfg = M5.config();
    M5.begin(cfg);

    M5.Display.init();
    //画面を反転したくない場合は以下setRotation行をコメントアウト
    // M5.Display.setRotation(2);
    M5.Display.startWrite();
    M5.Display.setFont(&fonts::lgfxJapanGothicP_20);
    M5.Display.setTextColor(WHITE, BLACK);
    M5.Display.println("Hello World!");
    M5.Display.setTextColor(BLUE, BLACK);
    M5.Display.println("ひらがな");
    M5.Display.setTextColor(GREEN, BLACK);
    M5.Display.println("カタカナ");
    M5.Display.setTextColor(YELLOW, BLACK);
    M5.Display.println("漢字");
    M5.Display.endWrite();
}

void loop() {
  
}