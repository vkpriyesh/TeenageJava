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
void main()
 {
   int a[10],s=10,v,f;
    clrscr();
    read(a,s);
    show(a,s);
    printf("Value to search ");
    scanf("%d",&v);
    f=Bsearch(a,s,v);
    if(f==-1)
     printf("Not found  ");
    else
      printf("Found at %d ",f);
    getch();
 }





