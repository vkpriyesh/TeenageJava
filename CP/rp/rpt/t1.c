#include<stdio.h>
void main(){
float e,b,i;
printf("Enter the base:");
scanf("%f",&b);
printf("Enter the exponent:");
scanf("%f",&e);
float x=1;
for(i=1;i<=e;i++){
  x=x*b;
  }
  printf("%f to the power %f is : %f\n",b,e,x);
}