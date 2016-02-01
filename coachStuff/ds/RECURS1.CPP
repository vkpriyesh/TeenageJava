#include<stdio.h>
#include<conio.h>
int fun(int a)
 {
int f=1;
if(a==0)
  return 1;
f= fun(a-1)*a;
   return f;
  }
void main()
 {
 int n,F;
 clrscr();
 n=5;
 F=fun(n);
 printf("%d ",F);
 getch();
}

