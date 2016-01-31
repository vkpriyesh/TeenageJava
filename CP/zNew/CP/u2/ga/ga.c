#include <stdio.h>

void main(){
int yr;

printf("Enter the year:");
scanf("%d",&yr);
	if(yr%4==0){
			if (yr%100==0 && yr%400==0)

				printf("The year %d is a leap year.",yr);


				else




			 if (yr%100!=0 && yr%4==0)

				printf("The year %d is a leap year.",yr);

				else

						printf("The year %d is not a leap year.",yr);


			}



else
{
		printf("The year %d is not a leap year.",yr);

}


}
