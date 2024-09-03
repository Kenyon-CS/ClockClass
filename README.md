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

## Explanation of the Test Program:
1. Default Constructor: Initializes `clock1` with the default time (`00:00:00`) and prints it.
1. Parameterized Constructor: Initializes `clock2` with the time `12:30:45` and prints it.
1. `setTime` Function: Sets `clock1` to `23:59:58` and prints the updated time.
1. `incrementSeconds` Function: Increments the seconds of `clock1` twice and prints the time after each increment.
1. `incrementMinutes` Function: Sets `clock1` to `23:59:58`, increments the minutes, and prints the updated time.
1. `incrementHours` Function: Sets `clock1` to `23:59:58`, increments the hours, and prints the updated time.
1. `getTime` Function: Retrieves the time from `clock2` and prints the retrieved hours, minutes, and seconds.
1. `equalTime` Function: Compares `clock1` and `clock2`, prints whether they are equal, then changes `clock1` to match `clock2`, and checks equality again.
This program should help you verify that each function of the `clockType` class behaves as expected.
