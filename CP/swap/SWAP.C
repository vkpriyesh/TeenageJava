#include <stdio.h>
#include <conio.h>
void main(){
int c,d;
clrscr();
printf("Enter 1st number:");
scanf("%d",&c);
printf("Enter 2nd number:");
scanf("%d",&d);
c=c+d;
d=c-d;
c=c-d;
printf("The new numbers are:%d&%d",c,d);
getch();
}