#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
//reversing a linked list
typedef struct ll
{
int data;
struct ll *next;
}ll;

void main()
{

ll *temp,*head,*prev;

head=(ll *)malloc(sizeof(ll));

head->data=0;
head->next=NULL;
prev=head;

for(int i=1;i<5;i++)
{
temp=(ll *)malloc(sizeof(ll));
prev->next=temp;
temp->data=i;
prev=temp;
}
temp->next=NULL;

puts("Before reversing. LL =");
temp=head;
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
puts("");
 //store the beginnning of the list here
puts("After reversing");
reverse_ll(head);
}

void reverse_ll(ll *node)
{
if(node==NULL) return;
reverse_ll(node->next);
printf("%d->",node->data);
}


