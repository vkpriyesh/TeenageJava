#include<stdio.h>
void main(){
int as,i,j,t;
printf("Enter the size of I matrix that u require:");
scanf("%d",&as);
int a[as];
  for(i=0;i<as;i++){
    
      printf("Enter a[%d]:",i);
      scanf("%d",&a[i]);
    }
    
  

  
      //First matrix on end
for(i=as-2;i>0;i--){
    for(j=0;j<=i;j++){
      if(a[j]>a[j+1]){
	t=a[i];
	a[i]=a[j];
	a[j]=t;
	
      }
      
    }
    printf("\n");
  }
  printf("Your I matrix in ascending order is:\n");
  for(i=0;i<as;i++){
    
      printf("%d ",a[i]);
      
    }
    printf("\n");
  

}
