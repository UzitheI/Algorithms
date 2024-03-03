#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node* prev;
    struct node* next;
};

typedef struct node nodetype;
nodetype *head=NULL;

nodetype *getnewNode(int x){
    nodetype * newnode=(nodetype*)malloc(sizeof(nodetype));
    newnode->info=x;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
}

void insertAthead(int x){
    nodetype *newnode=getnewNode(x);
    if (head==NULL){
        head=newnode;
        return ;
    }
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}

void insertAtTail(int x){
    nodetype *temp=head;
    nodetype* newnode=getnewNode(x);
    if(head==NULL){
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
    }
    else{
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }
}

void insertatnth(int x){
    nodetype *newnode=getnewNode(x);
    nodetype *temp=head;
    int pos,i;
    if(head==NULL){
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
    }
    else{
        printf("Enter the position:");
        scanf("%d",&pos);
        for(i=0;i<pos-1;i++){
            while(temp!=NULL){
                temp=temp->next;
            }
        }
        if(temp!=NULL){
            newnode->next=temp->next;
            newnode->prev=temp;
            temp->next=newnode;
            if(newnode->next !=NULL){
                newnode->next->prev=newnode;
            }
            else{
                printf("\nThe previous node is null");
            }
        }
    }
}

void deletenthnode(){
    nodetype *temp,*hold;
    temp=head;
    int pos,i;
    for(i=1;i<pos-1;i++){
       while(temp != NULL){
        temp=temp->next;
       } 
    }
    if(temp!=NULL && temp->next != NULL){
        hold=temp->next;
        temp->next=temp->next->next;
        if(temp->next->next != NULL){
            temp->next->next->prev= temp->next;
        }
        free(hold);
    }
    else{
        printf("\nthe node is already full");
    }
}