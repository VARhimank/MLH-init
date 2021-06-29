#include <iostream.h>
#include <conio.h>

void bmi()
{
	float w,h;
	cout<<"Enter weight (in kgs) : ";cin>>w;
	cout<<"Enter height (in m) : ";cin>>h;
	float bmi;
	bmi= (w/(h*h));
	cout<<endl<<"Your BMI is = "<<bmi<<endl;
	if (bmi < 18.5)
		{cout<<"Underweight";}
	else if (bmi >= 18.5 && bmi<24.9)
		{cout<<"Normal/Healthy weight";}
	else if (bmi >= 24.9 && bmi<29.9)
		{cout<<"Overweight";}
	else if (bmi >=29.9)
		{cout<<"Obese";}
}

void main()
{
	clrscr();
	int age;
	cout<<"Welcome to BMI Calculator !"<<endl<<"Please enter your age : ";cin>>age;
	cout<<endl;
	if (age>=18)
		{
			bmi();
		}
	else {cout<<" BMI of people of age less than 18 depends on other factors which this calculator is not capable of solving.";}
	getch();
}
