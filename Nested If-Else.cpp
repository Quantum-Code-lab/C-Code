// Nested IF-Else
#include<iostream>
using namespace std;
int main ()
{
	int time;
	cout << "Please cheque Your Time jone" << endl;
	cin >> time;
	if(time > 0)
	{
		if(time <= 12)
		{
			cout << " You are a Anti-Meridian" << endl;
			if (time > 12)
			cout << "you are a Post-Meridian";
		}
	}

	return 0;
}
