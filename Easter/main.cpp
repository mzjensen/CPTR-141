/*****************************************************************************
 Program file name: Easter Date Calculator	 OS: Windows 7		Assignment #2
 Programmer: Zachri Jensen 			         Class: CPTR141	    Date: 4/12/13
 Compiler: Code::Blocks

 Assistance/references: Classmates and instructor Jim Klein during Wednesday
 class period, textbook pg. 57, http://www.mochima.com/tutorials/loops.html,
 and classmate Kaitlin Lupo.
 Description: Program that calculates the date of Easter in a given year.
 Inputs: Year
 Outputs: Date of Easter

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
    int a,b,c,d,e,f,g,h,i,k,m,n;    // Declaration of variables.
    int easterMonth;
    int easterDay;
    int year;

    cout << "The purpose of this program is to find the date of Easter during a given year.\n\n";   // Statement of purpose.
    cout << "Please enter a year: ";    // Prompts the user to enter a year.

    cin >> year;

    while(year<=1582)    // If the user inputs a year less than or equal to 1582,

        {
            cout << endl << "The year entered must be after 1582.\n";   // the "while" loop displays this message
            cout << "Please try again: ";   // and asks them to enter a new year sastisfying the above conditions.
            cin >> year;    // This loop will continue until a valid year is entered.
        }

    a=year%19;  // Once a valid year is entered, the program continue to evaluate these formulas for calculating the date.
    b=year/100;
    c=year%100;
    d=b/4;
    e=b%4;
    f=(b+8)/25;
    g=(b-f+1)/3;
    h=(19*a+b-d-g+15)%30;
    i=c/4;
    k=c%4;
    m=(32+2*e+2*i-h-k)%7;
    n=(a+11*h+22*m)/451;
    easterMonth=(h+m-7*n+114)/31;
    easterDay=1+(h+m-7*n+114)%31;

    if(easterMonth==3)  // If the result of the easterMonth forumla equals 3, "March" is displayed (line 79).
        {
            cout << endl << "The date of Easter in " << year;

                if(year<=2013)  // Within this "if" statement, there is another "if-then"
                                // statement to determine whether to use the past or future tense.
                    {
                        cout << " was";
                    }
                else
                    {
                        cout << " will be";
                    }

            cout << " March " << easterDay << ".\n\n";
        }

    else    // Continuing the first "if-then" statment, if easterMonth does not equal 3, "April" is displayed (line 96).
        {
            cout << endl << "The date of Easter in " << year;

                if(year<=2013)  // Within this "if" statement is an identical "if-then" statement as before to
                                // determine which tense to use.
                    {
                        cout << " was";
                    }
                else
                    {
                        cout << " will be";
                    }

            cout << " April " << easterDay << ".\n\n";
        }

    return 0;
}
