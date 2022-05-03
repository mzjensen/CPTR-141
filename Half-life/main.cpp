#include <iostream>
#include <cmath>

using namespace std;

int main()

{
  float initialconc, rateconst, halflife;

  cout <<"This program will evaluate the function for the half-life\nof a zero-order reaction.\n\n";
  cout <<"Please enter the following information:\n\n";
  cout <<"Initial concentration [A]_0: ";

  cin >> initialconc;

  cout <<"Rate constant k: ";

  cin >> rateconst;

  halflife=(1/rateconst)*(initialconc/2.0);

  cout << endl << "The half-life of this reaction is " << halflife << " seconds.\n\n";

  return 0;
}
