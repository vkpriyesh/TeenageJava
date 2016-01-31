#include<stdio.h>
void main(){
int s=0,n,d,t;
printf("Enter the Number:");
scanf("%d",&n);
t=n;
while(t!=0){
d=t%10;
s=s+d;
t=t/10;
}
printf("The sum of the digits %d is %d\n",n,s);
}
