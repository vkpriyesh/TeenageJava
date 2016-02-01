#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct Node
 {
   int info;
  struct Node *Next;
 };
 struct Node *Top=NULL,*N;

 void Push(int v)
  {
    N=(struct Node *)malloc(sizeof(struct Node));
    if(N==NULL)
    {
    printf("Unable to allocate memory ");
      return;
    }
    if(Top==NULL)
	N->Next=NULL;
    else
	N->Next=Top;
   N->info=v;
   Top=N;
 }

int pop()
 {     struct Node *T;
       int v;
  if(Top==NULL)
    {
    printf("\nStack Underflow");
    return -1;
    }
  else
    { T=Top;
     v=Top->info;
     Top=Top->Next;
     free(T);
     return v;
    }
 }
void disp()
 {
  struct Node *T;
  T=Top;
  if(Top==NULL)
   printf("\nEmpty ");
   else
    {
      while(T!=NULL)
       {
	 printf("\nMe = %u Value =%d   Next=%u",T,T->info,T->Next);
	 T=T->Next;
       }
     }
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
   {    int v,ch;

     do {
	menu();
	 scanf("%d",&ch);
 switch(ch)
  {
   case 1 :
    printf("\nEnter Value to Push");
    scanf("%d",&v);
    Push(v);
    break;
   case 2 :
     v=pop();
     if(v==-1)
	printf("\nEmpty Stack");
     else
      printf("\npopped  %d ",v);
      break;
   case 3 :
     disp();
   case 4:
      break;
   default :
       printf("Invalid choice ");
   }
   getch();
   }while(ch!=4);
  }//end of main





