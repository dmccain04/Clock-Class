// FILE: clock.h
// CLASS PROVIDED: clock (part of the namespace main_mccain_2A)
//
// CONSTRUCTORS for the clock class:
//   clock()
//   	Postcondition: The clock's hour is set to 12. The clock's minute is set to 0.
//   	and the morning is set to true.
//
// MODIFICATION MEMBER FUNCTIONS for the clock class:
//   void setTime(int hour, int minute, char timeOfDay)
//   	Precondition: 1<= hour <= 12, 0 <= minute <= 5, and morning to true or false
//   	Postcondition: The clock is set to hour: minute, 
//
//   void advanceTime(int byMinutes)
//   	Postcondition: The clock has been adust by byMinutes minutes.
//
// CONSTANT MEMBER FUNCTIONS for the clock class:
//   int getHour() const
//   	Postcondition: The value of the clock's hour is returned
//
//   int getMinute() const
//   	Postcondition: The value of the clock's minute is returned
//
//   bool isMorning() const
//   	Postcondition: If the clock's morning  is true, then the function returns 
//   	true, otherwise it returns false
//
// VALUE SEMANTICS for the clock class:
// 		Assignments and the coy constructor may be used with clock objects. 

#ifndef MAIN_MCCAIN_CLOCK
#define MAIN_MCCAIN_CLOCK

namespace main_mccain_2A
{
	class my_clock {
	public:
		// CONSTRUCTORS
		my_clock(); //Default Constructor
		
		// MODIFICATION MEMBER FUNCTIONS
		void setTime(int h, int m, bool morn);
		void advanceTime(int byMinutes);
		
		// CONSTANT MEMBER FUNCTIONS
		int getHour() const { return hour;}
		int getMinute() const { return minute;}
		bool isMorning() const { return morning;}
	
	private:
		int hour;
		int minute;
		bool morning;
	
	};

}


#endif