#include<stdio.h>
#include<conio.h>
#include"fun2.c"
void main(){
  float n,c;
  clrscr();
  printf("Enter the number to calculate its factorial:");
  scanf("%f",&n);
  c=fact(n);
  printf("The factorial of %f is %f.",n,c);
  getch();


}
