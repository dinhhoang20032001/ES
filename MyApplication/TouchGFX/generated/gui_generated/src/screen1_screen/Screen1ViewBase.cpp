/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>

Screen1ViewBase::Screen1ViewBase()
{
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    track0.setXY(0, 0);
    track0.setBitmap(touchgfx::Bitmap(BITMAP_TRACK0_ID));
    add(track0);

    redcar.setXY(95, 235);
    redcar.setBitmap(touchgfx::Bitmap(BITMAP_REDCAR_ID));
    add(redcar);
}

Screen1ViewBase::~Screen1ViewBase()
{

}

void Screen1ViewBase::setupScreen()
{

}
