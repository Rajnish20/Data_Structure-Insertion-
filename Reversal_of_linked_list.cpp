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
void print()                       //function to print the values in the list
{
    node * temp=head;
    cout<<"List is :";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void reverse_print(node *p)    //Function to reverse the list
{
    if(p->next == NULL)
    {
        head = p;
        return;
    }
    reverse_print(p-> next);
    node *q = p->next;
    q->next = p;
    p->next = NULL;


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
    print();
        reverse_print(head);
        cout<<"After the reversing the linked list "<<endl;
        print();
        return 0;
}
