#include<stdio.h>
#include<conio.h>
void main(){
char name;
FILE *f;
clrscr();
f=fopen("D:/cp/fh/st.txt","w");
printf("Enter student's name:\n");
scanf("%c",&name);
putc(name,f);
fclose(f);
}
