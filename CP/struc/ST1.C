#include<stdio.h>
#include<conio.h>
struct car{
char cn[20],regn[12],col[20],comp[50];
float pr;
};
void main(){
struct car det[3];
int i;
clrscr();

for(i=0;i<3;i++){
printf("Enter:%d CAR NAME;REGISTRATION NUMBER;COLOR;COMPANY;PRICE:-",i+1);
scanf("%[^/n]s[]%s%s%s%f",det[i].cn,det[i].regn,det[i].col,det[i].comp,&det[i].pr);
}
printf("You have %s coloured %s car of %s company with Registration Number as %s & price as %f.",
det[i].col,det[i].cn,det[i].comp,det[i].regn,det[i].pr);
getch();
}
