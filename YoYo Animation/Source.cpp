#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { 40, 3 };  // Start position
	SetConsoleCursorPosition(screen, pos);
	cout << "O" << endl;
	Sleep(500);

	// Watch the YoYo go down & back up 3 times
	for (int tossIt = 1; tossIt <= 3; tossIt++)
	{
		// YoYo Unwinds
		while (pos.Y <= 20) // pos.Y is the row
		{
			// Moves the YoYo down 1 position and then pause
			SetConsoleCursorPosition(screen, pos);
			cout << "|" << endl;
			pos.Y++;
			SetConsoleCursorPosition(screen, pos);
			cout << "O" << endl;
			Sleep(100);
		}
		// YoYo Winds back up
		while (pos.Y > 3)
		{
			SetConsoleCursorPosition(screen, pos);
			cout << " " << endl;
			pos.Y--;
			SetConsoleCursorPosition(screen, pos);
			cout << "O" << endl;
			Sleep(100);
		}
	}
	return 0;
}