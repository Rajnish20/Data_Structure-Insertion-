#include <iostream>

using namespace std;

struct node                      //declaring structure of node type
{
    int data;
    node * next;
};
node * head=NULL;                 //creating a pointer of type node
void insert(int x)                //function to insert node in the list
{
    node * temp = new node();
    temp->data=x;
    temp->next=head;
    head=temp;

}
void print1(node *p1)                //function to print the values in the list
{
    if(p1 == NULL)                  //Terminating step
    {
        return;
    }
    cout<<p1->data<<" ";
    print1(p1->next);     //Recursively call
}
void print(node *p)                //function to print the values in the list
{
    if(p == NULL)                  //Terminating step
    {
        return;
    }
    print(p->next);     //Recursively call
    cout<<p->data<<" ";
}

int main()
{
    int n,i,x;
    cout <<"How many numbers you want to enter ?"<<endl;
    cin>>n;
    for (i=0;i<=n-1;i++)
    {
        cout<<"Enter the number"<<endl;
        cin>>x;
        insert(x);

    }
    print1(head);
    cout<<endl;
    cout<<"Printing the element of list in reverse order"<<endl;
    print(head);
        return 0;
}
