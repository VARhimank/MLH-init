#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

void var ()
{
  clrscr();
  cout <<
    "A variable is a name given to a memory location. It is the basic unit of storage in a program."
    << endl <<
    "1. The value stored in a variable can be changed during program execution."
    << endl <<
    "2. A variable is only a name given to a memory location, all the operations done on the variable effects that memory location."
    << endl << 
    "3.In C++, all the variables must be declared before use.";

  cout<<"A typical variable declaration is of the form:"
  <<endl<<
  "// Declaring a single variable"
  <<endl<<
  "type variable_name;"
  <<endl<<
  "For example: int x ; char c ; long l ;"
  <<endl<<endl<<
  "// Declaring multiple variables:"
  <<endl<<
  "type variable1_name, variable2_name, variable3_name;"
  <<endl<<
  "For example: int x, y, z;"
  <<endl<<endl;

}

void print ()
{
  clrscr();
  cout<<"The keyword cout in C++ is used very often for printing outputs."<<endl<<
  "This is the most basic method of printing output in C++. To use cout in C++ one must include the header file iostream in the program."<<endl<<
  "For example: cout<< and then in double inverted commas the string you want to print"<<endl<<endl;
}

void main ()
{
  int a;
  do
  {
  cout << "Want to learn C++? You've come to the best place!" << endl;
  cout << "Main Menu :-" << endl;
  cout << "Press 1. To learn how to create a variable" << endl;
  cout << "Press 2. To learn how to print 'Hello World'" << endl;
  cout << "Press 3. To exit" << endl;
  cout << "Enter your choice: ";
  cin >> a;
  cout<<endl;
  switch (a)
    {
    case 1:
      var ();
      break;

    case 2:
      print ();
      break;

    case 3:
      exit(0);
      break;

    default:
    cout <<endl<<"Wrong input"<<endl;
    }
  }
  while(a!=3);
  getch();
}
