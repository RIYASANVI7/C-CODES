 #include<stdio.h>
 #include<stdlib.h>
 struct node {
     int data;
     struct node *next;
 };
 void list_traversal(struct node *head){
     struct node *ptr=head;
     do{
         printf("Element:%d\n",ptr->data);
         ptr=ptr->next;
     }while(ptr!=head);
 }
 //insertion in circular linked list_traversal
 struct node *insertion_atfirst(struct node *head,int data){
     struct node *ptr=(struct node *)malloc(sizeof(struct node));
     ptr->data=data;
     struct node *p=head;
     while(p->next!=head){
         p=p->next;
     }
     p->next=ptr;
     ptr->next=head;
     head=ptr;
     return head;
 }
 int main(){
     struct node *head;
     struct node *second;
     struct node *third;
     struct node *fourth;
     head=(struct node*)malloc(sizeof(struct node));
     second=(struct node*)malloc(sizeof(struct node));
     third=(struct node*)malloc(sizeof(struct node));
     fourth=(struct node*)malloc(sizeof(struct node));
     head->data=15;
     head->next=second;
     second->data=171;
     second->next=third;
     third->data=89;
     third->next=fourth;
     fourth->data=69;
     fourth->next=head;
     //list_traversal(head);
     head=insertion_atfirst(head,181);
     list_traversal(head);
 }