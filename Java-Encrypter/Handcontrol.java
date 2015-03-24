/**
 * @(#)HandControl.java
 *
 * HandControl application
 *
 * @author Aditya.T
 * @version 1.00 2014/4/6
 */
import processing.video.*;
import processing.core.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.JOptionPane;
import javax.swing.*;
import java.io.*;
import java.awt.image.BufferedImage;
import javax.imageio.ImageIO;
import java.applet.*;
import java.util.*;
import java.nio.file.Files;
import java.io.File;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.text.ParseException;
import javax.swing.*;
class dash
{
	dash()throws IOException,NoSuchMethodException, InterruptedException, InvocationTargetException, IllegalAccessException
	{
	
			handcontrol c=new handcontrol();
	}
	public static void main(String args[])throws IOException,NoSuchMethodException, InterruptedException, InvocationTargetException, IllegalAccessException
	{
	    dash D=new dash();
	}
}

class handcontrol {
 static JFrame f;
   handcontrol()throws IOException,NoSuchMethodException, InterruptedException, InvocationTargetException, IllegalAccessException
   	{
   	    f=new JFrame("hello");
   	    JPanel panel= new JPanel();
   	    f.setBackground(Color.BLACK);
   	     
        f.setSize(1370,1400);
        f.addWindowListener(new WindowAdapter() 
    		{ 
     			public void windowClosing(WindowEvent e)
     			 { 
  					System.exit(0); 
 				 } 
    		});
        processing.core.PApplet sketch = new maincontrol();
      
        panel.add(sketch);
        f.add(panel);
        sketch.init();
        f.setVisible(true);
    }
    static JFrame close1()
    {
    	return f;
    }
}
class maincontrol extends PApplet
{

int x1=25;
int c=0;
Capture v;
 int o=1;
PImage p;
float r2,g2,b2;
int Mx=0;
int My=0;
int ave=0;
int Mx2=0;
int My2=0;
int ave2=0;
int Mx3=0;
int My3=0;
int ave3=0;
String h[]=Capture.list();
boolean q=true;
boolean t=true;
boolean h1=true;
public void setup() 
{
  size(640,480);
  v = new Capture(this,640,480,30);
  v.start();
  p=createImage(width,height,RGB);
}
public void draw()
{
	if(v.available()==true)
	{
        p.copy(v,0,0,v.width,v.height,0,0,v.width,v.height); 
        p.updatePixels();
		v.read();
		rgb();
	}
	else
	{
		System.out.print("");
	}
	
	
}
public void rgb()
{
  loadPixels();
  v.loadPixels();
  p.loadPixels();
  
  Mx = 0;
  My = 0;
  ave = 0;
    Mx2 = 0;
  My2 = 0;
  ave2 = 0;
   Mx3 = 0;
  My3 = 0;
  ave3 = 0;
 
  for (int x = 0; x < v.width; x ++ ) 
  	{
    for (int y = 0; y < v.height; y ++ ) 
    	{
      
      int loc = x + y*v.width;            
           
       int p1 = p.pixels[loc]; 
       r2 = red(p1);
       g2 = green(p1);
       b2 = blue(p1);
     
      
      
      if (r2>200 && g2<10 && b2<10) 
      	{ 
        pixels[loc] = v.pixels[loc];
        Mx += x;
        My += y;
        ave++;
      } 
      else if(b2>200 && g2<10 && r2<10)
      {
        pixels[loc]=v.pixels[loc];
        Mx2 +=x;
        My2 +=y;
        ave2++;
      }
      else if(g2>200 && b2<10 && r2<10)
      {
        pixels[loc]=v.pixels[loc];
        Mx3 +=x;
        My3 +=y;
        ave3++;
      }
      else 
      	{
        
        pixels[loc] = v.pixels[loc];
      }
    }
  }
   if(ave!=0)
   {
     Mx=Mx/ave;
     My=My/ave;
   }
   if(ave2!=0)
   {
     Mx2=Mx2/ave2;
     My2=My2/ave2;
   }
   if(ave3!=0)
   {
     Mx3=Mx3/ave3;
     My3=My3/ave3;
   }
   if(Mx==0 && My==0 && r2<150)
   {
     t=false;
   }
   if(Mx2==0 && My2==0 && b2<150)
   {
     q=false;
   }
   if(Mx3==0 && My3==0 && g2<150)
   {
     h1=false;
   }
    updatePixels();
    stroke(255);
    noFill();
   if(t==false)
    {
      noStroke();
      noFill();
    }
    ellipse(Mx,My, 25, 25);
    if(q==false)
    {
      noStroke();
      noFill();
    }
    ellipse(Mx2,My2, 25, 25);
    if(h1==false)
    {
      noStroke();
      noFill();
    }
    ellipse(Mx3,My3, 25, 25);
    stroke(255);
    noFill();
    rect(v.width/200+580,v.height/100+10,50,50);
    stroke(255,0,0);
    noFill();
    rect(v.width/200+580,v.height/100+80,50,50);
    if(Mx>=v.width/200+580 && Mx<=v.width/200+630 && My>=v.height/100+10 && My<=v.height/100+60)
    {
    	/*v.stop();
    	handcontrol.close1().setVisible(false);
    	//cam C=new cam();
    	while(true)
    	{
    		if(C.meth2()==0)
    		{
    			break;
    		}

    		else
    		{
    			continue;
    		}
    	}
    	
    	handcontrol.close1().dispose();
    	try
    	{
    	
    	handcontrol C1=new handcontrol();
    	}
    	catch(IOException e1)
    	{
    	}
    	catch(NoSuchMethodException e1)
         {
         }
         catch(InterruptedException e1)
         {
         }
         catch(InvocationTargetException e1)
         {
         }
         catch(IllegalAccessException e1)
         {
         }
         catch(NullPointerException e1)
         {
         }*/
    }
    else if(Mx>=v.width/200+580 && Mx<=v.width/200+630 && My>=v.height/100+80 && My<=v.height/100+130)
    {
    	v.stop();
    	dash1 D=new dash1();
    }
    
    t=true;
    q=true;
    h1=true;
    
}



}

class dash1
{
	dash1()
	{
	 handcontrol.close1().setVisible(false);
	 try
         {
         
         Arduino A=new Arduino();
         }
         catch(IOException e1)
         {
         }
         catch(NoSuchMethodException e1)
         {
         }
         catch(InterruptedException e1)
         {
         }
         catch(InvocationTargetException e1)
         {
         }
         catch(IllegalAccessException e1)
         {
         }
	}
	
}