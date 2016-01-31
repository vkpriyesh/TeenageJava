#include<stdio.h>
float avg(float a,float b, float c){
  float avgr;
  avgr=(a+b+c)/3;
  return avgr;
}
void main(){
  float a,b,c,r;
  printf("Enter 1st number:");
  scanf("%f",&a);
  printf("Enter 2nd number:");
  scanf("%f",&b);
  printf("Enter 3rd number:");
  scanf("%f",&c);
  r=avg(a,b,c);
  printf("The average of %f, %f & %f is %f\n",a,b,c,r);
}