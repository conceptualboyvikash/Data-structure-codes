#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void showdetails(struct node* head){  
    struct node *ptr=head;
    do{
        printf("the Elament: %d\n",ptr->data);

        ptr=ptr->next;

    }while(ptr!=head);
}
struct node* insertonAtFirst(struct node * head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    while(p->next!=head){
        p=p->next;
    }
    ptr->data=data;
    ptr->next=head;
    p->next=ptr;
    return p;
}

int main(){

struct node* head,*second,*third,*fourth;
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));

head->data=3;
second->data=9;
third->data=5;
fourth->data=13;

head->next=second;
second->next=third;
third->next=fourth;
fourth->next=head;

printf("Linked list before inseerton \n");
showdetails(head);
head=insertonAtFirst(head,99);
printf("Linked list after insertion \n");
showdetails(head);
printf("WOW WE SUCCESSFULLY WRITE MY PROGRAMME");




return 0;
}