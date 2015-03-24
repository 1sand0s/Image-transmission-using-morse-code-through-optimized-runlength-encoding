import processing.core.*;
import javax.swing.*;
import java.awt.*;
import java.util.*;
class deco 
{
    static JFrame f;
    deco()
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
    	deco d=new deco();
    }
}
class shoot extends PApplet
{
	PImage p;
	ArrayList<PImage> images = new ArrayList(); 
int i=0;
 
public void setup() {
  size(640,480);
  background(0);
  p=loadImage("E:/m/Handcontrol/classes/image123.jpg");
  //smooth();
  //noStroke();
  frameRate (1);
 
 
  for (int y = 0; y <= height; y += 100) {
    for (int x = 0; x <= width; x += 100) {
      fill(255, 140);
      ellipse(x, y,10, 10);
      PImage a1=get();
      images.add(a1);
    }
  }
  println ("done");
  frameRate (23);
} // func 
 
public void draw() {
  PImage a1 = images.get (i);
  image(a1, 0, 0);
  if (i<images.size()-1)
    i++;
} // func 
//
}