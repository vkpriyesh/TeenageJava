#include <stdio.h>

void main(){
float f,s,t;

printf("Enter hardness:");
scanf("%f",&f);
printf("Enter carbon content:");
scanf("%f",&s);
printf("Enter tensile strength:");
scanf("%f",&t);
	if(f>50 && s<0.7)
		{
			if (t>5600)
				printf("Grade 10");
			else
				printf("Grade 9");
		}
	else{}
	if(s<0.7 && t>5600)
		{
			if (f>50)
				printf("Grade 10");
			else
				printf("Grade 8");
		}
	else{}
	if(f>50 && t>5600)
		{
			if (s<0.7)
				printf("Grade 10");
			else
				printf("Grade 7");
		}
	if(f<=50 || s>=0.7)
		{
			if(t<=5600)
				printf("Grade 6");
			else
				printf("Grade 5");
			
		}
	else 
{printf("Grade 5");}		

}
