#include <stdio.h>
#include <conio.h>
void main(){
float x1,x2,x3,y1,y2,y3,ar;
clrscr();
printf("Enter coordinates of side 1:");
scanf("%f,%f",&x1,&y1);
printf("Enter coordinates of side 2:");
scanf("%f,%f",&x2,&y2);
printf("Enter coordinates of side 3:");
scanf("%f,%f",&x3,&y3);
ar=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));


if(ar==0)

printf("The points fall on one straight line as there area is zero sq. units");



else
printf("The points doesnt fall on one straight line as there area is:%fsq.units",ar);


getch();
}
