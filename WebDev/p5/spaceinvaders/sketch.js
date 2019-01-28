var frameno = 0;
function setup() {
      createCanvas(600,600);
      background(0);  
  }
  
  function draw() {
    if(mouseIsPressed)
    {
        fill(random(255));
    }
    else
    {
        fill(0);
    }
    ellipse(mouseX,mouseY,80,80);
  }