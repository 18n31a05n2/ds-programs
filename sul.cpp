/*STACK USING LINKEDLIST*/
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class stack_using_linkedlist
{
 struct stack
 {
  int data;
  struct stack *next;
 }*top;
 public:
 typedef struct stack node;
 void push();
 int pop();
 void display();
 stack_using_linkedlist();
};
 stack_using_linkedlist::stack_using_linkedlist()
 {
  top=NULL;
 }
 int main()
 {
  stack_using_linkedlist obj;
  int ch,k;
  while(1)
  {
   cout<<"n\t\tMAIN MENU\n";
   cout<<"\n\t1.PUSH\n\t2.POP\n\t\t3.DISPLAY\n\t\t4.EXIT\n";
   cout<<"enter your choice\n";
   cin>>ch;
   switch(ch)
   {
    case 1: obj.push();
    break;
    case 2:k = obj.pop();
    cout<<"deleted element from the stack is:"<<k;  
    break; 
    case 3:obj.display();
    break;
    case 4:exit(0);
    default:cout<<"\n\t ENTER CORRECT OPTION";
    break;
   }
  }
 }
void stack_using_linkedlist :: push()
{
 node *temp;
 temp=new node;
 cout<<"enter the inserted element in the stack";
 cin>>temp->data;
 temp->next=top;
 top=temp;
}
int stack_using_linkedlist ::pop()
{
 int k;
 node *p,*q;
 p=top;
 k=top->data;
 q=top;
 top=p->next;
 free(q);
 return (k);
}
void stack_using_linkedlist ::display()
{
 node *p;
 p=top;
 cout<<"\n elements in the stack are\n";
 if(top!=NULL)
{
 while(p!=NULL)
 {
  cout<<"_"<<p->data;
  p=p->next;
}
}
else
cout<<"queue is empty";
}
