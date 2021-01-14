#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;


struct node
{
    int info;
    struct node *next;
}*start;
class single_llist
{
    public:
     single_llist()
        {
           // cout<<"constructor";
            start = NULL;
        }
        // you must write 1-36 of basic of link list to create a node
node* create_node(int value)
{
    struct node *temp, *s;
    temp = new(struct node);
   if (temp == NULL)
    {
        cout<<"Memory not allocated "<<endl;
        return 0;
    }
    else
    {
        temp->info = value;
        temp->next = NULL;
        return temp;
    }
}
//NOW WHAT ARE YOU WANT 1)INSERT BEGIN 2) DELET POSITION 3)DISPLAY


void display()// YOU MUST WRITE THIS DISPLAY FUNCTION IF YOU WANT TO DISPLAY
{
    struct node *temp;
    if (start == NULL)
    {
        cout<<"The List is Empty"<<endl;
        return;
    }
    temp = start;
    cout<<"Elements of list are: "<<endl;
    while (temp != NULL)
    {
        cout<<temp->info<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

};
int main()
{
        single_llist s;
        start=NULL;

    return 0;
}

