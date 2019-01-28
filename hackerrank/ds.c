#include<stdio.h>

int main(void)
{ 

    int array[100], position, c, n, value;
    printf("Enter number of elemnts in array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);

    for(c = 0; c < n; c++)
        scanf("%d", &array[c]);
    
    printf("Enter the location of where you wish to insert element\n");
    scanf("%d", &position);

    printf("Enter the value of the element\n");
    scanf("%d", &value);

    for(c = n - 1; c >= position - 1; c--)
    array[c+1] = array[c];

    array[position-1] = value;

    printf("Resultant array is\n");
    
    for(c = 0; c <= n; c++)
    printf("%d\n", array[c]);

    
    
    return 0;
}
