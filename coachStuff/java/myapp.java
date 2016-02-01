import java.awt.*;
import java.applet.*;
/*<applet code="myapp" width=100 height=100>
       </applet> */
public class myapp extends Applet
{     BorderLayout B= new BorderLayout();   
   public  void init()
   {
   setLayout(B);
  Panel p=new Panel(B);
  Panel p2 = new Panel();
   p2.setLayout(new BorderLayout());
   p2.add(new TextArea());  
 }
}
