import java.util.*;
class A
  {
    public static void  main(String ar[])
     {
       float per;
       char grade;
       System.out.println("Enter Percentage ");
       Scanner sc=new Scanner(System.in);
       per=sc.nextFloat();
      if(per>=65.0)
        grade='a';
       else
        if(per>=50)
          grade ='b';
         else
           grade ='c';

       System.out.println("Grade  = "+grade);
      }
    }

