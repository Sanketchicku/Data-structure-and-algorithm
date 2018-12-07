#include<stdio.h>
#include<conio.h>
 int a[]={1,3,5,7,9,11,13,15,17,19,99,100};
void b_search(int N,int item);
void main()
{
 clrscr();
 b_search(12,100);
 getch();
}
void b_search(int N,int item)
{
 int l=0,u=N-1,m;

 while(l<=u)
 {
 m=(l+u)/2;
 if(item==a[m])
 {
 printf("Element found at %d index",m);
 return ;
 }
 else if(item<a[m])
 l=m-1;
 else
 u=m+1;

}
}