#include<stdio.h>

struct node{
    int info;
    struct node* next;
};

typedef struct node nodetype;
nodetype* head=NULL;

int insert_first(int item){
    nodetype *nnode;
    nnode=(nodetype*)malloc(sizeof(nodetype));
    nnode->info=item;
    nnode->next=head;
    head=nnode;
}
int insert_atlast(int item){
    nodetype *nnode,*temp;
    temp=head;
    nnode=(nodetype*)malloc(sizeof(nodetype));
    nnode->info=item;
    if(head==NULL){
        nnode->next=NULL;
        head=nnode;
    }
    else{
        while(temp->next !=NULL){
            temp=temp->next;
        }
        nnode->next=NULL;
        temp->next=nnode;
    }
}
int insertnth(int item){
    nodetype* nnode,*temp;
    int p,i;
    temp=head;
    nnode=(nodetype*)malloc(sizeof(nodetype));
    nnode->info-item;
    if(head==NULL){
        nnode->next=NULL;
        nnode=head;
    }
    else{
        printf("Enter the position");
        scanf("%d",&p);
        for(i=1;i<p-1;i++){
            temp=temp->next;
        }
    nnode->next=temp->next;
    temp->next=nnode;
    }
}

int delete_first(){
    nodetype *nnode,*hold;
    if(head==NULL){
        printf("no element");
    }
    nnode=head->next;
    hold=head;
    head=nnode;
    free(hold);

}
int delete_last(){
    nodetype *temp,*hold;
    temp=head;
    if(head==NULL){
        printf("no element");
    }
    else if (head->next==NULL)
    {
        hold=head;
        head=NULL;
        free(hold);
    }
    else{
        temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        hold=temp->next;
        temp->next=NULL;
        free(hold);

    }
    
    
}
void deletenthnode(){
    nodetype *temp,*hold;
    int p,i;
    temp=head;
    if(head==NULL){
        printf("no elemnt");
    }
    else{
        for(i=1;i<p-1;i++){
            temp=temp->next;
        }
        hold=temp->next;
        temp->next=hold->next;
        free(hold);
    }
}

void info_sum(){
    nodetype *temp;
    temp=head;
    while(temp!= NULL){
        printf("%d\t",temp->info);
        temp=temp->next;
    }

}

void count(){
    nodetype *temp;
    temp=head;
    int count;
    while(temp != NULL){
        count++;
        temp=temp->next;
    }
    printf("total nodes=%d",count);
}

int main()
{
	int choice;
	int item; 
	do{
		printf("\n *********MENU*********:\n");
		printf("1. Insert first \n2. Insert at given position \n3. Insert at last \n4. Delete first node\n5. delete last node\n6. delete nth node\n7. count nodes\n8. Display items\n9. exit\n"); 
		printf("enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter item to be inserted"); 
				scanf("%d", &item); insert_first(item);
				break;
			case 2:
				printf("Enter item to be inserted"); 
				scanf("%d", &item); 
				insertnth(item);
				break;
			case 3:
				printf("Enter item to be inserted"); 
				scanf("%d", &item); 
				insert_atlast(item);
				break;
			case 4:
				delete_first();
				break; 
			case 5:
				delete_last();
				break; 
			case 6:
				deletenthnode();
				break; 
			case 7:
            count();
				break; 
			case 8:
				info_sum();
				break; 
			case 9:
				exit(1);
			default:
				printf("invalid choice\n"); 
				break;
		}
	}while(choice<10);
	return 0;
}