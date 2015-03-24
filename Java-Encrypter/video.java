/**
 * @(#)cam.java
 *
 *
 * @author Aditya.T
 * @version 1.00 2014/4/11
 */
	import gab.opencv.*;
import processing.video.*;
import java.awt.*;
import processing.core.*;
import processing.video.*;
import javax.swing.*;
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
class cam 
{
   static JFrame f;
   cam() 
   	{
   	   
   	   f=new JFrame("Shoot");
   	   JPanel panel= new JPanel();
   	   f.setBackground(Color.BLACK);
   	   f.setSize(1370,1400);
       f.setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
       processing.core.PApplet s = new shoot();
       panel.add(s);
       f.add(panel);
       s.init();
       f.setVisible(true);
    }
   
    public static void main(String args[])
    {
    	cam C=new cam();
    }
    
}
class shoot extends PApplet
{



float scaler = 1;
Capture v;
public void setup() {
  size(640,480);
  v=new Capture(this,width,height,35);
  v.start();
}

public void draw() 
{
  if(v.available()==true)
  {
    v.read();
  }
  
  translate(width/2,height/2);
  scale(scaler);
  translate(-width/2,-height/2);
  image(v,0,0);
}

public void keyPressed() 
{
  if (key == 'z') {scaler -= 0.1;}
  if (key == 'x') {scaler += 0.1;}
  if (key == 'c') {scaler = 1;}
  if (key== 'd'){scaler +=2.5;}
  
}


}