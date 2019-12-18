#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
}*head;
void add(int num)
{
  struct node* temp;
  temp=head;
  temp = (struct node*)malloc(sizeof(struct node));
  temp->data=num;
  if(head==0)
  {
      head=temp;
      head->next=0;
  }
  else
  {
      temp->next=head;
      head=temp;
  }
  printf("insertion successful\n");
}
void display()
{
    struct node* temp=head;
    if(head==0)
    {
        printf("list is empty");
    }
    else
    {
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
void addlast(int num)
{
    struct node *temp,*right=head;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data=num;
    while(right->next!=0)
    {
        right=right->next;
    }
    right->next=temp;
    right=temp;
    right->next=0;
}
void delete(int num)
{
    struct node *temp,*prev;
    temp=head;
    while(temp!=0)
    {
        if(temp->data==num)
        {
             if(temp==head)
             {
                 head=temp->next;
                free(temp);
                 return 1;
             }
             else
             {
                prev->next=temp->next;
                free(temp);
                return 1;
             }
        }
        else
        {
         prev=temp;
         temp= temp->next;
        }
    }
    
}
int main()
{
   int i,j=1,num;
   head=0;
   struct node* temp=0;
   
   while(j)
   {
       printf("enter the operation to perform in list\n");
       printf("\n");
       printf("---------------------------------------\n");
       printf("1.Insert at beginning\n");
       printf("2.Insert at middle\n");
       printf("3.Insert at end\n");
       printf("4.display\n");
       printf("5.delete\n");
       scanf("%d",&i);
       printf("enter 1 to continue and 0 to exit  ");
       scanf("%d",&j);
       switch(i)
       {
           case 1:printf("enter the no to insert  ");
                  scanf("%d",&num);
                  add(num);
                  break;
           case 3:printf("enter the no to insert");
                  scanf("%d",&num);
                  addlast(num);
                  break;
           case 4:display();
                  break;
           case 5:printf("enter the no to insert");
                  scanf("%d",&num);
                  delete(num);
                  break;
           
       }
   }
   
   
}
