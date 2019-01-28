#include<stdio.h>
#include<stdlib.h>
struct term{
    int coeff;
    int xexpo;
    struct term *link;
};
void insert_term_in_polynomial(struct term **p,int c,int x){
    struct term *temp,*q;
    temp = (struct term *)malloc(sizeof(struct term));
    temp->coeff = c;
    temp->xexpo = x;
    temp->link = NULL;
    if(*p == NULL){
        *p = temp ;
    }
    else{
        q = *p;
        while(q->link!=NULL){
            q = q->link;
        } 
        q->link = temp;
    }
}
int getcoeff(void){
    int num;
    printf("Enter the Coeffecient of the term :");
    scanf("%d",&num);
    return num;
}
int getexponent(void){
    int num;
    printf("Enter the Exponent of the term :");
    scanf("%d",&num);
    return num;
}
void show_polynomial(struct term *p){
    while(p!=NULL)
    {
        printf("%dx^%d",p->coeff,p->xexpo);
        if(p->link!=NULL){
            printf("+");
        }
        p = p -> link;
    }
}
struct term * add_polynomial(struct term **p1,struct term **p2){
    struct term *q1,*q2,*res;
    q1 = *p1 ;
    q2 = *p2 ;
    res = NULL;
    while(q1->link!=NULL && q2->link!=NULL){
    if(q1->xexpo > q2->xexpo){
        insert_term_in_polynomial(&res,q1->coeff,q1->xexpo);
        q1 = q1 ->link; 
    }
    else if(q1->xexpo < q2->xexpo){
        insert_term_in_polynomial(&res,q2->coeff,q2->xexpo);
        q2 = q2 ->link;
    }
    else{
         insert_term_in_polynomial(&res,q1->coeff+q2->coeff,q1->xexpo);
            q2 = q2 ->link;
            q1 = q1 ->link;
   } 
}

    while(q1!=NULL){
         insert_term_in_polynomial(&res,q1->coeff,q1->xexpo);
        q1 = q1 ->link; 
    }
     while(q2!=NULL){
         insert_term_in_polynomial(&res,q2->coeff,q2->xexpo);
        q2 = q2 ->link; 
    }
    return res;
}
int main(void)
{
    struct term *p1,*p2,*res;
    p1 = NULL;
    p2 = NULL;
    int choice;
    printf("<1> Insert Term in P1 \n<2> Insert Term in P2 \n");
    scanf("%d",&choice);
    while(choice){
    switch (choice)
    {
        case 1:
            insert_term_in_polynomial(&p1,getcoeff(),getexponent());
            break;
        case 2:
            insert_term_in_polynomial(&p2,getcoeff(),getexponent()); 
            break;
    }
    scanf("%d",&choice);
    }
    res = add_polynomial(&p1,&p2);
    show_polynomial(p1);
        printf("   +   ");
    show_polynomial(p2);
        printf("   =   ");
    show_polynomial(res);
        printf("   \n");
    return 0;
}
