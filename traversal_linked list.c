 #include<stdio.h>
 #include<stdlib.h>
 //declaration of structure node
 struct node{
     int data;
     struct node *next;
 };
 void traverselist(struct node *ptr){
     while(ptr!=NULL){
         printf("element : %d\n",ptr->data);
         ptr=ptr->next;
     }
 }
 int main(){
     struct node *head;//declaration of structure data variables
     struct node *second;
     struct node *third;
     //dynamic memory allocation in heap of linked list
     head=(struct node *)malloc(sizeof(struct node));
     second=(struct node *)malloc(sizeof(struct node));
     third=(struct node *)malloc(sizeof(struct node));
     head->data=15;
     head->next=second;//linking the nodes
     second->data=171;
     second->next=third;
     third->data=100;
     third->next=NULL;
     traverselist(head);
 }