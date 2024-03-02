#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *next;
};

typedef struct node NodeType;

NodeType *head= NULL;

void insertFirst(int);
void insertPosition(int);
void insertEnd(int);
void deleteFirst();
void deleteLast();
void deletenth();
void info_sum();
void count_nodes();

int main(){
    int choice;
    int item;
    do{
        printf("Enter your choice");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            /* code */
            printf("Item to be inserted:");
            scanf("%d",&item);
            insertFirst(item);
            break;
        
        case 2:
            printf("Item to be inserted:");
            scanf("%d",&item);
            insertPosition(item);
            break;
        
        case 3:
            printf("Item to be inserted:");
            scanf("%d",&item);
            insertEnd(item);
            break;
        
        case 4:
            deleteFirst();
            break;

        case 5:
            deleteLast();
            break;
        
        case 6:
            deletenth();
            break;

        case 7:
            count_nodes();
            break;

        case 8:
            info_sum();
            break;

        default: 
            printf("Invalid choice");
            break;
    }
}while (choice<10);
return 0;
}

void insertFirst(int item){
    NodeType *nnode;
    nnode= (NodeType*)malloc(sizeof(NodeType));
    nnode->info=item;
    nnode->next= head;
    head=nnode;
}

void insertPosition(int item){
    NodeType *nnode;
    NodeType *temp;
    temp=head;
    int p, i;
    nnode=(NodeType* )malloc(sizeof(NodeType));
    nnode->info=item;
    if(head==NULL){
        nnode->next=NULL;
        head=nnode;
    }
    else{
        printf("Enter the position where you want to insert the new node:\n");
        scanf("%d",&p);
        for(i=1;i<p-1;i++){
            temp=temp->next;
        }
        nnode->next=temp->next;
        temp->next=nnode;
    }
}


