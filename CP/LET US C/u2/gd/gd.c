#include <stdio.h>
#include <conio.h>
void main(){
float d;
clrscr();
printf("Enter days of return:");
scanf("%f",&d);
	if(d<=5)
		{
			printf("Fine is 50paise");
		}
else
	if(d>=6 && d<=10)	
		{
			printf("Fine is 1Re");
		}
else
	if(d>10 && d<=30)	
		{
			printf("Fine is 5Rs");
		}
else 
	printf("Your membership is cancelled.");
getch();
}
