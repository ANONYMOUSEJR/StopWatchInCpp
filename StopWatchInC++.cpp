#include <iostream>
#include <thread> // Used for "sleep()" func [This temporarily pauses the code for the given amount of time].

using namespace std;
using namespace this_thread;

inline void timePrint(int hr, int min, int sec, int msec) { system("cls"); cout << hr << "h : " << min << "min : " << sec  << "sec. " << msec << "milisec" << endl; }

inline void begin() { again: cout << "Press the Enter key to start... (Also ALT + ENTER to fullscreen)"; if (cin.get() == '\n') { system("cls"); } else { system("cls"); goto again; } }


int main()
{
	int hr = 0, min = 0, sec = 0, msec = 0;

	begin();

start: // Looping.

	timePrint(hr, min, sec, msec);

	sleep_for(1ms); 
	msec++; // Adds 1 to msec.

	if (msec > 30) {
		sec++;
		msec = 0;
	}

	if (sec > 59) {
		min++;
		sec = 0;
	}

	if (min > 59) {
		hr++;
		sec = 0;
		min = 0;
	}

	goto start;

	return 0;
}