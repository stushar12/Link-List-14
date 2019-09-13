#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
  int data;
  struct node *next;
};
struct node * create()
{
  struct node *temp,*start=NULL,*q,*p,*r,*t;
while(1)
{
char str1[10];
printf("\n Enter yes or no\n");
scanf("%s",str1);
if(strcmp(str1,"no")==0)
break;
else
{
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter a value ");
scanf("%d",&temp->data);
  temp->next=NULL;
  if(start==NULL)
  {
    start=temp;
    p=temp;
    q=temp;
  }
  else
  {
    p->next=temp;
    p=temp;
  }
}
}
return q;
}
void check(struct node *p)
{
    while(p!=NULL)
    {
      p=p->next->next;
      if(p==NULL)
      {
      printf("\n It has even number of nodes ");
      break;
    }
    else if(p->next==NULL)
    {
      printf("\n It has odd number of nodes ");
      break;
    }
}
}
int main()
{
  struct node *p;
  p=create();
  check(p);
}
