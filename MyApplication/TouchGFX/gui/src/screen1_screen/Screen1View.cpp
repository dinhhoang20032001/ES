#include <gui/screen1_screen/Screen1View.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <cmsis_os.h>
Screen1View::Screen1View()
{
	tickCount = 0;
}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
//    image1.SetY(0);
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

extern osMessageQueueId_t Queue1Handle;
void Screen1View::handleTickEvent()
{
	Screen1ViewBase::handleTickEvent();
	tickCount += 1;
	if (tickCount > 5) tickCount = 1;
	track0.setBitmap(touchgfx::Bitmap(tickCount));
	redcar.setY(235);

	uint8_t res = 0;
	uint32_t count = osMessageQueueGetCount(Queue1Handle);
	int16_t x = redcar.getX();
	x -= 2;
	if (x < 0) {
		x = 0;
	}
	redcar.setX(x);

	if (count > 0) {
		osMessageQueueGet(Queue1Handle, &res, NULL, osWaitForever);
		if (res == 'R') {
			int16_t x = redcar.getX();
			x += 4;
			if (x > 190) {
				x = 190;
			}
			redcar.setX(x);
		}
	}

	invalidate();
}
