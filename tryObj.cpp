#include<iostream>
using namespace std;
class Rectangle
{
    public:
        int hight;
        int width;

};
int main()
{
    Rectangle obj;
    obj.hight;
    obj.width;
    cout<<"Enter rectangle hight\n"<< endl;
    cin>>obj.hight;
    cout<<"Enter rectangle width\n"<< endl;
    cin>>obj.width;
    cout<<"the area of the rectangle\n"<<obj.hight*obj.width<<endl;
    return 0;
}
