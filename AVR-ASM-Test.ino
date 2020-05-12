#include <Arduino.h>

extern "C" {
	// function prototypes
	void start();
	void blink();
}

int main(void)
{
	init();

	Serial.begin(9600);	delay(250);
	Serial.println("Welcome!");

	start();

	while (true)
		blink();

	return 0;
}