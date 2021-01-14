#include <iostream>
using namespace std;

class stud 
{
    public:
    char name[30],clas[10];
    int rol,age;

    void enter() 
    { 
        cout<<"Enter Student Name: "; cin>>name;    
        cout<<"Enter Student Age: "; cin>>age;        
        cout<<"Enter Student Roll number: "; cin>>rol;        
        cout<<"Enter Student Class: "; cin>>clas;
    }
    
    void display() 
    {
        cout<<"\n Age\tName\tR.No.\tClass";
        cout<<"\n"<<age<<"\t"<<name<<"\t"<<rol<<"\t"<<clas; 
    }
};

int main()
{
    class stud s;
    s.enter();
    s.display();
    cin.get();	//use this to wait for a keypress 
}
