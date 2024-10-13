package OOP;

import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;


import java.awt.Color;
import java.awt.Container;
import java.awt.Cursor;
import java.awt.Font;



public class swing extends JFrame {

public static void main(String[] args) {

    //Jframe
   // JFrame frame=new JFrame();
swing frame=new swing();//by using inheritance in swing class
frame.setVisible(true);
frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//frame.setSize(400,300);
//frame.setLocation(200,50);
frame.setBounds(200,50,400,300);//do both setsize and set location
frame.setTitle("frame title");
frame.setResizable(false);

//change frame icon
 //ImageIcon icon=new ImageIcon(getClass.getResource("test.png")); 

//change Jframe background color
Container c;
c=frame.getContentPane();
c.setLayout(null);
c.setBackground(Color.MAGENTA);

 //create font
   Font f=new Font("Arial",Font.BOLD,14);


//set Jlabel
JLabel label=new JLabel();
label.setText("enter your user name");
label.setBounds(50,20,150,50);
label.setFont(f);
c.add(label);

JLabel passlabel=new JLabel("enter your password");//dont need to use settext
passlabel.setBounds(50,80,150,50);
//passlabel.setFont(f);
c.add(passlabel);

//create cursor
Cursor cursor=new Cursor(Cursor.HAND_CURSOR);

  //Jbutton
  JButton button=new JButton("icon");
button.setBounds(100,200,100,50);
c.add(button);

  JButton button1=new JButton("create");
button1.setBounds(210,200,100,50);
button1.setFont(f);
button1.setCursor(cursor);
button1.setForeground(Color.red);
button1.setBackground(Color.orange);
c.add(button1);










    JOptionPane.showMessageDialog(null, "wrong password","warning",1);//message type for icon change
   
    String name =JOptionPane.showInputDialog(null,"input your name","this is title",JOptionPane.QUESTION_MESSAGE);

    JOptionPane.showMessageDialog(null, name+" wellcome to swing","warning",1);

    int choice= JOptionPane.showConfirmDialog(null, "do you want to quite", "title", JOptionPane.YES_NO_CANCEL_OPTION);
    if(choice==JOptionPane.YES_OPTION){
    System.exit(0);
    }
    else{
    //System.out.println("you have click no option ");
    JOptionPane.showMessageDialog(null,"cliked no");
}
//Jframe


}
    
}