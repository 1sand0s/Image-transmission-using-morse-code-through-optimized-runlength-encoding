/**
 * @(#)cam.java
 *
 *
 * @author Aditya.T
 * @version 1.00 2014/4/11
 */

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
   static int y;
   static int p;
   static JFrame f;
   cam() 
   	{
   	   y=5;
   	   p=1;
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
    static int meth()
    {
    	return y;
    }
    static JFrame meth1()
    {
    	return f;
    }
    public static void main(String args[])
    {
    	cam C=new cam();
    }
    static int meth2()
    {
    	return p;
    }
}
class shoot extends PApplet
{
	Capture v1;
	int x=cam.meth();
	String h1[]=Capture.list();
	public void setup()
	{
		size(640,480);
		v1=new Capture(this,h1[x]);
		v1.start();
	}
	public void draw()
	{
		if(v1.available()==true)
		{
			v1.read();
		}
		image(v1,0,0);
		
	}
	public void mousePressed()
	{
		saveFrame("E:/m/Handcontrol/classes/image123.jpg");
			v1.stop();
			cam.meth1().dispose();
			cam.p=0;
	}
}