#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
}*head;
void push(int data)
{
  struct node* temp;
  temp=head;
  temp = (struct node*)malloc(sizeof(struct node));
  temp->data=data;
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
  printf("<--------------- Element sucessfully pushed into the stack ---------------->\n\n");

}
void pop()
{
    struct node* temp;
    if(head==0)
    {
        printf("<-- stack is empty -->\n\n");
    }
    else
    {
      temp=head;
      head=head->next;
      free(temp);
      printf("<------------- Element successfully poped ----------------->\n\n");
    }
}
void display()
{
    struct node* temp;
    temp=head;
    if(temp==0)
    {
        printf("<-- stack is empty -->\n");
    }
    else
    {
      printf("<---stack elements are---->");
      while(temp->next!=0)
      {
          printf("%d \n",temp->data);
          temp=temp->next;
      }
      printf("%d  \n",temp->data);
    }
}
int main()
{
    int i,j=1,num;
    while(j)
   {
       printf("<--- Enter the operation to perform in linkedstack --->\n");
       printf("\n");
       printf("---------------------------------------\n");
       printf("1.push\n");
       printf("2.pop\n");
       printf("3.display\n");
       printf("enter the option  ");
       scanf("%d",&i);
       printf("enter 1 to continue and 0 to exit  ");
       scanf("%d",&j);
       switch(i)
       {
           case 1:printf("enter the no to push into the stack ");
                  scanf("%d",&num);
                  push(num);
                  break;
           case 2:pop(num);
                  break;
           case 3:display();
                  break;
                  
       }
   }
}
