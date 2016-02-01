#include<stdio.h>
#include<conio.h>
int top=-1,s=10;
void push(int a[],int v)
 {
   if(top==s-1)
     printf("Stack Overflow");
   else
     {top++;
     a[top]=v;
     }
 }
 int pop(int a[])
 {   int v;
   if(top==-1)
      {
      printf("Stack Empty ");
      v=-1;
      }
   else
     {
       v=a[top];
       top--;
      }
     return v;
   }
 void disp(int a[])
  {
    int i;
     if(top==-1)
       printf("Stack Empty ");
     else
      for(i=0;i<=top;i++)
	 printf("%d ",a[i]);
    }
    void menu()
     {
       clrscr();
       printf("   Main Menu ");
       printf("\n1. Push");
       printf("\n2.Pop");
       printf("\n3.Display ");
       printf("\n4.Exit ");
       printf("\nEnter 1 - 4 :  ");
     }
  void main()
   {    int v,a[10],ch;

     do {
	menu();
	 scanf("%d",&ch);
 switch(ch)
  {
   case 1 :
    printf("\nEnter Value to push");
    scanf("%d",&v);
    push(a,v);
    break;
   case 2 :
     v=pop(a);
     if(v==-1)
	printf("\nEmpty Stack ");
     else
      printf("\nDeleted %d ",v);
      break;
   case 3 :
     disp(a);
   case 4:
      break;
   default :
       printf("Invalid choice ");
   }
   getch();
   }while(ch!=4);
  }//end of main





