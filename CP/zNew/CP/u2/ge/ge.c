#include <stdio.h>

void main(){
float a,b,c;

printf("Enter side A:");
scanf("%f",&a);
printf("Enter side B:");
scanf("%f",&b);
printf("Enter side C:");
scanf("%f",&c);

	if(a+b>c && b+c>a)
		{
			if(c+a>b)
			printf("Yeah, its a Triangle..");
		}
else
		printf("Nope this isnt a Triangle.");

}
