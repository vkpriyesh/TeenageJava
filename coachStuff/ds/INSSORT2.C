#include<stdio.h>
#include<conio.h>
#include<limits.h>
void read1(int a[], int s)
{
   int i;
   printf("Enter %d values ",s);
   for(i=1;i<s;i++)
     scanf("%d",&a[i]);
}
void show1(int a[], int s)
{
   int i;
   printf("\nValues are \n");
   for(i=1;i<s;i++)
       printf("%d\n",a[i]);
}
void ins_sort(int a[], int s)
 {
   //assuming a[0] as negative min.
	int i,j,t;
    a[0]=INT_MAX;

     for(i=1;i<s;i++)
      {
	  t=a[i];
	  j=i-1;
	  while(t>a[j])
	   {
	     a[j+1]=a[j];
	     j--;
	    }
	  a[j+1]=t;
	}
 }


void main()
{
int a[10],s=10;
clrscr();
read1(a,s);
show1(a,s);
ins_sort(a,s);
show1(a,s);
getch();
}