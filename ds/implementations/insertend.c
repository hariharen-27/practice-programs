#include<stdio.h>

struct node{
int data;
struct node *next;
};
struct node *newnode,*temp,*head;
void display(){
    temp=head;
    while(temp != 0){
            printf("%d-->",temp->data);
        temp=temp->next;
    }
printf("NULL");
}
int insertatend(){
newnode=(struct node *) malloc (sizeof(struct node));
        newnode->next=0;
        temp=head;
printf("enter the number to add at end");
scanf("%d",&newnode->data);
while(temp->next!=0){
    temp=temp->next;

}
temp->next=newnode;

}


int main(){

int i,choice;
head=0;
do{
        newnode=(struct node *) malloc (sizeof(struct node));
        newnode->next=0;
printf("enter the number");
scanf("%d",&newnode->data);
if(head==0){
    head=newnode;
    temp=newnode;
}
else{
    temp->next=newnode;
    temp=newnode;
}

printf("enter choice");
scanf("%d",&choice);
}while(choice==1);
insertatend();
display();
}

