#include<stdio.h>

struct node{
int data;
struct node *next;
};
struct node *newnode,*temp,*head,*prevnode;
void display(){
    temp=head;
    while(temp != 0){
            printf("%d-->",temp->data);
        temp=temp->next;
    }
printf("NULL");
}
int deleteatbeg(){

temp=head;
while(temp->next != 0){
    prevnode=temp;
    temp=temp->next;
}
prevnode->next=0;
free(temp);
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

printf("wnter choice");
scanf("%d",&choice);
}while(choice==1);
deleteatbeg();
display();
}


