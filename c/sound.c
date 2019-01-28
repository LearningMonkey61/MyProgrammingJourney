#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int count = 50 ;
    while(count--)
    {
        sound(10*random(100));
        delay(75);
        nosound();
        textattr(random(16)+'a' + BLINK);
        printf("T");
    }
}
