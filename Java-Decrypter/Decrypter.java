hjimport java.awt.*;
import java.awt.event.*;
import javax.swing.UIManager;
import javax.swing.JOptionPane;
import javax.swing.*;
import java.io.*;
import sun.audio.*;
import java.util.*;
import java.util.Scanner;
import java.awt.image.BufferedImage;
import javax.imageio.ImageIO;
import java.applet.*;
import java.nio.file.Files;
import java.io.File;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.text.ParseException;

import com.sun.org.apache.xerces.internal.impl.dv.util.Base64;
class Arduino2
{
	static JFrame f= new JFrame("Image to binary converter");
    static final JPanel panel= (JPanel)f.getContentPane();  
    static final JPanel panel2=new JPanel();
    static JLabel label;
    static byte[] im;
    static int l=0;
    static JMenuItem d=new JMenuItem("Open");
    static File imgPath;
    static int i,j=0;
    static ImageIcon a4;
    static ImageIcon a5;
    static File f7;
    static BufferedImage i1=null;
    static ImageIcon h10;
    static BufferedImage a7=null;
    static ByteArrayOutputStream baos=null;
    static InputStream in=null;
    static CardLayout c=new CardLayout();
    static byte[] imageInByte=null;
    Arduino2()throws IOException,NoSuchMethodException, InterruptedException, InvocationTargetException, IllegalAccessException
	{
	  JMenuBar mb= new JMenuBar();
	  JMenu q=new JMenu("Help");
	  JMenu r=new JMenu("Open");
	  JMenuItem g=new JMenuItem("Decrypt");
	  JMenuItem s=new JMenuItem("About Arduino... H");
	 
	 
	  f.getContentPane().setBackground(Color.BLACK);
	  f.setSize(1370,1400);
	 
	    g.addActionListener(new ActionListener()
	    {
	    	public void actionPerformed(ActionEvent e)
	    	{

        	   	try{
                            number();
						}
                    catch(IOException e1)
                    {
                    }
        	   
	    	}});
	    	
	    
        f.addWindowListener(new WindowAdapter() 
    		{ 
     			public void windowClosing(WindowEvent e)
     			 { 
  					System.exit(0); 
 				 } 
    		});
    	s.addActionListener(new ActionListener()
    	{
    		public void actionPerformed(ActionEvent e)
    		{
    			JOptionPane.showMessageDialog(null,"                Copyright (C) \n   Team A7 of JED-I CIVIL BRANCH \nAditya.T - Akash.C - Chaitanya.K - Rajat.R");
    		}
    	});
    	f.addKeyListener(new KeyAdapter()
    	{
    		public void keyPressed(KeyEvent e)
    		{
    			char ch;
    			ch=e.getKeyChar();
    			if(ch=='h')
    			JOptionPane.showMessageDialog(null,"                Copyright(C) \n   Team A7 of JED-I CIVIL BRANCH \nAditya.T - Akash.C - Chaitanya.K - Rajat.R");
    		}
        });
       	
    	f.setVisible(true);
	  	File c1=new File("E:/h/9.JPG");
	  	File c2=new File("E:/h/8.JPG");
	  	File c3=new File("E:/h/7.JPG");
	  	File c4=new File("E:/h/6.JPG");
	  	File c5=new File("E:/h/5.JPG");
	  	File c6=new File("E:/h/4.JPG");
	  	File c7=new File("E:/h/3.JPG");
	  	File c8=new File("E:/h/2.JPG");
	  	File c9=new File("E:/h/1.JPG");
	   	AudioStream w1;
	 	InputStream t1 = new FileInputStream("E:/h/p.wav");
     	w1 = new AudioStream(t1);
     	AudioPlayer.player.start(w1);
	  	   
	  
	        Thread.sleep(5000);
	        
      BufferedImage ie=ImageIO.read(c1);
	        a5=new ImageIcon(ie);
	        label=new JLabel("",a5,JLabel.CENTER);
	  	    panel.add(label);
	  	    
	  	    Thread.sleep(1000);
	  	    
	  		
	  	    mb.add(q);
       	    mb.add(r);
            q.add(s);
     		r.add(g);
    		f.setJMenuBar(mb);
	  	    
	  	    AudioStream w;
	 		InputStream t = new FileInputStream("E:/h/i.wav");
     		w = new AudioStream(t);
     		AudioPlayer.player.start(w);
        	int k=1;
	  	for(int u=1;u<671;u++)
	  	{
	  	    
	  		if(u==670)
	  		{
	  			u=1;
	  		}
	  		else if(k==1700)
	  		{
	  			AudioPlayer.player.stop(w);
	 			t = new FileInputStream("E:/h/i.wav");
     			w = new AudioStream(t);
     			AudioPlayer.player.start(w);
     			k=0;
	  		}
	  		else if(l==1)
	  		{
	  			break;
	  		}
	  		f.setVisible(true);
	  		String h11="E:/h/B1 ("+u+").JPG";
	  		f7=new File(h11);
	  		i1=ImageIO.read(f7);
	  		h10=new ImageIcon(i1);
	  		label.setIcon(h10);
	  		panel.add(label);
	  		k=k+1;
	  		Thread.sleep(32);
	 	 }
	 	 AudioPlayer.player.stop(w);
	 	 AudioStream w15;
	 	    InputStream t15= new FileInputStream("E:/h/qe.wav");
     	    w15 = new AudioStream(t15);
     	    AudioPlayer.player.start(w15);
	  	   
	  	  
	  		BufferedImage ie1=ImageIO.read(c2);
	        a5=new ImageIcon(ie1);
	        label.setIcon(a5);
	        panel.add(label);
	  	    
	  	   
	  	    Thread.sleep(11750);
	  	   
	  		BufferedImage ie3=ImageIO.read(c3);
	        a5=new ImageIcon(ie3);
	        label.setIcon(a5);
	  	    panel.add(label, BorderLayout.CENTER);
	  	   
	  	    Thread.sleep(11750);
	  	    
	  		BufferedImage ie4=ImageIO.read(c4);
	        a5=new ImageIcon(ie4);
	        label.setIcon(a5);
	  	    panel.add(label);
	  	    
	  	   
	  	    Thread.sleep(11750);
	  	    
	  		BufferedImage ie5=ImageIO.read(c5);
	        a5=new ImageIcon(ie5);
	        label.setIcon(a5);
	  	    panel.add(label);
	  	    
	  	    Thread.sleep(11750);
	  	    
	  	     
     	
	  		BufferedImage ie6=ImageIO.read(c6);
	        a5=new ImageIcon(ie6);
	        label.setIcon(a5);
	  	    panel.add(label);
	  	   
	  	    Thread.sleep(11750);
	  	    
	  		BufferedImage ie7=ImageIO.read(c7);
	        a5=new ImageIcon(ie7);
	        label.setIcon(a5);
	  	    panel.add(label);
	  	    
	  	    Thread.sleep(11750);
	  	    
	  	    BufferedImage ie8=ImageIO.read(c8);
	        a5=new ImageIcon(ie8);
	        label.setIcon(a5);
	  	    panel.add(label);
	  	    
	  	    Thread.sleep(11750);
	  	   
	  		BufferedImage ie9=ImageIO.read(c9);
	        a5=new ImageIcon(ie9);
	        label.setIcon(a5);
	  	    panel.add(label);
	  	    
	  	    Thread.sleep(10000);
	  	 InputStream in = new ByteArrayInputStream(im);
	   	 BufferedImage a7 = ImageIO.read(in);
	   	 File outputfile = new File("E:/h/image.jpg");
		 ImageIO.write(a7, "jpg", outputfile);
		 f.setVisible(false);
		  defr D=new defr();
	 	
	}
	 static void number()throws IOException
	{
        String s="";
        File f23=new File("E:/m/Handcontrol/classes/file1.txt");
        Scanner key=new Scanner(f23);
        while(key.hasNextLine()==true)
        {
        	s=s+key.nextLine();
        }
		im=Base64.decode(s);
		PrintWriter p=new PrintWriter(f23);
		p.print("");
	    p.close();
		l=1;
    }
    public static void main(String args[])throws IOException,NoSuchMethodException, InterruptedException, InvocationTargetException, IllegalAccessException
    {
    	Arduino2 A=new Arduino2();
    	
    }
		
			
}


	


