#include<stdio.h>
#include<conio.h>
void bin(int n)
 {   int b;
   if(n>0)
    {
      b=n%2;
      n=n/2;
      bin(n);
      printf("%d",b);
    }
 }

 void main()
   {
     int N;
     clrscr();
     printf("Enter Value ");
     scanf("%d",&N);
     bin(N);
    getch();
   }