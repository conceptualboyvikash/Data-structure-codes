#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* ptr;
    struct node* prev;
};

void printdetails(struct node *pt){
    do{
        printf("Elements: %d\n",pt->data);
        
        pt=pt->ptr;
    }while(pt!=NULL);
}

int main(){
    struct node * head;
     head=(struct node *)malloc(1*(sizeof(struct node*)));
    struct node * second=(struct node*)malloc(1*(sizeof(struct node*)));
    struct node * third=(struct node*)malloc(1*(sizeof(struct node*)));
    struct node * fourth=(struct node*)malloc(1*(sizeof(struct node*)));
    head->data=5;
    head->ptr=second;
    head->prev=NULL;

    second->data=51;
    second->ptr=third;
    second->prev=head;

    third->data=56;
    third->ptr=fourth;
    third->prev=second;
    
    fourth->data=59;
    fourth->ptr=NULL;
    fourth->prev=third;

    printdetails(head);


    
     
    printf("congratulation! you succesfully printed your first  doubly linked list \n");
    printf("*****HAPPY NA BABU****    ");
    return 0;
}