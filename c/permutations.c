#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count = 1; 
void createperm(char *stringnum,int offset,int length);
void swapchar(char *,char *);
int main(void)
{
    int number ;
    int offset = 0 ; 
    char stringnum[5];
    scanf("%d",&number);

    sprintf(stringnum,"%d",number);
    createperm(stringnum,offset,strlen(stringnum)-1);

    return 0;
}

void createperm(char *stringnum,int offset,int length)
{
    int i ;
    if (offset == length)
    {
       printf("\n%s\n",stringnum);
    }
    else{
        
        for( i = 1; i <= length; i++)
        {
            swapchar((stringnum+offset),(stringnum+i));
            createperm(stringnum,offset+1,length);
            swapchar((stringnum+offset),(stringnum+i));
        }
    }
}
void swapchar(char *a,char *b){
    char temp; 
    temp = *a ;
    *a = *b ;
    *b = temp ;
}


