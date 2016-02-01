class StaticDemo
 {
static int a;
String subject;

StaticDemo(String sn) {
System.out.println("Playing  Quiz for "+sn);       subject=sn;
                      }

static void fun(){

  System.out.println("Score is "+ ++a);
                      }
static {
  System.out.println("Executing Block .... initial score = "+a);
        }
static void quiz(){
System.out.println("Quiz ends with score"+a);
           }

}
  class Demo
   {
    public static void  main(String ar[])
     {
        StaticDemo d1 = new StaticDemo("Maths");

        

        d1.fun();
        d1.fun();
        d1.fun();
        d1.fun();

        StaticDemo d2 = new StaticDemo("English");
        d2.fun();
        d2.fun();
        d2.fun();
        d2.fun();

        StaticDemo d3 = new StaticDemo("Science");
        d3.fun();
        d3.fun();
        d3.fun();
        d3.fun();

       System.out.println("Playing General Quiz ");
       StaticDemo.fun();
       StaticDemo.fun();
       StaticDemo.fun();
       StaticDemo.fun();
       StaticDemo.quiz();

 }


}
