#include<stdio.h>
int del();
int ins();

int ch,front=-1,rear=-1,i,ele,arr[100],max=3;

int main(){
    while(1){
    printf("enter choice");
    scanf("%d",&ch);
    switch(ch){
case 1:
    ins();
    break;
case 2:
    del();
    break;
case 3:
    exit(0);

    }}

}

int ins(){
if(rear==max-1 && front==0){
    printf("overflow");

}
else{
    if (front==-1 && rear==-1){
        front=0;
        }
    else if(rear==max-1 && front!=0){
        rear=0;
    }
    else{
    printf("enter the ele");
    scanf("%d",&ele);
    rear++;
    arr[rear]=ele;
    }

}
}

int del(){
if(front==-1){
    printf("underflow");

}
else{
        printf("del %d",arr[front]);
        if(front == rear){
            front=-1;
            rear=-1;

        }
        else{
        if(front==max-1){
            front=0;
        }
        else{
            front++;
        }
        }
}

}
