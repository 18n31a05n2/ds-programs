#include<iostream>
#include<stdlib.h>
using namespace std;
class sll
{
struct list
{
int data;
struct list *next;
}*head;
public:
typedef struct list node;
sll()
{
head=NULL;
}
void create();
void insert();
void display();
int count();
int deletepos();
void insertatbeg();
void insertatmid();
void insertatend();
void search();
};
int main()
{
int ch,k,c;
sll obj;
do
{
cout<<"\n\tMAIN MENU\n";
cout<<"\n\t\t1.create\n\t\t2.display\n\t\t3.insert\n\t\t4.deletepos\n\t\t5.count\n\t\t6.search\n\t\t7.exit\n\t\t";
cout<<"\n\tenter ur choice";
cin>>ch;
switch(ch)
case 1:obj.create();
break;
case 2:obj.display();
break;
case 3:obj.insert();
break;
case 4:k=obj.deletepos();
cout<<"deleted element in the list"<<k;
break;
case 5:c=obj.count();
cout<<"no of elements in the list"<<c;
break;
case 6:obj.search();
break;
case 7:exit(0);
   }
}
while (ch>0&&ch<8);
}
void sll::create()
{
node *temp, *p;
temp=new node;
temp->next=NULL;
cout<<"enter the element";
cin>>temp->data;
if(head==NULL)
{
head=temp;
}
else
{
p=head;
while(p->next!=NULL)
p=p->next;
temp->next=NULL;
p->next=temp;
}
}
void sll::display()
{
int d;
node *q;
q=head;
cout<<"\n elements in the list are\n";
while(q!=NULL)
{
cout<<"_"<<q->data;
q=q->next;
}
}
int sll::count()
{
node *p;
int c=0;
p=head;
while (p!=NULL)
{
p=p->next;
c++;
}
return(c);
}
void sll::search()
{
int f=0,k,v;
node *p;
p=head;
cout<<"enter the element you want to found";
cin>>k;
while(p!=NULL)
{
if(p->data==k)
{
f=1;
cout<<"element found";
}
p=p->next;
}
if(f==0)
{
cout<<"element not found";
}
}
void sll::insert()
{
int ch;
do
{
cout<<"\n\t\t1.insertatbag\n\t\t2.insertatmid\n\t\t3.insertatend\n\t\t4.display\n\t\t5.exit";
cout<<"enter your choice";
cin>>ch;
switch(ch)
{
case 1:insertatbeg();
      break;
case 2:insertatmid();
      break;
case 3:insertatend();
      break;
case 4:display();
      break;
default:
      break;
}
}while(ch>0&&ch<5);
}
void sll::insertatbeg()
{
node *temp;
temp=new node;
cout<<"enter the inserted element";
cin>>temp->data;
temp->next=head;
head=temp;
}
void sll::insertatmid()
{
int key;
node *temp,*p;
temp=new node;
cout<<"enter the element";
cin>>temp->data;
cout<<"enter the key element";
cin>>key;
p=head;
while(p!=NULL)
{
if(p->data==key)
{
temp->next=p->next;
p->next=temp;
}
p=p->next;
}
}
void sll::insertatend()
{
node *temp,*p;
temp=new node;
cout<<"enter element";
cin>>temp->data;
if(head==NULL)
{
temp->next=head;
head=temp;
}
else
{
p=head;
while(p->next!=NULL)
p=p->next;
temp->next=NULL;
p->next=temp;
}
}
int sll::deletepos()
{
node *p;
int pos,i,k;
cout<<"enter the position for deletion";
cin>>pos;
if(head!=NULL)
{
if(pos==1)
{
k=head->data;
head=head->next;
return(k);
}
else
{
i=2;
p=head;
while((p!=NULL)&&(i<pos))
{
p=p->next;
i++;
}
if(p!=NULL)
{
k=p->next->data;
p->next=p->next->next;
return(k);
}
}
}
else
cout<<"\n\t list is empty";
}
