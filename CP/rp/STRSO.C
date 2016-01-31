#include <stdio.h>
#include <conio.h>
#include <string.h>
void main(){
  int s1,s2,i=0,j=0;
  printf("Enter the limits for your string:");
  scanf("%d%d",&s1,&s2);
  char str[s1][s2],d[s2];
  
  printf("Enter your names:");
  while(i<s1){
    scanf("%s",str[i]);
    i++;
    
  }
    
  
  for(i=1;i<s1;i++){
    for(j=1;i<=s1-1;i++){
      if(strcmp(str[j-1],str[j])>0){
	strcpy(d,str[j-1]);
	strcpy(str[j-1],str[j]);
	strcpy(str[j],d);
	
      }
      
    }
    
  }
  printf("\nAlphabetical list for your strings is:\n"); 
  for(i=0;i<s1;i++)
    printf("%s ",str[i]);
  printf("\n");


}