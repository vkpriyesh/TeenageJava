#include <stdio.h>

void main(){
float cp,sp,pr,lo;

printf("Enter cost price:");
scanf("%f",&cp);
printf("Enter selling price:");
scanf("%f",&sp);
if(sp>cp){
pr=sp-cp;
printf("You have made a profit of:Rs%f",pr);

}

if(sp<cp){
lo=cp-sp;
printf("You have incurred a los of:Rs%f",lo);
}



}
