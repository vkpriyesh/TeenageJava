  class Demo
   {
    public static void  main(String ar[])
     {
      int a,b;
      a=10;
      b=20;
      int c;
      c=fun(a,b); //Use fun as static member function 
      System.out.println("sum  = "+c);
      }
static int fun(int a, int b)
     {
     int c;
      c=a+b;
      return c;
     }         

    }

