#include<stdio.h>
void main(){
int d,r,t,n;
printf("Enter your number:");
scanf("%d",&n);
t=n;
r=0;
while(t!=0)
  {
      d=t%10;
      r=r*10+d;
      t=t/10;
  }

printf("Your reversed number is:%d\n",r);

}


