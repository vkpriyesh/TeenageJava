#include<stdio.h>
void main(){
int a1,a2,i,j,t,r;
printf("Enter the size of (square) matrix:\n");
  scanf("%d%d",&a1,&a2);
if(a1==a2){
  int a[a1][a2];
printf("Enter the elements for %d X %d matrix:\n",a1,a2);
for(i=0;i<a1;i++){
  for(j=0;j<a2;j++){
  printf("Enter a[%d][%d]:",i,j);
  scanf("%d",&a[i][j]);
  }
    
  }
printf("Your matrix is\n");
  for(i=0;i<a1;i++){
  for(j=0;j<a2;j++)
  printf("%d ",a[i][j]);
  printf("\n");
  }  
printf("If the matrix you needed is shown above then press 1 else 0\n");
scanf("%d",&r);
if(r==1)  {

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
  printf("\n");
  }  
for(i=0;i<3;i++){
  for(j=0;j<3;j++)
  printf("%d ",a[i][j]);
  printf("\n");
  }  
}
else
  printf("Restart the program.\n");
}  
 else
   printf("Please enter square matrix dimensions\n.");
}