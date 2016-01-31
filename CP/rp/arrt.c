#include<stdio.h>
void main(){
int a[3][3],i,j,t;
printf("Enter elements for 3X3 matrix:\n");
for(i=0;i<3;i++){
  for(j=0;j<3;j++){
  printf("Enter a[%d][%d]:",i,j);
  scanf("%d",&a[i][j]);
  }
    
  }
  for(i=0;i<3;i++){
  for(j=0;j<3;j++)
  printf("%d ",a[i][j]);
  printf("\n");
  }  
  t=0;
for(i=0;i<3;i++){
  for(j=0;j<3;j++)
  {
    if(i<j){
    t=a[i][j];
    a[i][j]=a[j][i];
    a[j][i]=t;
      
    }
  }
  printf("\n\n\n\n\n");
  }  
for(i=0;i<3;i++){
  for(j=0;j<3;j++)
  printf("%d ",a[i][j]);
  printf("\n");
  }  

}