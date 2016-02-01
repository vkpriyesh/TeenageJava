import java.util.*;
  class Arr
   {
    public static void  main(String ar[])
     {
       int n,v,f;
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter Size of Array ");
       n=sc.nextInt();
       int a[]=new int [n];
       read(a);
       Selsort(a);
       display(a);
       System.out.println("Enter Value to Search  ");
       v=sc.nextInt();
       f=Bsearch(a,v);
       if(f==-1)
           System.out.println("Not Found  ");
        else
            System.out.println("Found at index  "+f);
        }   
static void read(int a[])
 {           System.out.println("Enter Values   ");
          Scanner sc=new Scanner(System.in);
       for (int i=0;i<a.length;i++)
        {
         a[i]=sc.nextInt();        
          }
}

static void display(int a[])
 {           System.out.println(" Values  R ");
       for (int i=0;i<a.length;i++)
        {
                System.out.println(" "+a[i]);
          }
}  

  static int Lsearch(int a[], int v)
      {
       for (int i=0;i<a.length;i++)
        {
           if(a[i]==v)
              return i;
          }
         return -1;
        }
static int Bsearch(int a[],int v)
 {//restriction values must be in ascending order
   int mid,start=0,end=a.length-1;
   while(start<=end)
    {
     mid=start+end;
     if(a[mid]==v)
       return mid;
     if(v>a[mid])
       start=mid+1;
      if(v<a[mid])
        end = mid-1;
      }
      return -1;
  }

 static void Bsort(int a[])
  {
    for(int i=a.length-2;i>=0;i--)
      for(int j=0;j<=i;j++)
        {
         if(a[j+1]<a[j])
           {
            int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
           }
        }
   }

 static void Selsort(int a[])
   {
     int i,j,pos,min;
     i=0;
     j=0;
     while(i<a.length)
     {
     pos=i;
     min=a[i];
     for(j=i+1;j<a.length;j++)
      {
       if(a[j]<min)
        {
         min=a[j];
         pos=j;
        }
       }
       a[pos]=a[i];
       a[i]=min;
      i++;
     }
   }


  }

