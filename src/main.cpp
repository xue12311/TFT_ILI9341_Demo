#include <Arduino.h>
#include <TFT_eSPI.h>
TFT_eSPI tft = TFT_eSPI();
void setup()
{
    // 初始化
    tft.init();
    //清理屏幕  设置屏幕背景色
    tft.fillScreen(TFT_BLACK);

    // 设置起始坐标(20, 10)，4 号字体
    tft.setCursor(20, 10, 4);
    // 设置字体颜色为白色 , 黑色文本背景
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    // 设置显示的文字，注意这里有个换行符 \n 产生的效果
    tft.println("White Text \n");
    tft.println("Black Text");
    //不换行
    tft.print("White Text ");
    tft.print("Black Text");

    //设置起始坐标(10, 120)，2号字体，文本颜色为红色，背景色为白色
    tft.setCursor(10, 120);
    tft.setTextFont(2);
    tft.setTextColor(TFT_RED, TFT_WHITE);
    tft.println("Red Text And White Background");

    //设置起始坐标(10, 140)，4号字体，文本颜色为绿色，无背景色
    tft.setCursor(10, 140, 4);
    tft.setTextColor(TFT_GREEN);
    tft.println("Green Text");

    //设置起始坐标(50, 180)，4号字体，文本颜色为蓝色，无背景色
    tft.setCursor(50, 180);
    tft.setTextFont(4);
    tft.setTextColor(TFT_BLUE);
    tft.println("2022-08-21");

    //设置起始坐标(50, 240)，7号字体，文本颜色为 粉色，无背景色
    tft.setCursor(10, 240);
    tft.setTextFont(7);
    tft.setTextColor(TFT_PINK);
    tft.println("20:22:22");
}

void loop()
{
}