import java.util.*;
class A
  {
    public static void  main(String ar[])
     {
       float p10,p12,pug,ppg;
       char grade;
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter Percentage of 10th");
       p10=sc.nextFloat();
       System.out.println("Enter Percentage of 12th");
       p12=sc.nextFloat();
       System.out.println("Enter Percentage of UG");
       pug=sc.nextFloat();
       System.out.println("Enter Percentage of PG");
       ppg=sc.nextFloat();
       if(p10<65)
        {
         System.out.println("Not Eligible as per 10th");
        System.exit(0);
        }
      else
        if(p12<70)
         {
         System.out.println("Not Eligible as per 12th");
        System.exit(0);
        }
       else
        if(pug<75)
          {
         System.out.println("Not Eligible as per UG");
        System.exit(0);
        }
       else
         if(ppg<90)
          {
           System.out.println("Not Eligible as per PG");
           System.exit(0);
          }
         else
          {
           System.out.println("Eligible ");
          }
                 
      }
    }

