
class Drop{
float x = random(width);
float y = random(-200,100) ; 
float yspeed = random(1,10);
float len = map(yspeed,0,10,20,30);
float stroke = map(yspeed,10,1,1,2);
float z = random(0,20);
float splash ; 

void fall(){
      y = y + yspeed;
      x = x + windspeed ; 
      if (y > height){
        splash();
        y = random(-200,100);
      }
      if ( x > width ) {
        x = 0;
      }
   }
  void show(float windspeed){
    stroke(138,43,226);  
    strokeWeight(stroke);
    line(x,y,x+windspeed,y+len);
  }
  void splash(){
       stroke(138,43,226);  
       strokeWeight(stroke);
        line(x,y,x+len*random(0,1),y-len*random(0,1));
        line(x,y,x-len*random(0,1),y-len*random(0,1));
        line(x,y,x+len*random(0,1)/2,y-len*random(0,1)/4);
        line(x,y,x-len*random(0,1)/2,y-len*random(0,1)/4);
       
    
  }
 // void splash2(){
        // drop is the line follower of the main road . 
        // comnbining the drop code with the smart_rocket code to inject mouse speed 
        
 // }
  
}
