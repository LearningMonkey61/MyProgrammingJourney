
Drop[] drops = new Drop[500] ;
float windspeed = random(0,10);
void setup(){
  size(1020,720 );
  for (int i = 0 ; i < 500 ; i ++ ){
      drops[i] = new Drop() ;
  }
  frameRate(1000);
  
  
}
void draw(){ 
  background(230,230,250);
  for (int i = 0 ; i < 500 ; i ++ ){
    drops[i].fall();
    drops[i].show(windspeed);
  }
}
