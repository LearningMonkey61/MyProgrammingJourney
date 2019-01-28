#include<stdio.h>

void minor(int size,int matrix[][size],int m,int n);

int main(void)
{
    int n;
    int i , j ;
    scanf("%d",&n);

    int matrix[n][n];

    for(i = 0 ; i < n ; i++)
    {
        for( j = 0 ; j < n ; j++ )
        {
                scanf("%d",&matrix[i][j]);
        }
    }

    printf("- - - \n");
    for(i = 0 ; i < n ; i++)
    {
        for( j = 0 ; j < n ; j++ )
        {
                printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }


    printf("- - - \n");
    for(i = 0 ; i < n ; i++)
    {
        for( j = 0 ; j < n ; j++ )
        {
                minor(n,matrix,i,j);
        }
        printf("\n");
    }
    return 0 ;
}

void minor(int size,int matrix[][size],int m,int n)
{
    int i,j;
    for(i = 0 ; i < size ; i++)
    {
        for( j = 0 ; j < size ; j++ )
        {
            if(i==m || j==n)
                continue;
            else
                printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

