# ClockClass
Example Clock Claas from Melik C++

Public Member Functions:
1. setTime(int hours, int minutes, int seconds):
  * Sets the time with the given hours, minutes, and seconds.
  * If any of the provided values are invalid, it assigns the default value of 0.
2. getTime(int& hours, int& minutes, int& seconds) const:
  * Returns the current time by setting the provided reference parameters to the internal time values.
printTime() const:
  * Prints the current time in the format hh:mm:ss.
3. incrementSeconds():
  * Increments the time by one second.
  * Resets the time to 00:00:00 if it was at 23:59:59 before the increment.
4. incrementMinutes():
  * Increments the time by one minute.
  * Resets the time to 00:00:ss if it was at 23:59:ss before the increment.
5. incrementHours():
  * Increments the time by one hour.
  * Resets the time to 00:mm:ss if it was at 23:mm:ss before the increment.
6. equalTime(const clockType& otherClock) const:
  * Compares this time to another clockType object.
  * Returns true if both times are equal, otherwise returns false.
7. clockType(int hours, int minutes, int seconds):
  * Constructor that sets the time according to the provided parameters.
  * Validates the provided values and assigns 0 if they are invalid.
8. clockType():
  * Default constructor that sets the time to 00:00:00.
