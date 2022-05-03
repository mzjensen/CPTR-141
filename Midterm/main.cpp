/*****************************************************************************
 Program file name: Midterm       OS: Windows 7		    Assignment --
 Programmer: Zachri Jensen        Class: CPTR141		Date: 5/10/13
 Compiler: Code::Blocks

 Assistance/references:
 Description:
 Inputs:
 Outputs:
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
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

float windChill(float w, float t);  //windChill function prototype

void windChill_io()  //I/O for windChill function
{
    float w, t, windChill_output;  //Declaration of variables
    char menu_choice;

    system("cls");  //Clears the main menu screen, making things less cluttered

    cout << setfill('_');  // This line and the next are the header
    cout << endl << "_" << setw(45) << " Wind Chill " << setw(34) << "_";
    cout << endl << "This function will determine wind chill based on wind speed and temperature.\n";  //Statement of purpose

    do
    {
        /*Put rest of code here*/

        cout << "Enter r to redo, or any key to return to main menu: ";  //Gives user option to repeat indefinitely, or return to main menu
        cin >> menu_choice;
        menu_choice=tolower(menu_choice);
    }
    while(menu_choice=='r');

    system("cls");  //Clears the screen again so the main menu is fresh
}

void weatherForecast()  //Primary weatherForecast function (no separate I/O required)
{
    int n;  //Declaration of variables
    unsigned long fib_output;
    char menu_choice;

    system("cls");  //Clears the main menu screen, making things less cluttered

    cout << setfill('_');  // This line and the next are the header.
    cout << endl << "_" << setw(45) << " FIBONACCI " << setw(34) << "_";
    cout << endl << "This function will determine the nth Fibonacci number.\n";  //Statement of purpose

    do
    {
        cout << "Enter r to redo, or any key to return to main menu: ";  //Gives user option to repeat indefinitely, or return to main menu
        cin >> menu_choice;
        menu_choice=tolower(menu_choice);
    }
    while(menu_choice=='r');

    system("cls");  //Clears the screen again so the main menu is fresh
}

void abcdCubes()  //Primary abcdCubes function (no separate I/O required)
{
    int n;  //Declaration of variables
    unsigned long fib_output;
    char menu_choice;

    system("cls");  //Clears the main menu screen, making things less cluttered

    cout << setfill('_');  // This line and the next are the header.
    cout << endl << "_" << setw(45) << " FIBONACCI " << setw(34) << "_";
    cout << endl << "This function will determine the nth Fibonacci number.\n";  //Statement of purpose

    do
    {
        cout << "Enter r to redo, or any key to return to main menu: ";  //Gives user option to repeat indefinitely, or return to main menu
        cin >> menu_choice;
        menu_choice=tolower(menu_choice);
    }
    while(menu_choice=='r');

    system("cls");  //Clears the screen again so the main menu is fresh
}

long long int pow3(int n);  //pow3 function prototype

void pow3_io()  //I/O for pow3 function
{
    int n,pow3_output;  //Declaration of variables
    char menu_choice;

    system("cls");  //Clears the main menu screen, making things less cluttered

    cout << setfill('_');  // This line and the next are the header.
    cout << endl << "_" << setw(51) << " GREATEST COMMON DIVISOR " << setw(28) << "_";
    cout << endl << "This function will output the greatest common divisor of two positive numbers.\n";  //Statement of purpose

    do
    {
        cout << "Enter r to redo, or any key to return to main menu: ";  //Gives user option to repeat indefinitely, or return to main menu
        cin >> menu_choice;
        menu_choice=tolower(menu_choice);
    }
    while(menu_choice=='r');

    system("cls");  // Clears the screen again so the main menu is fresh.
}

void menu()  //Main menu function
{
    cout << setfill('_');  //This line and the next are the header.
    cout << endl << "_" << setw(45) << " MAIN MENU " << setw(34) << "_" << endl;

    cout << "a) Wind Chill\n";  //These next few lines are the constitute the main menu of the program.
    cout << "b) Weather Forecast\n";
    cout << "c) ABCD Cubes\n";
    cout << "d) Rotate\n";
    cout << "e) Pow3\n";
    cout << "q) Quit\n\n";
}

int main()  //Main function of program
{
    char choice;  //Declaration of variables.

    menu();  //Calls the menu() function, outputting the different menu options.

    cout << "Please choose a function, or enter q to quit: ";  //Prompts the user to pick a choice on the menu.
    cin >> choice;
    choice=tolower(choice);

    while(choice != 'q')  //Loops over the switch statemtent until a valid choice is entered, other than q.
    {
        switch(choice)  //Based on the user's choice, the switch statement redirects as needed to the different functions.
        {
            case 'a': windChill_io(); break;
            case 'b': weatherForecast(); break;
            case 'c': abcdCubes(); break;
            case 'd': rotate_io(); break;
            case 'e': pow3_io(); break;
            case 'q': exit(0); break;  // Quits the program.
            default: cout << endl << "ERROR: Invalid choice.\n"; break;
        }
    menu();  //If the default is reached, the error message is displayed and the main menu is looped again until a valid input is provided.

    cout << "Please choose a function, or enter q to quit: ";
    cin >> choice;
    choice=tolower(choice);
    }
    return 0;
}
