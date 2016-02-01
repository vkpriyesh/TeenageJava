import java.awt.*;
import javax.swing.JLabel;
/*
 * NewClass.java
 *
 * Created on June 2, 2009, 5:59 PM
 *
 * To change this template, choose Tools | Template Manager
 * and open the template in the editor.
 */

/**
 *
 * @author Administrator
 */
public class NewThread extends Thread {
    Thread t;
    JLabel lbl;
    /** Creates a new instance of NewClass */
    public NewThread(JLabel lb) {
        lbl=lb;
    }
    public void run(){
        for(int i=1;i<=10;i++) {
            lbl.setText(" "+i);
            try {
                Thread.sleep(300);
            } catch(Exception ex) {
                ex.printStackTrace();
            }
        }
    }
}
