#include<stdio.h>
#include<conio.h>
int r=-1,f=-1,s=10;
void Add(int a[],int v)
 {
 if(r==s-1)
 {   printf("Full ");
   return;
 }
if(r==-1 && f==-1)
     f=0;
r++;
a[r]=v;
}
int Delete(int a[])
 {
   int v;
   if(f==-1&&r==-1)
     {
     printf("Underflow");
     return  -1;
     }
     v=a[f];
   if(f==r)
     {  f=-1 ; r=-1;
      }
     else
	f++;
     return v;
 }
 void disp(int a[])
  {
    int i;
     if(f==-1 && r==-1)
      {
	printf("Empty ");
       }
      else
	for(i=f;i<=r;i++)
		printf("%d ",a[i]);
    }


    void menu()
     {
       clrscr();
       printf("   Main Menu ");
       printf("\n1. Add");
       printf("\n2.Del");
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
    printf("\nEnter Value to Add");
    scanf("%d",&v);
    Add(a,v);
    break;
   case 2 :
     v=Delete(a);
     if(v==-1)
	printf("\nEmpty Queue ");
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





