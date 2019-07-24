/*STACK USING ARRAY*/
#include <stdio.h>
#include<iostream>
#include<stdlib.h>
#define MAX 5
int top;
int a[5];
using namespace std;
class stack_using_array
{
 public:
        void push();
        void pop();
        void display();
        stack_using_array();
};
stack_using_array::stack_using_array()
{
 top=-1;
}
int main()
{
 stack_using_array obj;
 int choice;
 while(1)
 {
  cout<<"\t\t1`.PUSH\n\t\t2.POP\n\t\t3.DISPLAY\n\t\t4.QUIT\n\t\t";
  cout<<"enter your choice\n";
  cin>>choice;
  switch(choice)
  {
    case 1:obj.push();
    break;
    case 2:obj.pop();
    break;
    case 3:obj.display();
    break;
    case 4:exit(1);
    default:cout<<"wrong choice\n";
   }
 }
}
void stack_using_array::push()
{
 int pushed_item;
 if(top==(MAX-1))
 cout<<"stack overflow\n";
 else
 {
  cout<<"enter the item to be pushed in stack:";
  cin>>pushed_item;
  top=top+1;
  a[top]=pushed_item;
 }
}
void stack_using_array :: display()
{
 int i;
 if(top==-1)
 cout<<"stack is empty\n";
 else
 {
  cout<<"stack elements :\n";
  for(i=top;i>=0;i--)
  cout<<a[i]<<"\n";
 }
}
void stack_using_array::pop()
{
 if(top==-1)
 cout<<"stack underflow\n";
 else
 {
  cout<<"popped element is "<<a[top];
  top=top-1;
 }
} 
  
