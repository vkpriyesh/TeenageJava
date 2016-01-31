#include <stdio.h>
#include <conio.h>
void main(){
float sp,tp,cp;
clrscr();
printf("Enter selling price for 15 items:");
scanf("%f",&sp);
printf("Enter total profit for 15 items:");
scanf("%f",&tp);
cp=(sp/15)-(tp/15);
printf("Cost price of one item is:%f",cp);
getch();
}
