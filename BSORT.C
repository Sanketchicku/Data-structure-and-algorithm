#include<stdio.h>
#include<conio.h>
int arr[50];
int n,i,j;
void getinput(int);
void bubblesort(int);
void display(int);
void main()
{  clrscr();
   printf("Enter the size of arrray\n");
   scanf("%d",&n);
   getinput(n);
   bubblesort(n);
   display(n);
getch();
}
void getinput(int n)
{
   printf("Enter values of array\n");
   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);

}
void bubblesort(int n)
{ int temp;
  for(i=0;i<n-1;i++)
  {
   for(j=0;j<n-1-i;j++)
    {
     if(arr[j]>arr[j+1])
     {
     temp    = arr[j];
     arr[j]  = arr[j+1];
     arr[j+1]= temp;
     }
    }
   }
}
void display(int n)
 {
  printf("In ascending order\n");
  for(i=0;i<n;i++)
  {
  printf("%d\n",arr[i]);
  }
 }