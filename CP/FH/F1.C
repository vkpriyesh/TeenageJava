#include<stdio.h>
#include<conio.h>
//writing to the file
FILE *f;
void write(){
	char ch;

	f=fopen("D:/cp/fh/a.txt","a");
	printf("Enter a single character:");
	scanf("%c",&ch);
	putc(ch,f);
	fclose(f);
	}
//reading from the file
void read(){
	char ch;

	f=fopen("D:/cp/fh/a.txt","r");
	while(1){
		ch=getc(f);
		if(ch==EOF)
			break;
		printf("%c",ch);
		}
	fclose(f);
	}
//starting of main function
void main(){
	clrscr();
	write();
	read();
	getch();
	}