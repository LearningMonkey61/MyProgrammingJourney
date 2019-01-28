#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *link;
}*FIRST;
int gettotalnodes(struct node *p){
    int num = 0;
    while(p!=NULL)
    {
        p = p -> link;
        num = num + 1 ; 
    }
    return num;
}
void InsertEnd(struct node **p,int num){
    struct node *temp,*q;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
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
void InsertBegin(struct node **p,int num){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->link = *p;
    *p = temp;    
}
void insertafterlocation(struct node **p,int num,int loc){
    int n ;
    struct node *temp,*q;
  
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num ;
    temp->link = *p;
  
    q = *p;
    if(loc > gettotalnodes(q)){
        printf("List not that big. Inserting at the end of the Linked list\n");
        InsertEnd(p,num);
    }
    else{
        q = *p;
        n = 0; 
        while((q->link !=NULL) && (n != loc))
        {
            q = q->link;
            n = n + 1;
        }  
        temp->link = q->link;
        q->link = temp;
    }
}
void ShowList(struct node *p){   
    printf("START ");
    while(p!=NULL)
    {
        printf("%d ",p->data);
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
int getlocation(void){
    int num;
    printf("Enter Location Number to insert at in the Linked List : ");
    scanf("%d",&num);
    return num;
}
int main()
{
    FIRST = NULL;
    printf("Insertion in a Linked List \n");
    printf("1. Insert at the End\n2. Insert at the Beginning\n3. Insert after given Location\n:");
    int choice ;
    scanf("%d",&choice);
    while(choice)
    {
        if(choice == 1)
        {
            InsertEnd(&FIRST,getnumber());
            ShowList(FIRST);
        }
        else if (choice == 2)
        {
            InsertBegin(&FIRST,getnumber());
            ShowList(FIRST);
        }
        else if (choice == 3)
        {
            insertafterlocation(&FIRST,getnumber(),getlocation());
            ShowList(FIRST);
        }
        printf("Enter the Choice (0 to exit): ");
        scanf("%d",&choice);
    }

    printf("Final List :\n");
    ShowList(FIRST);
    return 0;
}