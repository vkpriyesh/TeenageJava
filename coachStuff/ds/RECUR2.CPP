#include<stdio.h>
#include<conio.h>
int sfun(int s, int e, int c)
 {
   if(s<e)

int fun(int n)
 {
 int a,s=0;
 a=1;
 if(n==0)
 {
   return s;
 }
  a=n%10;
 s=a*a*a+fun(n/10);
 return s;
}

void main()
 {
 clrscr();
 int f;
f= fun(407);
printf("%d",f);
 getch();
}

