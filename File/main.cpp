/*****************************************************************************
 Program file name: zachri.jensen.cpp		OS: Windows 7		 Assignment #7
 Programmer: Zachri Jensen                  Class: CPTR141       Date: 5/24/13
 Compiler: Code::Blocks

 Assistance/references: class powerpoints, classmate Kelsey Leek,
                        assignment #7 sheet (for main framework)

 Description: This program contains 3 different functions that showcase
              file input and output.

 Inputs: Various characters and numbers

 Outputs: Various characters and numbers

 Special Comments: If the histogram function is run directly without first loading
                   a file, it will go into an infinite loop.  I wasn't sure how to
                   fix this.

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
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

void writeDisk()
{
    const int size = 81;  //Declaration of constants, variables and arrays
    char line[size];
    char *filename = new char[size];
    ofstream fout;

    system("cls");  //Clears the main menu screen, making things less cluttered

    cout << "\n";
    cout << "WRITE FILE\n\n";  //Header
    cout << "This function will write a file to the hard drive.\n\n";  //Statement of purpose

    getchar();  //Makes sure the input from the menu choice is not included in the filename input

    cout << "To write a file to disk, enter its path and filename.extension:\n\n";
    cin.getline(filename,size);
    fout.open(filename);
    if(!fout)
    {
        cerr << "Failure trying to create disk file: " << filename << endl;  //Error message if input is an invalid path or filename
        system("pause");
        exit(0);
    }
    cout << endl << "Enter lines of text. To quit, enter <ctrl-Z> by itself on the last line:\n\n";  //Prompts user for input
    while(!cin.getline(line,size).eof())
        fout << line << endl;
    fout.close();
    cin.clear();

    cout << endl << "File created successfully.\n";
    system("pause");
    system("cls");
}

void readDisk(int freq[])
{
    const int size = 81;  //Declaration of constants, variables, strings, and arrays
    char filename[size];
    string word;
    ifstream fin;

    system("cls");  //Clears the main menu screen, making things less cluttered

    cout << "\n";
    cout << "READ FILE\n\n";  //Header
    cout << "This function will read a file on the hard drive.\n\n";  //Statement of purpose

    getchar();  //Makes sure the input from the menu choice is not included in the filename input

    cout << "Enter path and filename of the file from which to read:\n\n";  //Prompts the use for input
    cin.getline(filename,size);
    fin.open(filename);
    if(!fin)
    {
        cerr << endl << "Failure to open disk file: " << filename << endl;  //Error message if input is an invalid path or filename
        system("pause");
        exit(0);
    }
    for(int i=0; i<=29; i++)  //Puts word length values into the array
        freq[i]=0;
    while(fin>>word)
        freq[word.length()]++;
    fin.close();

    cout << endl << "File read successfully.\n";
    system("pause");
    system("cls");
}

void histogram(int freq[])
{
    string line;

    system("cls");  //Clears the main menu screen, making things less cluttered

    cout << "\n";
    cout << "HISTOGRAM\n\n";  //Header
    cout << "This function will output the word-length frequency distribution of a file.\n";  //Statement of purpose

    getchar();  //Makes sure the input from the menu choice is not included in the filename input

    cout << endl << "No. of Words -> ";  //Outputs the header of the table
    for(int i=0; i<=40; i+=5)
        cout << i << setw(5);
    line.assign(57,'-');  //Dashed line across the top of the table
    cout << endl << line << endl;
    cout << "of Length:      ";
    for(int i=1; i<=21; i++)  //Outputs the word frequency of a file, with ASCII char(219) as the frequency indicator
    {
        cout << i;
        for(int j=1; j<=freq[i]; j++)
            cout << char(219);
        cout << endl << setw(17);
    }
    cout << endl;
    system("pause");
    system("cls");
}

void menu()  //Main menu function
{
    cout << "\n";
    cout << "MAIN MENU\n\n";  //Header

    cout << "a) Write File\n";  //These next few lines are the constitute the main menu of the program.
    cout << "b) Read File\n";
    cout << "c) Histogram\n";
    cout << "q) Quit\n\n";
}

int main()
{
    int freq[30];  //Declaration of variables and arrays
    char choice;

    menu();  //Calls the menu() function, outputting the different menu options.

    cout << "Please choose a function, or enter q to quit: ";  //Prompts the user to pick a choice on the menu.
    cin >> choice;
    choice=tolower(choice);

    while(choice != 'q')  //Loops over the switch statemtent until a valid choice is entered, other than q.
    {
        switch(choice)  //Based on the user's choice, the switch statement redirects as needed to the different functions.
        {
            case 'a': writeDisk(); break;
            case 'b': readDisk(freq); break;
            case 'c': histogram(freq); break;
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
