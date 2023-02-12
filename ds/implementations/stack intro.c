#include<stdio.h>
#define size 3

int top=-1,arr[100];

int push(){
    int num;
if(top==size-1){
printf("stack overflow");
}
else{
        printf("enter the number to push");
scanf("%d",&num);
    top++;
    arr[top]=num;
}

}

int pop(){
    if(top==-1){
        printf("stack under flow");
    }
    else{
    printf("popped  %d",arr[top]);
    top--;}


}

void main(){
int ch;


while(1){
        printf("enter the choice ");
scanf("%d",&ch);
switch(ch){
case 1:
    push();
    break;
case 2:
    pop();
    break;
case 3:
    exit(0);
default:
    printf("enter the valid number");
}
}
}



