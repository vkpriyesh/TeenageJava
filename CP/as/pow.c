#include<stdio.h>
void main(){
int p=1,e,b,i;
printf("Enter the BASE:");
scanf("%d",&b);
printf("Enter the EXPONENT:");
scanf("%d",&e);
for (i=1;i<=e;i++){
p=p*b;
}
printf("%d to the power %d is %d\n",b,e,p);
}