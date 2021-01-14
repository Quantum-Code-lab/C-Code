#include<iostream>
using namespace std;

class rectangle
{
	public:
		int hight;
		int width;
		
};
int main()
{
	rectangle obj;
	obj.hight=5;
	obj.width=8;
	cout<<"Area of this trangle"<<endl<<obj.hight*obj.width<<endl;
	return 0;
}
