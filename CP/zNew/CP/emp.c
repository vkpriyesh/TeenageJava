#include <stdio.h>

void main(){
float bsal,da,hra,gsal;
printf("Enter employee's Basic Salary:");
scanf("%f",&bsal);
da=0.4*bsal;
hra=0.2*bsal;
gsal=da+hra+bsal;
printf("Employee's gross Salary is:%f",gsal);

}