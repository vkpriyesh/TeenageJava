#include<stdio.h>
#include<conio.h>
void read(int a[],int s)
{
  int i;
   printf("Enter %d values ",s);
   for (i=0;i<s;i++)
    {
      scanf("%d",&a[i]);
      }
   }
void print(int a[],int s)
{
  int i;
   printf("\n%d values are\n",s);
   for (i=0;i<s;i++)
    {
      printf("%d ",a[i]);
      }
   }
void merge(int a[], int b[], int c[],int s1,int s2)
 {   int i=0,j=0,k=0;
   while(i<s1&&j<s2)
    {
     if(a[i]<b[j])
      {
	c[k]=a[i];
	k++; i++;
      }
     else
      {
	c[k]=b[j];
	k++; j++;
      }
   }
 if(i!=s1)
  {
    while(i<s1)
     {
       c[k]=a[i];
       k++; i++;
     }
  }
  if(j!=s2)
  {
     while(j<s2)
      {
       c[k]=b[j];
       k++;j++;
      }
 }
 }
void main()
 { int a[10],b[5],c[15];
   read(a,10);
   read(b,5);
   merge(a,b,c,10,5);
   print(a,10);
   print(b,5);
   print(c,15);


 }
