#include<stdio.h>
int dropbomb(int n ,int target , int type)
{
    switch(type)
        {
            case 1:
                    target = target + 2 ;
                    break;
            case 2:
                    target = target + 3 ;
                    break;
        }

    if (target == n )
        return 1;
    else if (target > n)
        return 0 ;
    else 
        return (dropbomb(n,target,1) + dropbomb(n,target,2));
}
int main (void)
{
    int testcases;
    long long int b = 1000000007LL;
    int n ;
    int way ; 
    scanf("%d",&testcases);
    while(testcases--)
    {
        way = 0 ;
        scanf("%d",&n);
        way = dropbomb(n,0,1) + dropbomb(n,0,2);
        printf("%lld\n",way%b);
    }
    
    return 0 ; 
}