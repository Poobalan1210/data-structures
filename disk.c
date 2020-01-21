#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data1,data2;
    struct node* next;
}*head;
void insert(int dno,int rad)
{
    struct node* temp;
    
    temp=head;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data1=dno;
    temp->data2=rad;
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
  printf("\n<--------------- Disk sucessfully pushed into the stack ---------------->\n\n");
}
void display()
{
    struct node* temp;
    struct node* temp1;
    temp=head;
    temp1=temp;
    int con,i;
    if(temp==0)
    {
        printf("\nStack is empty");
    }
    else
    {
     do
     {
        con=0;
        
        while(temp->next!=0)
        {
            if(temp->data2>temp->next->data2)
            {
                i=temp->data2;
                temp->data2=temp->next->data2;
                temp->next->data2=i;
                con=1;
            }
            temp=temp->next;
        }
     }while(con); 
     temp=temp1;
     printf("\n<---stack elements are---->");
      while(temp->next!=0)
      {
          printf("\n Disk - %d Radius -  %d",temp->data1,temp->data2);
          temp=temp->next;
      }
      printf("\n Disk - %d Radius - %d",temp->data1,temp->data2);
      printf("\n <-----end----->");
    }
    
}
int main()
{
    int i,num1,num2,j=1;
    while(j)
    {
        printf("1--Enter 1 to insert your disk in the stack \n");
        printf("2--Enter 2 to display your collection of disks \n "); 
        printf("Enter your option to proceed further - ");
        scanf("%d",&i);
        printf("\nEnter your 1 to continue and 0 to exit - ");
        scanf("\n%d",&j);
        switch(i)
        {
            case 1:printf("\nEnter the disc no - ");
                   scanf("%d",&num1);
                   printf("\nEnter the radius of the disc - ");
                   scanf("%d",&num2);
                   insert(num1,num2);
                   break;
            case 2:display();
                    break;
        }
        
    }
}
