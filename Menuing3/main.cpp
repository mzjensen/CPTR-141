/*****************************************************************************
 Program file name: Menuing		  OS: Windows 7		    Assignment #4
 Programmer: Zachri Jensen        Class: CPTR141        Date: 4/29/13
 Compiler: Code::Blocks

 Assistance/references: http://www.cplusplus.com/forum/beginner/3304/,
                        http://www.cplusplus.com/forum/beginner/36318/,
                        Luke Travis, textbook pg. 67-83, and class lectures

 Description: Solves five different problems using different types of looping
              structures.  Functions are selected through a menu implemented
              in main().

 Inputs: Main menu - characters
         GCD - integers, characters
         Factorial - integers, characters
         Fibonacci - none
         Positive digits - none
         Diophantine - none

 Outputs: GCD - greatest common divisor of two integers
          Factorial - factorial of an integer
          Fibonacci - first 45 terms of Fibonacci sequence
          Positive digits - integers satisfying given mathematical property
          Diophantine - unique integer solutions to given mathematical equation

 Special Comments: In the GCD and Factorial functions, an infinite loop would
                   occur if the user were to enter a character.  I created
                   error messages for the specific instances of invalid
                   integer inputs, but I wasn't sure how to solve the infinte
                   loop problem with a character input.

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
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

void gcd()
{
    int m,n,r;  //Declaration of variables.
    char menu_choice;

    system("cls");  // Clears the screen so things aren't so cluttered.

    cout << setfill('_');  // This line and the next are the header.
    cout << endl << "_" << setw(50) << " GREATEST COMMON DIVISOR " << setw(30) << "_\n";

    cout << endl << "This function determines the greatest common divisor of two positive integers.\n";  // Statement of purpose.

    do  // Executes once, then checks to see if the user wants to run it again, in which case it loops back to line 46.
    {
        cout << endl << "Please enter two positive integers below:\n";
        cout << endl <<"First integer = ";
        cin >> m;
        cout <<"Second integer = ";
        cin >> n;

        while(n==0)  // Error message in case user enters 0 for second integer.  Loops until they enter a valid input.
        {
            cout << endl << "ERROR: Cannot divide by zero.\n";
            cout << "Please reenter your second integer: ";
            cin >> n;
        }

        r = m%n;  // Lines 59-68 are the main equations and outputs.
        cout << endl << "The greatest common divisor of " << m << " and " << n <<" is ";

        while(r!=0)
        {
            m = n;
            n = r;
            r = m%n;
        }
        cout << n << ".\n";

        cout << endl << "Enter r to redo, or any key to return to main menu: ";  // This gives the user the option to repeat the function
        cin >> menu_choice;                                                      // as many times as desired, or return to the main menu.
        menu_choice=tolower(menu_choice);
    }
    while(menu_choice=='r');

    system("cls");  // Clears the screen again so the main menu is fresh.
}

void factorial()
{
    long long int prod;  // Declaration of variables.
    int n;
    char menu_choice;

    system("cls");  // Clears the screen so things aren't so cluttered.

    cout << setfill('_');  // This line and the next are the header.
    cout << endl << "_" << setw(45) << " FACTORIAL " << setw(34) << "_";

    cout << endl << "This function will output n! for n=0 to the largest possible value whose \nsignificant digits can all be held by a single variable on a PC.\n";  // Statement of purpose.

    do  // Executes once, then checks to see if the user wants to run it again, in which case it loops back to line 94.
    {
        cout << endl << "Please enter a number less than or equal to 20: ";
        cin >> n;
        while(n>20)
        {
            cout << endl << "ERROR: Input is too large.";  // Error message in case user enters an integer greater than 20, which would cause a wrap-araoun.  Loops until they enter a valid input.
            cout << endl << "Please enter a number less than or equal to 20: ";
            cin >> n;
        }
        cout << endl;

        prod = 1;  // Lines 104-109 are the main equations and outputs.
        for (int i = 1; i <= n; i++)
        {
            prod = prod*i;
            cout << i << "! = " << prod << endl;
        }
        cout << endl << "Enter r to redo, or any key to return to main menu: ";  // This gives the user the option to repeat the function
        cin >> menu_choice;                                                      // as many times as desired, or return to the main menu.
        menu_choice=tolower(menu_choice);
    }
    while(menu_choice=='r');

    system("cls");  // Clears the screen again so the main menu is fresh
}

void fibonacci()
{
    long int fn, fnm1=1, fnm2=1;  // Declaration of variables.

    system("cls");  // Clears the screen so things aren't so cluttered.

    cout << setfill('_');  // This line and the next are the header.
    cout << endl << "_" << setw(45) << " FIBONACCI " << setw(34) << "_";

    cout << endl << "This function generates the first 45 terms of the Fibonacci sequence.\n\n";  // Statement of purpose.

    system("pause");  // Functions hangs until user is ready to proceed.

    cout << endl << "f0 = 1\n";  // These two are given values for the first two terms.
    cout << "f1 = 1\n";

    for(int i=2; i<=45; i++)  // Lines 135-140 are the main equations and outputs.
    {
        fn=fnm1+fnm2;
        fnm2=fnm1;
        fnm1=fn;
        cout << "f" << i << " = " << fn << endl;
    }
    cout << endl;
    system("pause");  // Function hangs again until the user is ready to return to the main menu.
    system("cls");  // Clears the screen again so the main menu is fresh
}

void positive()
{
    float a,b,c,d;  // Declaration of variables.

    system("cls");  // Clears the screen so things aren't so cluttered.

    cout << setfill('_');  // This line and the next are the header.
    cout << endl << "_" << setw(47) << " POSITIVE DIGITS " << setw(32) << "_";

    cout << endl << "This function will find four positive digits that satisfy the property\n(A^B) * (C^D) = ABCD.\n\n";  // Statement of purpose.

    system("pause");  // Functions hangs until user is ready to proceed.

    for(a=1; a<=9; a++)  // Lines 160-175 are the main equations and outputs.

        for(b=1; b<=9; b++)

            for(c=1; c<=9; c++)

                for(d=1; d<=9; d++)
                {
                    if(pow(a,b) * pow(c,d)==(a*1000)+(b*100)+(c*10)+d)
                        cout << endl << "A = " << a << endl;
                    if(pow(a,b) * pow(c,d)==(a*1000)+(b*100)+(c*10)+d)
                        cout << "B = " << b << endl;
                    if(pow(a,b) * pow(c,d)==(a*1000)+(b*100)+(c*10)+d)
                        cout << "C = " << c << endl;
                    if(pow(a,b) * pow(c,d)==(a*1000)+(b*100)+(c*10)+d)
                        cout << "D = " << d << endl;
                }
    cout << endl;
    system("pause");  // Function hangs again until the user is ready to return to the main menu.
    system("cls");  // Clears the screen again so the main menu is fresh.
}

void diophantine()
{
    int w,x,y,z;  // Declaration of variables

    system("cls");  // Clears the screen so things aren't so cluttered.

    cout << setfill('_');  // This line and the next are the header.
    cout << endl << "_" << setw(45) << " DIOPHANTINE " << setw(34) << "_";

    cout << endl << "This function finds several unique solutions for four positive integers";  // Statement of purpose.
    cout << endl << "(w, x, y, and z) which satisfy the Diophantine equation w^3 + x^3 + y^3 = z^3.\n\n";

    system("pause");  // Functions hangs until user is ready to proceed.

    cout << endl << "Solutions in the form {w, x, y, z} are:\n\n";  // Lines 196-207 are the main equations and outputs.

    for(w=1; w<=25; w++)

        for(x=w; x<=25; x++)

            for(y=x; y<=25; y++)

                for(z=1; z<=50; z++)
                {
                    if((w*w*w)+(x*x*x)+(y*y*y)==(z*z*z))
                        cout << "{" << w << ", " << x << ", " << y << ", " << z << "}\n";
                }
    cout << endl;
    system("pause");  // Function hangs again until the user is ready to return to the main menu.
    system("cls");  // Clears the screen again so the main menu is fresh.
}

void menu()
{
    cout << endl << "MAIN MENU\n\n";  // These next few lines are the constitute the main menu of the program.
    cout << "a) GCD\n";
    cout << "b) Factorial\n";
    cout << "c) Fibonacci\n";
    cout << "d) Positive Digits\n";
    cout << "e) Diophantine\n";
    cout << "q) Quit\n\n";
}

int main()
{
    char choice;  // Declaration of variables.

    menu();  // Calls the menu() function, outputting the different menu options.

    cout << "Please choose a function, or enter q to quit: ";  // Prompts the user to pick a choice on the menu.
    cin >> choice;
    choice=tolower(choice);

    while(choice != 'q')  // Loops over the switch statemtent until a valid choice is entered, other than q.
    {
        switch(choice)  // Based on the user's choice, the switch statement redirects as needed to the different functions.
        {
            case 'a': gcd(); break;
            case 'b': factorial(); break;
            case 'c': fibonacci(); break;
            case 'd': positive(); break;
            case 'e': diophantine(); break;
            case 'q': exit(0); break;  // Quits the program.
            default: cout << endl << "ERROR: Invalid choice.\n"; break;
        }
    menu();  // If the default is reached, the error message is displayed and the main menu is looped again until a valid input is provided.

    cout << "Please choose a function, or enter q to quit: ";
    cin >> choice;
    choice=tolower(choice);
    }
    return 0;
}
