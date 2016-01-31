#include <stdio.h>
#include <string.h>
void main(){
  int s1,s2,i,j;
printf("Enter the limits for your string:");
scanf("%d%d",&s1,&s2);
char str[s1][s2];
gets(str);
printf("You have entered :\n%s",str);
}