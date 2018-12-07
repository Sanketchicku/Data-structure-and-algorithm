#include<stdio.h>
#define MAX 50
int arr[MAX];
int front=-1,rear=-1;
void push();
void pop();
void traverse();
int main()
  {
   int ch;
   clrscr();

   while(1)
   {
   printf("Enter your choice\n");
   scanf("%d",&ch);
   switch(ch)
   {
   case 1:push();
	  break;
   case 2:pop();
	  break;
   case 3:traverse();
	  break;
   case 4:exit(0);
	  break;
   default:printf("Wrong choice entered\n");
    }
    }

}
void push()
{ int item;
  if(front==MAX-1)
  printf("OVERFLOW\n");
  else
  {
   if(front==-1)
   front=0;

   printf("Enter the item to be pushed\n");
   scanf("%d",&item);
   rear = rear+1;
   arr[rear]=item;
  }
 }

void pop()
{ int item;
  if(rear<front||front==-1)
  printf("Underflow\n");
  else
  {
  item = arr[front];
  front= front+1;
  printf("Deleted item is %d", item);
  }
}

void traverse()
{
  int i=0;
  if(front==-1)
  printf("Queue Underflow\n");
  else
  {
  for(i=front;i<=rear;i++)
  {
  printf("%d\n",arr[i]);
  }
  }
}


