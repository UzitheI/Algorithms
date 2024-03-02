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
    printf("info:%d",head->info);
    return 0;

}