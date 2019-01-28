#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	int i,j;
    int r = (2*n-1);
    for(i = 0 ; i < r ; i++ )
    {
        for( j = 0 ; j < r ;j++)
        {
            if( i>=j) 
                {
                    printf("%d ",n-j);
                }
            else
                {
                    printf("%d ",(n-(r-1-j)));
                }
        }
        printf("\n");
    }
    return 0;
}

