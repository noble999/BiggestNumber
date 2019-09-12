//Author:Noble LeDuc
#include<iostream>
using namespace std;
int main()
{
  //declare variables here
	int number1;
	int number2;
	int biggest;
  std::cout<<"Please enter a whole number:";
  //get first input using std::cin>>
 	cin>> number1;
	cout<<"\n";
  std::cout<<"Please enter another whole number:";
  //get second input using std::cin>> again with a second variable
	cin>> number2;
	cout<<"\n";
  //determine if first or second is bigger and store that in a third variable
	if(number1>number2)
	{
		std::cout<<"Of those two numbers, the biggest is: "<<number1;

		std::cout<<"\nThank you for playing. \n";

	}
	else
	{
 		std::cout<<"Of those two numbers, the biggest is: "<<number2<<"\n";
 		 //print out the variable representing the biggest number
  		std::cout<<"Thank you for playing.\n";
	}
  return 0;
}
