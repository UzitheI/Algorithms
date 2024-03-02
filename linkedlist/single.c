//self referential structure can be defined as the structure which contains a pointer to the structure of the same type

#include<stdio.h>

struct node{
    int info;
    struct node* link;
};

typedef struct node nodeType;

int main(){
    struct node* head=NULL;
    head=(nodeType*) malloc(sizeof(nodeType));
    head->info=34;


    struct node* current= malloc(sizeof(nodeType));
    current->info=45;
    head->link=current;
}