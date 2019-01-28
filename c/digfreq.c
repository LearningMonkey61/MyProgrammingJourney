#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char string[1001];
    int a[10] ={0};
    scanf("%s",string);
    for(int i = 0 ; string[i]!='\0' ; i++)
    {
        if(string[i] >= '0' && string[i] <= '9')
        {
            ++a[string[i] - '0' ];
        }
    }
    for(int i = 0 ; i < 10 ; i++ )
    printf("%d ",a[i]);
    return 0;
}
