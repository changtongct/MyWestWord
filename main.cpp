#include"Student.h"

int main()
{
	Student Tony(1);

	for(int i=0;i<20;i++)
	{
		Tony.Update();

		Sleep(800);
	}

	PressAnyKeyToContinue();

	return 0;
}