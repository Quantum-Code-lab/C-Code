#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<< "please enter your age";
	cin >> age;
	if(age >= 20 && age <= 40  )
	{
		cout << "You are eligeble for the programme"<< endl ;
	}
	else 
	{
		cout << "plese you go home";
	}
	return 0;
}
