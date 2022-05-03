/*****************************************************************************
 Program file name: Fahrenheit to Celsius    OS: Windows 7		 Assignment #1
 Programmer: Zachri Jensen			         Class: CPTR141      Date: 4/5/2013
 Compiler: Code::Blocks

 Assistance/references: Class lectures 1 and 2 powerpoints,classmate Jonathan Pestes, instructor Jim Klein
 Description:  Converts Fahrenheit temperature to Celsius
 Inputs: Fahrenheit temperature
 Outputs: Celsius temperature

 Special Comments:

~~~~~~~~~~~~~~~~~~~~~~~~~~Grading Criteria~~~~~~~~~~~~~~~~~~~~~~~~~~
 Assignment Requirements: ___/3.0
 Code Format/Cosmetics: ___/3.0
 Header & Code Comments: ___/2.0
 Output Format/Cosmetics: ___/2.0

 ***Does Not Compile***: ___ (-10.0)
 ***Late Work Deduction***: ___ (-0.5/day)
 Total Grade: ___/10.0

*****************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float fahren, celsius; // Declaration of variables.

    cout <<"Please enter a Fahrenheit temperature: ";  // Propmts user to enter an integer or decimal Fahrenheit temperature.
    cin >> fahren;

    celsius = (5.0/9.0)*(fahren-32.0);  // Formula for converting inputted integer or decimal from Fahrenheit to Celsius.

    cout << endl << fahren << " degrees Fahrenheit is equivalent to " << celsius << " degrees Celsius.\n\n";  //Displays the inputted Fahrenheit temperature as a new value in degrees Celsius.

return 0;
}
