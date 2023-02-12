#include<stdio.h>
int push();
int getmax();
int maxx();

int stack[100],max[100],i=0,size,top=-1,num;

int main(){
printf("enter the array size");
scanf("%d",&size);
while(i<size){
        printf("enter arrary element %d\t",i+1);
    push();
    i++;

}
getmax();
}

int push(){
    if(top==size-1){
printf("stack overflow");
}
else{
    scanf("%d",&num);
    top++;
    stack[top]=num;
    maxx();
}
}

int maxx(){
    if(top==0){
        max[top]=stack[top];
    }
    else if(max[top-1]<stack[top]){
        max[top]=stack[top];
    }
    else if(max[top-1]>stack[top]){
        max[top]=max[top-1];
    }

}

int getmax(){
printf("the max value in stack is %d\n\n",max[top]);
for(i=top;i>=0;i--){
    printf("%d\n",max[i]);
}
}
