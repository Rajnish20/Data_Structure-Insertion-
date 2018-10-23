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
void print(node *p)                       //function to print the values in the list
{
    if(p == NULL)
    {
        return;
    }
    cout<<p->data<<" ";
    print(p->next);
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
    print(head);
        return 0;
}
