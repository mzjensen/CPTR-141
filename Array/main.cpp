/*****************************************************************************
 Program file name: Array		  OS: Windows 7		    Assignment #6
 Programmer: Zachri Jensen        Class: CPTR141        Date: 5/20/13
 Compiler: Code::Blocks

 Assistance/references: cplusplus.com, forum.codecall.net, textbook
                        chapters 5,6,9, classmate Connor Jones, Luke Travis,
                        and class powerpoint lectures

 Description: This program contains 5 different functions that showcase
              different uses of arrays.

 Inputs: letterFreq - characters
         bubbleSort - integers
         primes - none
         matrixAdd - integers
         company - none

 Outputs: letterFreq - characters, integers
          bubbleSort - integers
          primes - integers
          matrixAdd - integers
          company - characters, integers

 Special Comments:  I wasn't able to get the letterFreq function to work correctly.
                    It outputs every letter with value = 0, which isn't correct.  I
                    got stuck and couldn't figure out the rest.  Also, it was unclear
                    to me whether or not we needed separate I/O functions for most
                    of the assignment, as it didn't specify on the paper.  All of
                    my functions and their I/Os are included together.  Finally, I
                    wasn't sure if bubbleSort and matrixAdd required user input, so
                    I just set some initial random values.

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
#include <cstdio>
#include <iomanip>

using namespace std;

void letterFreq(int freq[]);  //letterFreq function prototype

void letterFreq_io()  //I/O for letterFreq function
{
    string input;
    char menu_choice;
    int freq[91];

    for(int i=0; i<91; i++)
        freq[i]=0;

    system("cls");  //Clears the main menu screen, making things less cluttered

    cout << setfill('_');  // This line and the next are the header
    cout << endl << "_" << setw(48) << " LETTER FREQUENCY " << setw(31) << "_";
    cout << endl << "This function will determine the frequency for each typed alphabetic character.\n";  //Statement of purpose

    do
    {
        cout << endl << "Please enter a string of characters. Press (Enter) when done: \n\n";
        cin >> input;
        cout << endl;

        letterFreq(freq);  //function call

        for(char i='A'; i<='Z'; i++)
            cout << i << " = " << freq[i] << endl;

        cout << endl << "Enter r to redo, or any key to return to main menu: ";  //Gives user option to repeat indefinitely, or return to main menu
        cin >> menu_choice;
        menu_choice=tolower(menu_choice);
    }
    while(menu_choice=='r');

    system("cls");  //Clears the screen again so the main menu is fresh
}

void letterFreq(int freq[])  //Primary letterFreq function
{
    char letter;  //I wasn't able to get this function to work properly.

    letter=getchar();
    letter=toupper(letter);
    freq[letter]++;
}

void bubbleSort()  //main bubbleSort function (no separate I/O needed?)
{
    int a[10] = {14,22,-6,78,32,-2,8,19,-5,17};  //declaration of variables and arrays
    int b=0;
    int c=0;
    int temp;
    char menu_choice;

    system("cls");  //Clears the main menu screen, making things less cluttered

    cout << setfill('_');  // This line and the next are the header
    cout << endl << "_" << setw(45) << " BUBBLE SORT " << setw(34) << "_";
    cout << endl << "This function will sort the array of random integers below into ascending order.\n";  //Statement of purpose

    while(b<10)  //outputs initial array values
    {
        cout << a[b++] << " ";
    }

    cout << "\n\n\nThis array reordered from least to greatest is:\n\n";

    for(int i=0; i<10; i++)  //bubble sort routine with swap
        for(int j=0; j<9; j++)
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

    while(c<10)  //outputs new array values is ascending order
    {
        cout << a[c++] << " ";
    }

    cout << "\n\n\n";

    system("pause");  //hangs until the user is ready to return to the main menu
    system("cls");  //Clears the screen again so the main menu is fresh
}

void primes()  //main primes function (no separate I/O needed?)
{
    int p[1000];

    system("cls");  //Clears the main menu screen, making things less cluttered

    cout << setfill('_');  // This line and the next are the header
    cout << endl << "_" << setw(43) << " PRIMES " << setw(36) << "_";
    cout << endl << "This function will determine all primes less than 1000.\n\n";  //Statement of purpose

    system("pause");  //Hangs until the user is ready to proceed

    cout << endl;
    cout << setfill(' ');

    for (int i=1; i<=999; i++)  //sets all array values to 1, except 0 and 1
    {
        p[i] = 1;
        p[0]=p[1]=0;

        for (int j=2; j<=i/2; j++)  //checks multiples and sets them to 0
        {
            if (i%j == 0)
                p[i] = 0;
        }

        if (p[i])  //outputs whatever is left
            cout << setw(4) << i;
    }

    cout << endl << endl;
    system("pause");  //Hangs until the user is ready to return to the main menu
    system("cls");  //Clears the screen again so the main menu is fresh
}

void matrixAdd()  //main matrixAdd function (no separate I/O needed?)
{
    int A[3][3] = {{1,-2,3},{3,7,-2},{12,-4,9}};  //declaration of variables and arrays
    int B[3][3] = {{6,4,-3},{1,-4,-2},{6,0,-14}};
    int C[3][3] = {{A[0][0]+B[0][0],A[0][1]+B[0][1],A[0][2]+B[0][2]},
                   {A[1][0]+B[1][0],A[1][1]+B[1][1],A[1][2]+B[1][2]},
                   {A[2][0]+B[2][0],A[2][1]+B[2][1],A[2][2]+B[2][2]}
                  };
    char menu_choice;

    system("cls");  //Clears the main menu screen, making things less cluttered

    cout << setfill('_');  // This line and the next are the header
    cout << endl << "_" << setw(45) << " MATRIX ADD " << setw(34) << "_";
    cout << endl << "This function will compute matrix 'C' as the sum of matrix 'A' and matrix 'B'.\n\n";  //Statement of purpose

    cout << setfill(' ');

    cout << "Matrix A =   ";  //outputs matrix A
        for(int i=0; i<=0; i++)
            for(int j=0; j<=2; j++)
                cout << A[i][j] << "  ";
        cout << endl << setw (14);
        for(int i=1; i<=1; i++)
            for(int j=0; j<=2; j++)
                cout << A[i][j] << "  ";
        cout << endl << setw (14);
        for(int i=2; i<=2; i++)
            for(int j=0; j<=2; j++)
                cout << A[i][j] << "  ";

    cout << "\n\nMatrix B =   ";  //outputs matrix B
        for(int i=0; i<=0; i++)
            for(int j=0; j<=2; j++)
                cout << B[i][j] << "  ";
        cout << endl << setw (14);
        for(int i=1; i<=1; i++)
            for(int j=0; j<=2; j++)
                cout << B[i][j] << "  ";
        cout << endl << setw (14);
        for(int i=2; i<=2; i++)
            for(int j=0; j<=2; j++)
                cout << B[i][j] << "  ";

    cout << endl << endl;
    system("pause");  //hangs until user is ready to proceed

    cout << "\n\nMatrix C =   ";  //outputs matrix C, as the sum of matrices A and B
        for(int i=0; i<=0; i++)
            for(int j=0; j<=2; j++)
                cout << C[i][j] << "  ";
        cout << endl << setw (14);
        for(int i=1; i<=1; i++)
            for(int j=0; j<=2; j++)
                cout << C[i][j] << "  ";
        cout << endl << setw (14);
        for(int i=2; i<=2; i++)
            for(int j=0; j<=2; j++)
                cout << C[i][j] << "  ";

    cout << endl << endl;
    system("pause");  //hangs until the user is ready to return to the main menu
    system("cls");  //Clears the screen again so the main menu is fresh
}

void company()  //main company function (no separate I/O needed?)
{
    system("cls");  //Clears the main menu screen, making things less cluttered

    cout << setfill('_');  // This line and the next are the header
    cout << endl << "_" << setw(45) << " COMPANY " << setw(34) << "_";
    cout << endl << "This function will output all females with pay rate less than $10/hour.\n\n";  //Statement of purpose

    struct employee  //main employee structure
            {
                char name[30];
                char gender;
                int age;
                long ssn;
                float payrate;
            };

            employee emp[6] = {{"Philbert", 'M', 99, 156392758, 500.23},  //individual employee attributes
                               {"Ethel", 'F', 6, 004033271, 00.07},
                               {"Butch", 'M', 27, 185902762, 12.16},
                               {"Matilda", 'F', 43, 987654321, 09.59},
                               {"Napolean", 'M', 57, 581049703, 21.83},
                               {"Phoenix", 'F', 74, 582058295, 56.72},
                              };

    cout << "The employees are as follows:\n\n";

    for(int i=0; i<6; i++)  //list output of employees and their attributes
        cout << emp[i].name << ", " << emp[i].gender << ", age " << emp[i].age << ", SSN " << emp[i].ssn << ", payrate $" << emp[i].payrate << "/hour" << endl;

    cout << endl;
    system("pause");  //hangs until the user is ready to proceed

    cout << endl << "Females with payrate under $10/hour are:\n\n";

    for(int i=0; i<6; i++)  //loops through and finds females with payrate less than $10/hr
        if(emp[i].payrate<10)
            if(emp[i].gender=='F')
                cout << emp[i].name << endl;

    cout << endl;
    system("pause");  //hangs until the user is ready to return to the main menu
    system("cls");  //Clears the screen again so the main menu is fresh
}

void menu()  //Main menu function
{
    cout << setfill('_');  //This line and the next are the header.
    cout << endl << "_" << setw(45) << " MAIN MENU " << setw(34) << "_" << endl;

    cout << "a) Letter Frequency\n";  //These next few lines are the constitute the main menu of the program.
    cout << "b) Bubble Sort\n";
    cout << "c) Primes\n";
    cout << "d) Matrix Add\n";
    cout << "e) Company\n";
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
            case 'a': letterFreq_io(); break;
            case 'b': bubbleSort(); break;
            case 'c': primes(); break;
            case 'd': matrixAdd(); break;
            case 'e': company(); break;
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
