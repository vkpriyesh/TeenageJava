#include<stdio.h>
#include<math.h>
void main(){
 double t,l=0.001;
 float r;
 int i,R;
 for (i=1;i<=27;++i){
   printf("--");
   }
 printf("\n");
 for (t=0;i<=3000;t+=150){
   r=exp(-l*t);
   R=(int)(50*r+0.5);
   printf(" |");
   for (i=1;i<=R;++i){
     
     printf("*");
  }
     
   printf("#\n");
   }
 for (i=1;i<3;++i) 
   printf(" |\n");
  
}