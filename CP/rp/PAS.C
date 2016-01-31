#include <stdio.h>
#include <conio.h>
#include "C:\mcl\fact.c"
void main(){
	int i,j,k,n,f1,f2,f3,f4;
	clrscr();
	printf("Enter the number of lines to print:");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		for(k=0;k<=n-i;k++)
			printf(" ");
		for(j=0;j<=i;j++)
			{
				f1=fact(i);
				f2=fact(j);
				f3=fact(i-j);
				f4=f1/(f2*f3);
				printf("%d ",f4);
			}
		printf("\n");
	}

			     getch();
}