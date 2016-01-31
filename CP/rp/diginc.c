#include<stdio.h>
void main(){
int d,r,r0,t,t0,n;
printf("Enter your number:");
scanf("%d",&n);
t=n;
r=0;
while(t!=0)
  {
      d=t%10;
      r=r*10+d+1;
      t=t/10;
  }
  
t0=r;
r0=0;
while(t0!=0)
  {
      d=t0%10;
      r0=r0*10+d;
      t0=t0/10;
  }
  

printf("Your digits incremented number is:%d\n",r0);

}


