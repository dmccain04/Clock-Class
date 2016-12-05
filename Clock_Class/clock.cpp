// FILE: clock.cpp
// CLASS IMPLEMENTED: clock (see clock.h for documentation)

#include <cassert>
#include "clock.h"

namespace main_mccain_2A {
	
	my_clock::my_clock() {
		
		hour = 12;
		minute = 0;
		morning = true;
		
	}
	
	void my_clock::setTime(int h, int m, bool morn) {
		
		assert(hour >= 1 && hour <= 12);
		assert(minute >= 0 && minute <= 59);
		hour = h;
		minute = m;
		morning = morn;
		
	}
	
	void my_clock::advanceTime(int byMinutes) {
		assert(byMinutes > 0);

		minute += byMinutes;
		
		if (minute >= 60) {
			hour += (minute / 60);
			minute = minute % 60;
		}
		if (hour > 12) {
			hour = hour % 12;
			if (morning) {
				morning = false;
			} else {
				morning = true;
			}
		}
	}
	
	
} 