#include<stdio.h>
#include<stdlib.h>
struct node {
    int coeff ;
    int expo;
    struct node *link;
}*FIRST;
void InsertEnd(struct node **p,int num){
    struct node *temp,*q;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->coeff = num;
    temp->expo = num;
    temp->link = NULL;
    if(*p == NULL)
    {
        *p = temp;
    }
    else{
        q = *p;
        while(q->link!=NULL)
        {
            q=q->link;
        }
        q->link=temp; 
    }
}
void ShowList(struct node *p){   
    printf("START ");
    while(p!=NULL)
    {
        printf("%dx^%d + ",p->coeff,p->expo);
        p = p -> link;
    }   
    printf("END\n");
}
int getnumber(void){
    int num;
    printf("Enter Number to insert in the Linked List : ");
    scanf("%d",&num);
    return num;
}

int main()
{
    FIRST = NULL;
    printf("Insertion in a Linked List \n");
    InsertEnd(&FIRST,5);
    InsertEnd(&FIRST,4);
    InsertEnd(&FIRST,3);
    InsertEnd(&FIRST,2);
    InsertEnd(&FIRST,1);
    InsertEnd(&FIRST,6);
    printf("Final List :\n");
    ShowList(FIRST);
    return 0;
}
