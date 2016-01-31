#include<stdio.h>
#include<conio.h>
void main(){
int a[2][3],b[3][2],c[2][2],a1=2,a2=3,b1=3,b2=2,i,j,k,sum;
clrscr();
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

getch();
}
