#include <iostream>
#include <stdlib.h>

using namespace std;

void var ()
{
  system ("CLS");
  cout <<
    "A variable is a name given to a memory location. It is the basic unit of storage in a program."
    << endl <<
    "1. The value stored in a variable can be changed during program execution."
    << endl <<
    "2. A variable is only a name given to a memory location, all the operations done on the variable effects that memory location."
    << endl << 
    "3.In C++, all the variables must be declared before use.";
}

void print ()
{

}

void basicMath ()
{

}


int
main ()
{
  cout << "Want to learn C++? You've come to the best place!" << endl;
  cout << "Main Menu :-" << endl;
  cout << "Press 1. To learn how to create a variable" << endl;
  cout << "Press 2. To learn how to print 'Hello World'" << endl;
  cout << "Press 3. To learn how to add/subtract 2 variable" << endl;
  //cout<<"Press 4. To learn how to use if/else"<<endl;
  int a;
  cout << "Enter your choice: ";
  cin >> a;
  switch (a)
    {
    case 1:
      var ();
      break;

    case 2:
      print ();
      break;

    case 3:
      basicMath ();
      break;

      //   case 4:

    default:
    cout << "Wrong input";}
  return 0;
}
