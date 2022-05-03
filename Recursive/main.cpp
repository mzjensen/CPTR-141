#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

unsigned long factorial(int n);  //Factorial function prototype

void factorial_io()  //I/O for factorial function
{
    int n, fact_output;  //Declaration of variables
    char menu_choice;

    system("cls");  //Clears the main menu screen, making things less cluttered

    cout << setfill('_');  // This line and the next are the header
    cout << endl << "_" << setw(45) << " FACTORIAL " << setw(34) << "_";
    cout << endl << "This function will determine the factorial of a number.\n";  //Statement of purpose

    do
    {
        cout <<endl << "Please enter a number: ";
        cin >> n;

        while((n<0)||(n>12))  //Checks that input is within bound, loops until correct
        {
            cout << endl << "ERROR: Input cannot be less than 0 or greater than 12.\n\n";
            cout << "Please enter a number: ";
            cin >> n;
        }

        fact_output=factorial(n);  //Function call

        cout << endl << n << "! = " << fact_output << ".\n\n";

        cout << "Enter r to redo, or any key to return to main menu: ";  //Gives user option to repeat indefinitely, or return to main menu
        cin >> menu_choice;
        menu_choice=tolower(menu_choice);
    }
    while(menu_choice=='r');

    system("cls");  //Clears the screen again so the main menu is fresh
}

unsigned long factorial(int n)  //Primary factorial recursive function
{
    while((n<0)||(n>12))  //Checks that input is within bound, loops until correct
        {
            cout << endl << "ERROR: The number must be no less than 0 and no greater than 12.\n\n";
            cout << "Please enter a number: ";
            cin >> n;
        }

    if(n==0)  //Boundary conditions
        return(1);
    if(n==1)
        return(1);
    return(n*factorial(n-1));  //Recursive formula
}

unsigned long fibonacci(int n);  //Fibonacci function prototype

void fibonacci_io()  //I/O for fibonacci function
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
        cout << endl << "Please enter a number: ";
        cin >> n;

        while((n<1)||(n>47))  //Checks that input is within bound, loops until correct
        {
            cout << endl << "ERROR: Input cannot be less than 1 or greater than 47.\n\n";
            cout << "Please enter a number: ";
            cin >> n;
        }

        fib_output=fibonacci(n);  //Function call

        cout << endl << "Term " << n << " of the Fibonacci sequence is " << fib_output << ".\n\n";

        cout << "Enter r to redo, or any key to return to main menu: ";  //Gives user option to repeat indefinitely, or return to main menu
        cin >> menu_choice;
        menu_choice=tolower(menu_choice);
    }
    while(menu_choice=='r');

    system("cls");  //Clears the screen again so the main menu is fresh
}

unsigned long fibonacci(int n)  //Primary fibonacci recursive function
{
    while((n<1)||(n>47))  //Checks that input is within bound, loops until correct
        {
            cout << endl << "ERROR: Input cannot be less than 1 or greater than 47.\n\n";
            cout << "Please enter a number: ";
            cin >> n;
        }
    if(n==1)  //Boundary conditions
        return(1);
    if(n==2)
        return(1);
    return(fibonacci(n-1)+fibonacci(n-2));
}

int gcd(int m, int n);  //GCD function prototype

void gcd_io()  //I/O for GCD function
{
    int m,n,gcd_output;  //Declaration of variables
    char menu_choice;

    system("cls");  //Clears the main menu screen, making things less cluttered

    cout << setfill('_');  // This line and the next are the header.
    cout << endl << "_" << setw(51) << " GREATEST COMMON DIVISOR " << setw(28) << "_";
    cout << endl << "This function will output the greatest common divisor of two positive numbers.\n";  //Statement of purpose

    do
    {
        cout << endl << "Please enter two positive numbers below:\n\n";
        cout << "First number = ";
        cin >> m;

        while(m<0)  //Checks that input is within bound, loops until correct
        {
            cout << endl << "ERROR: Numbers cannot be negative.  Please try again:\n\n";
            cout << "First number = ";
            cin >> m;
        }
        cout << "Second number = ";
        cin >> n;

        while(n<0)  //Checks that input is within bound, loops until correct
        {
            cout << endl << "ERROR: Numbers cannot be negative.  Please try again:\n\n";
            cout << "Second number = ";
            cin >> n;
        }

        gcd_output=gcd(m,n);  //Function call

        cout << endl << "The greatest common divisor of " << m << " and " << n << " is " << gcd_output << ".\n\n";

        cout << "Enter r to redo, or any key to return to main menu: ";  //Gives user option to repeat indefinitely, or return to main menu
        cin >> menu_choice;
        menu_choice=tolower(menu_choice);
    }
    while(menu_choice=='r');

    system("cls");  // Clears the screen again so the main menu is fresh.
}

int gcd(int m, int n)  //Primary GCD recursive function
{
    while(m<0)  //Checks that input is within bound, loops until correct
    {
        cout << endl << "ERROR: Numbers cannot be negative.  Please try again:\n\n";
        cout << "First number = ";
        cin >> m;
    }
    while(n<0)  //Checks that input is within bound, loops until correct
    {
        cout << endl << "ERROR: Numbers cannot be negative.  Please try again:\n\n";
        cout << "Second number = ";
        cin >> n;
    }
    if(n==0)  //Boundary conditions
        return(m);
    else
        return gcd(n,m%n);
}

void quadratic(int a, int b, int c, float &r1, float &r2);  //Quadratic function prototype

void quadratic_io()  //I/O for quadratic function
{
    int a,b,c;  //Declaration of variables
    float r1, r2;
    char menu_choice;

    system("cls");  //Clears the main menu screen, making things less cluttered

    cout << setfill('_');  // This line and the next are the header.
    cout << endl << "_" << setw(45) << " QUADRATIC " << setw(34) << "_";
    cout << endl << "This function determines the real roots of a quadratic equation.\n";  //Statement of purpose

    do
    {
        cout << endl << "Please enter coefficients to a quadratic equation below:\n";
        cout << "a = ";
        cin >> a;

        while(a==0)
        {
            cout << endl << "ERROR: The coefficient 'a' cannot be 0.  Please try again:\n";
            cout << endl << "a = ";
            cin >> a;
        }
        cout << "b = ";
        cin >> b;
        cout << "c = ";
        cin >> c;

        while(((b*b)-(4*a*c))<0)  //Checks that input is within bound, loops until correct
        {
            cout << endl << "ERROR: With a = " << a << ", b = " << b << ", and c = " << c << ", the value of the discriminant\n";
            cout << "will be negative, resulting in imaginary roots. Please try again:\n";
            cout << endl << "a = ";
            cin >> a;

            while(a==0)  //Checks that input is within bound, loops until correct
            {
                cout << endl << "ERROR: The coefficient 'a' cannot be 0.  Please try again:\n";
                cout << endl << "a = ";
                cin >> a;
            }
            cout << "b = ";
            cin >> b;
            cout << "c = ";
            cin >> c;
        }

        quadratic(a,b,c,r1,r2);  //Function call

        cout << endl << "The two real roots to the quadratic equation with coefficients\n";
        cout << "a = " << a << ", b = " << b << ", and c = " << c << " are:\n\n";
        cout << r1 << " and " << r2 << endl;

        cout << endl << "Enter r to redo, or any key to return to main menu: ";  //Gives user option to repeat indefinitely, or return to main menu
        cin >> menu_choice;
        menu_choice=tolower(menu_choice);
    }
    while(menu_choice=='r');

    system("cls");  // Clears the screen again so the main menu is fresh.
}

void quadratic(int a, int b, int c, float &r1, float &r2)  //Primary quadratic function
{
    r1=((-b+sqrt((b*b)-(4*a*c)))/(2*a));  //Formulas for roots
    r2=((-b-sqrt((b*b)-(4*a*c)))/(2*a));
}

void menu()  //Main menu function
{
    cout << setfill('_');  //This line and the next are the header.
    cout << endl << "_" << setw(45) << " MAIN MENU " << setw(34) << "_" << endl;

    cout << "a) Factorial\n";  //These next few lines are the constitute the main menu of the program.
    cout << "b) Fibonacci\n";
    cout << "c) GCD\n";
    cout << "d) Quadratic\n";
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
            case 'a': factorial_io(); break;
            case 'b': fibonacci_io(); break;
            case 'c': gcd_io(); break;
            case 'd': quadratic_io(); break;
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
