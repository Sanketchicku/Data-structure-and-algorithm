#include<stdio.h>
#include<conio.h>
#define SIZE 50
int arr[SIZE],top=-1;
void push(int);
void pop();
void traverse();
 void main()
  { int choice,item,ch;
    clrscr();
    while(1)
    {
    printf("Enter your choice\n (1)PUSH\n (2)POP\n (3)TRAVERSE\n (4)EXIT\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:printf("Enter the item to be pushed\n");
	   scanf("%d",&item);
	   push(item);
	   break;
    case 2:pop();
	   break;
    case 3:traverse();
	   break;
    case 4:exit(0);
    default:printf("Wrong Choice\n");
    }
    getch();
    }
 }

  void push(int item)
   {
    if(top>SIZE-1)
    printf("STACK OVERFLOW");
    else
    {
    top = top+1;
    arr[top]= item;
    printf("%d pushed into stack\n",item);
    }
   }
   void pop()
    {
     int item;
     if(top<=-1)
     printf("Stack empty\n");
     else
     {
     item = arr[top];
     printf(" %d popped from stack\n", item);
     top = top-1;
     }
    }

    void traverse()
    {
     int i;
     for(i=top;i>=0;i--)
     {
     printf(" %d\n", arr[i]);
     }
    }