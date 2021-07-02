#include <iostream.h>
#include <conio.h>
#include <string.h>

struct pass
{
	char id[50];
	char pass[50];
} list[50];

int save()
{
	clrscr();
	int n;
	cout<<"Number of passwords to save: ";cin>>n;
	for (int i = 0; i < n; i++)
	{
		cout<<"Enter the id : ";cin>>list[i].id;
		cout<<"Enter the pass : ";cin>>list[i].pass;
		cout<<endl;
	}
	cout<<"passwords saved !"<<endl<<endl;
	return n;
}

void find(int n)
{
	clrscr();
	char f[50];
	cout<<"Enter the id to find: ";cin>>f;
	for (int i = 0; i < n; i++)
	{
		if (strcmpi(list[i].id,f))
		{	
			cout<<"found !"<<endl<<endl;
			cout<<"Id : ";cout<<list[i].id;
			cout<<"Pass : ";cout<<list[i].pass;
			cout<<endl;
		}
		else { cout<<"id not found";}
	}
	
}

void main()
{
	clrscr();
	int a,s;
	do
	{
		cout<<"What would you like to do today?"<<endl<<"1. Find a password"<<endl<<"2. Save a password"<<endl<<"Enter one option : ";
		cin>>a;
		switch(a)
		{
			case 1: 
				find(s);
				break;
			case 2: 
				s=save();
				break; 
		}
	} while (a<=3);
	
	getch();
}