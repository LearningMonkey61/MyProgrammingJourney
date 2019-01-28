 float pi = 3.14159;
 
 class rocket {

  float len = 10;
  float x = random(width);
  float y = random(height); 
  float speed = random(1,10);  
  float angle ;
  float weight = random(0,7);
  float r = random(255);
  float g = random(255); 
  float b = random(255);
  
  void show() {
    
    stroke(r, g, b); 
    strokeWeight(weight);
    if ((mouseX < x) && (mouseY < y))
    {
              angle = atan((y - mouseY)/(x - mouseX));
              line(x,y,x - len*cos(angle),y - len*sin(angle)) ;
               x = x - speed*cos(angle);
               y = y - speed*sin(angle);
    }
    else if ((mouseX > x) && (mouseY < y))
    {
              angle = atan((y - mouseY)/(mouseX - x));
              line(x,y,x + len*cos(angle),y - len*sin(angle)) ;
              
               x = x + speed*cos(angle);
               y = y - speed*sin(angle);
    }    else if ((mouseX < x) && (mouseY > y))
    {
              angle = atan((mouseY - y)/(x - mouseX));
              line(x,y,x - len*cos(angle),y + len*sin(angle)) ;
               x = x - speed*cos(angle);
               y = y + speed*sin(angle);
    }
    else if ( mouseX == x )
    {
              angle = pi / 2 ;
    }
    else
    {
              angle = atan((mouseY - y)/(mouseX - x));
              line(x,y,x + len*cos(angle),y + len*sin(angle)) ;
               x = x + speed*cos(angle);
                y = y + speed*sin(angle);
    }
 
     
     }
     
     void destroy(){
       ellipse(x,y,100,100);
     }
}
