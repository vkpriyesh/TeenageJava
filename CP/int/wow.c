#include<stdio.h>
void main(){
int i,j,k;

  for(i=5;i>=0;i--){
  	  for(j=1;j<=i;j++)
	  printf("%c",j+64);
	  for(k=1;k<=2*(5-i);k++)
	  printf(" ");  
	  for(j=i;j>=1;j--)
	  printf("%c",j+64);
  
  
   printf("\n");

   
		    }
	}