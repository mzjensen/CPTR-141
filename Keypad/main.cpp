/*****************************************************************************
 Program file name: Keypad		  OS: Windows 7		    Assignment #3
 Programmer: Zachri Jensen        Class: CPTR141        Date: 4/19/13
 Compiler: Code::Blocks

 Assistance/references: Classmate Jonathan Pestes, textbook pg. 62-70, and class
 powerpoint lectures
 Description: Given a character input, the program will output a digit
 corresponding to the character's location on a newer telephone keypad.
 Inputs: Character
 Outputs: Digit

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
    char letter;  // Declaration of variables.

    cout << "This program will tell you what numbers on a newer telephone keypad correspond\n" << "to certain letters.\n\n";  // Statement of purpose.
    cout << "Please enter a letter: ";  // Prompts the user to enter a letter.

    cin >> letter;
    letter=toupper(letter);  // Forces the inputted letter to become uppercase, simply to make the code easier to work with later on.

    while((letter!='A')&&(letter!='B')&&(letter!='C')&&(letter!='D')&&(letter!='E')&&(letter!='F')&&(letter!='G')&&(letter!='H')&&  // This while loop is a backup in case the user enters something
          (letter!='I')&&(letter!='J')&&(letter!='K')&&(letter!='L')&&(letter!='M')&&(letter!='N')&&(letter!='O')&&(letter!='P')&&  // other than an alphabetic character. This is probably not the best
          (letter!='Q')&&(letter!='R')&&(letter!='S')&&(letter!='T')&&(letter!='U')&&(letter!='V')&&(letter!='W')&&(letter!='X')&&  // way to do this, but it's all that I could come up with.
          (letter!='Y')&&(letter!='Z'))
      {
        cout << endl << "Your input is not valid.  Only alphabetic characters are accepted.\n\n";  // This loop will execute until the user enters an alphabetic character.
        cout << "Please try again: ";
        cin >> letter;
        letter=toupper(letter);
      }

    switch(letter)  // Once a valid input is entered, the program will continue to evaluate this switch function.  Depending on which letter is entered, the corresponding output is displayed.
      {
        case'A': case'B': case'C':
            cout << endl << "The number on a telephone keypad corresponding to the letter \"" << letter << "\" is 2.\n\n"; break;

        case'D': case'E': case'F':
            cout << endl << "The number on a telephone keypad corresponding to the letter \"" << letter << "\" is 3.\n\n"; break;

        case'G': case'H': case'I':
            cout << endl << "The number on a telephone keypad corresponding to the letter \"" << letter << "\" is 4.\n\n"; break;

        case'J': case'K': case'L':
            cout << endl << "The number on a telephone keypad corresponding to the letter \"" << letter << "\" is 5.\n\n"; break;

        case'M': case'N': case'O':
            cout << endl << "The number on a telephone keypad corresponding to the letter \"" << letter << "\" is 6.\n\n"; break;

        case'P': case'Q': case'R': case'S':
            cout << endl << "The number on a telephone keypad corresponding to the letter \"" << letter << "\" is 7.\n\n"; break;

        case'T': case'U': case'V':
            cout << endl << "The number on a telephone keypad corresponding to the letter \"" << letter << "\" is 8.\n\n"; break;

        case'W': case'X': case'Y': case'Z':
            cout << endl << "The number on a telephone keypad corresponding to the letter \"" << letter << "\" is 9.\n\n"; break;

            // I could've done a "default" error message here and then a "goto" back up the initial cin on line 38, but Professor Klein said not to use "goto" statements, so I chose to do the while loop.
        }

    return 0;
}
