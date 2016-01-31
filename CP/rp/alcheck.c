#include<stdio.h>
void main(){
char c;
printf("Enter your character:");
scanf("%c",&c);
if(c>64 && c<91)
  printf("The character you have entered is in HIGHER case\n",c);
if(c>96 && c<123)
  printf("The character you have entered is in LOWER case\n",c);
if(c>47 && c<58)
  printf("You have entered a number\n",c);
if((c>=0 && c<48) || (c>=58 && c<65) || (c>=91 && c<97) || (c>=123 && c<128))
  printf("You have entered a special character\n",c);

}


