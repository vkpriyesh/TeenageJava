#include<stdio.h>
#include<conio.h>
void read(int a[], int s)
 {
   int i;
   printf("Enter %d values ",s);
   for(i=0;i<s;i++)
     scanf("%d",&a[i]);
 }
void show(int a[], int s)
 {
   int i;
   printf("\nValues are \n");
   for(i=0;i<s;i++)
       printf("%d\n",a[i]);
 }
 int Bsearch(int a[],int s, int v)
  { //ascending sorted array required
    int mid, start,end;
    start=0;
    end = s-1;
    while(start<=end)
     {
      mid = (start+end)/2;
      if(v==a[mid])
	return mid;
     if(v<a[mid])
	 end=mid-1;
     if(v>a[mid])
       start=mid+1;
     }
    return -1;
  }
 void Bsort(int a[],int s)
   { //bubble sort
    int i,j,t;
    for(i=s-2;i>=0;i--)
     {
      for(j=0;j<=i;j++)
	  {
	     if(a[j]>a[j+1])
	       { t= a[j];
	       a[j]=a[j+1];
	       a[j+1]=t;
	      }
	  }
      }
     }

void main()
 {
   int a[10],s=10;
    clrscr();
    read(a,s);
    show(a,s);
    Bsort(a,s);
    show(a,s);
    getch();
 }
