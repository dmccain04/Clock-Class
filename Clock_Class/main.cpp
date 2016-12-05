#include <iostream>
#include <string>
#include <cstdlib>
#include "clock.h"
using namespace std;
using main_mccain_2A::my_clock;


int main(int argc, char **argv)
{
	my_clock clock1 = my_clock();
	
	clock1.setTime(3, 15, false);
	
	clock1.advanceTime(720);

	
	string hour = to_string(clock1.getHour());
	
	string minute = to_string(clock1.getMinute());
	
	string timeOfDay = "A.M";
		
	
	if (clock1.getHour() < 10) {
		hour = "0" + hour;
	}
	
	if (clock1.getMinute() < 10) {
		
		minute = "0" + minute;
	}
	
	if (clock1.isMorning()) {
		timeOfDay = "A.M.";
	} else {
		timeOfDay = "P.M.";
	}
	
	
	cout << hour << ":" << minute << " " << timeOfDay << endl;

	return EXIT_SUCCESS;
}
