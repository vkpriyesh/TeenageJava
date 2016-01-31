#include<stdio.h>
void main(){
int a1,a2,b1,b2,i,j,k,sum;
printf("Enter the size of I matrix that u require:");
scanf("%d%d",&a1,&a2);
int a[a1][a2];
  for(i=0;i<a1;i++){
    for(j=0;j<a2;j++){
      printf("Enter a[%d][%d]:",i,j);
      scanf("%d",&a[i][j]);
    }
    
  }
printf("Your I matrix is:\n");
  for(i=0;i<a1;i++){
    for(j=0;j<a2;j++){
      printf("%d ",a[i][j]);
      
    }
    printf("\n");
  }
      //First matrix on end
printf("Enter the size of II matrix that u require:");
scanf("%d%d",&b1,&b2);
int b[b1][b2];
  for(i=0;i<b1;i++){
    for(j=0;j<b2;j++){
      printf("Enter b[%d][%d]:",i,j);
      scanf("%d",&b[i][j]);
    }
    
  }
printf("Your II matrix is:\n");
  for(i=0;i<b1;i++){
    for(j=0;j<b2;j++){
      printf("%d ",b[i][j]);
      
    }
    printf("\n");
  }
  //Second matrix on end
  int c[a1][b2];
  for(i=0;i<a1;i++){
    for(j=0;j<b2;j++){
      sum=0;
      for(k=0;k<b1;k++){
	sum=sum+a[i][k]*b[k][j];
	c[i][j]=sum;
      }
      

    }
    
  }
  printf("Your multiplied matrix is:\n");
  for(i=0;i<a1;i++){
    for(j=0;j<b2;j++){
      printf("%d ",c[i][j]);
      
    }
    printf("\n");
  }
  

}
