/*****************************************************************************
 Program file name: Menuing		  OS: Windows 7		    Assignment #4
 Programmer: Zachri Jensen        Class: CPTR141        Date: 4/29/13
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
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

void gcd()
{
    int m,n,r;

    cout << setfill('_');
    cout << endl << "_" << setw(52) << " GREATEST COMMON DIVISOR " << setw(27) << "_\n";

    cout << endl << "This function determines the greatest common divisor of two positive integers.\n\n";
    cout <<"Please enter two positive integers below:\n";
    cout << endl <<"First integer = ";
    cin >> m;
    cout <<"Second integer = ";
    cin >> n;

    while(n==0)
    {
        cout << endl << "Cannot divide by zero.\n";
        cout << "Please reenter your second integer: ";
        cin >> n;
    }

    r = m%n;
    cout << endl << "The greatest common divisor of " << m << " and " << n <<" is ";

    while(r!=0)
    {
        m = n;
        n = r;
        r = m%n;
    }
    cout << n << ".\n";
    cout << setfill('_');
    cout << "_" << setw(80) << "_\n\n";
}

void factorial()
{
    long long int prod;
    int n;

    cout << setfill('_');
    cout << endl << "_" << setw(43) << " FACTORIAL " << setw(36) << "_";

    cout << endl << "This function determines the factorial of n=0 up to the largest value for a PC.\n\n";
    cout << "Please enter n to compute up to n!\n";
    cout << "n = ";
    cin >> n;

    prod = 1;
    for (int i = 1; i <= n; i++)
    {
        prod = prod*i;
        cout << i << "! = " << prod << endl;
    }
}

void fibonacci()
{
    long int fn, fnm1=1, fnm2=1;

    cout << "This function generates the Fibonacci numbers.\n";
    cout << "f0 = 1\n";
    cout << "f1 = 1\n";

    for(int i=2; i<=50; i++)
    {
        fn=fnm1+fnm2;
        fnm2=fnm1;
        fnm1=fn;
        cout << "f" << i << " = " << fn << endl;
    }


}

void positive()
{
    /*int a,b,c,d;
    for(a=1; a<=9; a++)
    {
        for(b=10; b<=99; b++)
        {
            for(c=100; c<=999; c++)
            {
                for(d=1000; d<=9999; d++)
            }
        }
    }
    if(pow(a,b)*pow(c,d)==(a*1000)+(b*100)+(c*10)+d)
    cout << A << B << C << D; */
}

void diophantine()
{
    /* int w,x,y,z;
    for(w=1; w<=25; w++)
    {
        for(x=w; x<=25; x++)
        {
            for(y=x; y<=25; y++)
            {
                for(z=1; z<=50, z++)
            }
        }
    }

    if((w*w*w)+(x*x*x)+(y*y*y)==(z*z*z))

        cout << "Put solution here.";*/
}

void menu()
{
    cout << "MAIN MENU\n\n";
    cout << "a) GCD\n";
    cout << "b) Factorial\n";
    cout << "c) Fibonacci\n";
    cout << "d) Positive Digits\n";
    cout << "e) Diophantine\n";
    cout << "q) Quit\n\n";
}

int main()
{
    char choice;

    menu();

    cout << "Please choose a function, or enter q to quit: ";
    cin >> choice;
    choice=tolower(choice);

    while(choice != 'q')
    {
        switch(choice)
        {
            case 'a': gcd(); break;
            case 'b': factorial(); break;
            case 'c': fibonacci(); break;
            case 'd': positive(); break;
            case 'e': diophantine(); break;
            case 'q': exit(0); break;
            default: cout << endl << "Invalid choice.\n\ns"; break;
        }
    menu();

    cout << "Please choose a function, or enter q to quit: ";
    cin >> choice;
    choice=tolower(choice);
    }
    return 0;
}
