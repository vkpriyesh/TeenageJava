class StaticDemo
 {
static int a;
static void fun()
{
  System.out.println("Value of a is "+a++);
}
static
 {
  System.out.println("Executing Block .... ");
 }
}

  class Demo
   {
    public static void  main(String ar[])
     {
StaticDemo d = new StaticDemo();
d.fun();
d.fun();
d.fun();
d.fun();




    }


}
