#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"enter your mark";
    cin>>mark;
    if(mark<=50)
    {
        cout<<"only good";
    }
    else if(mark>50 && mark<80)
    {
        cout<<"very good";
    }
    else if(mark>80)
    {
        cout<<"Awasome";
    }
    else
    {
        cout<<"You are Go to the dog";
    }
}
