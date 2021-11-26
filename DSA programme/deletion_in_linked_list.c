#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void show_details(struct node* head){
    while(head!=NULL){
        printf("Elements: %d\n",head->data);
        head=head->next;
    }
}

struct node* delete_at_beg(struct node* head){
    struct node* ptr;
    ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

void delete_at_index(struct node* head,int index){
    struct node * ptr;
    while(index>1){
        index--;
        head=head->next;
    }
    ptr=head->next;
    head->next=ptr->next;
    free(ptr);
}

void delete_at_last(struct node* head){
    struct node* p,*q;
    p=head;
    q=(head->next)->next;
    while (q!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    q=p->next;
    p->next=NULL;
    free(q);
    
    
}

void delete_at_adress(struct node* head,struct node * adress){
    struct node* ptr;
    ptr=head;
    while(ptr->next!=adress){
        ptr=ptr->next;
    }
    head=ptr->next;
    ptr->next=head->next;
    free(head);
}

void delete_at_vlaue(struct node* head,int value){
    struct node *p;
    p=head->next;
   while (p->data !=value && p->next!=NULL)  
   {
       p=p->next;
       head=head->next;
   }
   if(p->data ==value){
       head->next=p->next;
       free(p);
   }
   
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
fourth->next=NULL;

printf("Linked list before deletion \n");
show_details(head);

printf("Linked list after deletion \n");
// head=delete_at_beg(head);
// delete_at_index(head,2);
// delete_at_last(head);
// delete_at_adress(head,fourth);
delete_at_vlaue(head,3);

show_details(head);
printf("WOW WE SUCCESSFULLY WRITE MY PROGRAMME");


return 0;
}