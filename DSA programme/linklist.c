#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* ptr;
};

void printdetails(struct node *pt){
    while(pt!=NULL){
        printf("Elements: %d\n",pt->data);
        // ptr++;
        pt=pt->ptr;
    }
}
void setter(struct node *first,struct node * second,int dat){
    first->ptr=second;
    first->data=dat;
}
int main(){
    struct node * head;
     head=(struct node *)malloc(1*(sizeof(struct node*)));
    struct node * second=(struct node*)malloc(1*(sizeof(struct node*)));
    struct node * third=(struct node*)malloc(1*(sizeof(struct node*)));
    struct node * fourth=(struct node*)malloc(1*(sizeof(struct node*)));
    // head->data=5;
    // head->ptr=second;
    // second->data=51;
    // second->ptr=third;
    // third->data=55;
    // third->ptr=fourth;
    // fourth->data=59;
    // fourth->ptr=NULL;
    setter(head,second,5);
    setter(second,third,15);
    setter(third,fourth,25);
    setter(fourth,NULL,35);

    printdetails(head);


    
     
    printf("congratulation! you succesfully printed your first linked list \n");
    printf("*****HAPPY NA BABU****    ");
    return 0;
}