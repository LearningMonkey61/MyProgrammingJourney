rocket[] r  = new rocket[100] ;
void setup(){
  size(1000,1000);
  for (int i = 0 ; i < 100 ; i ++ ){
      r[i] = new rocket() ;
  }
}

void draw(){
  background(0);
 for (int i = 0 ; i < 100 ; i ++ ){
    r[i].show();
    if((r[i].x == mouseX) && (r[i].y == mouseY))
    {
          r[i].destroy();
    }
  }
}
