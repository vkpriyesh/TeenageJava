#include<stdio.h>
#include<string.h>
void main(){
char str[64];
int i;
printf("Enter your name: ");
gets(str);
while(str[i]!=0){
  printf("%c",str[i]);
  i++;
  
}

}