#include <stdio.h>
#include <conio.h>
#include <string.h>
void main(){
  int i=0,j=0;
    char str[5][20],d[20];
  clrscr();
  printf("Enter your names:");
  while(i<5)
    scanf("%s",str[i++]);

  for(i=1;i<5;i++){
    for(j=1;j<=4;j++){
      if(strcmp(str[j-1],str[j])>0){
	strcpy(d,str[j-1]);
	strcpy(str[j-1],str[j]);
	strcpy(str[j],d);

      }

    }

  }
  printf("\nAlphabetical list for your strings is:\n");
  for(i=0;i<5;i++)
    printf("%s ",str[i]);
  printf("\n");

getch();
}