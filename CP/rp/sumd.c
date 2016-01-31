#include<stdio.h>
void main(){
int d,t,n,sum;
printf("Enter your number:");
scanf("%d",&n);
t=n;

sum=0;
while(t!=0)
  {
      d=t%10;
      sum=sum+d;
      t=t/10;
  }


printf("The sum of the digits is:%d\n",sum);
}


