
#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *next;
};

int main() 
{
    struct node *v1;
    v1 = (struct node *)malloc(sizeof(struct node));
    v1->data = 10;
    v1->next = (struct node *)malloc(sizeof(struct node));
    v1->next->data = 20;
    v1->next->next = (struct node *)malloc(sizeof(struct node));
    v1->next->next->data = 30;
    v1->next->next->next= 0;
     

    while (v1 != 0) 
    {
        printf("%d ", v1->data);
        v1 = v1->next;
    }

    getchar();
}