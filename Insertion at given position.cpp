#include <iostream>

using namespace std;
struct node
{
    int data;
    node *next;
};
node *head = NULL;
void insert(int value,int n)
{
    node *temp = new node();
    temp->data=value;
    temp->next=NULL;
    if(n==1)
    {
    temp->next = head;
    head=temp;
    return;
    }
    else
       {
           node *temp1 = head;
           for(int i=0;i<n-2;i++)
              {
                 temp1 = temp1->next;
              }
    temp->next=temp1->next;
    temp1->next=temp;




       }
}
void print()
{
  node *temp = head;
  while(temp!=NULL)
  {
      cout<<temp->data<<" ";
      temp = temp->next;
  }
}

int main()
{
    insert(5,1); //List is 5
    insert(2,2); //List is 5 2
    insert(4,3); //List is 5 2 4
    insert(6,1); //List is 6 5 2 4
    print();
    return 0;
}
