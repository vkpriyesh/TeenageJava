#include<stdio.h>
void main(){
int ars,s,i;
printf("Enter the size of array:");
scanf("%d",&ars);
int ar[ars];
printf("Enter %d elements:",ars);
for(i=0;i<ars;i++){
  scanf("%d",&ar[i]);
  }
for(i=0;i<ars;i++){
  printf("Your elements are:%d\n",ar[i]);
  }  

}