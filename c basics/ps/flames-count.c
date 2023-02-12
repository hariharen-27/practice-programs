#include<stdio.h>
#include<string.h>

char boy[1000],girl[1000],comm[1000];
int i,j,k=-1,len=0,rmindex,size,lenb,leng;
char flames[6]="FLAMES";


void main(){
printf("%s",flames);
printf("\nEnter the Boy Name(without spaces)");
scanf("%s",boy);
printf("\nEnter the girls name : (without spaces)");
scanf("%s",girl);
lenb=strlen(boy);
leng=strlen(girl);

printf("\nLength of the boys name : %d",lenb);
printf("\nLength of the girl name : %d",leng);


for(i=0;i<lenb;i++){
    for(j=0;j<leng;j++){
        if(boy[i]==girl[j]){
                boy[i]=1;
                girl[j]=1;
        }
    }
}

printf("\n%s",boy);
printf("\n%s",girl);

for(i=0;i<lenb;i++){
    if(boy[i]==1);
    else{
        len++;
    }
}

for(i=0;i<leng;i++){
    if(girl[i]==1);
    else{
        len++;
    }
}

size=strlen(flames);
while(size>1){
    rmindex=len%size-1;
    if(rmindex>=0){
        removeletter(flames,rmindex);
    }
    else{
        size=size-1;

    }
}
switch(flames[0]){
case 'F':
    printf("Relationship status is Friendship");
    break;
case 'A':
    printf("Relationship status is Affection");
    break;
case 'L':
    printf("Relationship status is Love");
    break;
case 'M':
    printf("Relationship status is Marriage");
    break;
case 'E':
    printf("Relationship status is Enemy");
    break;
case 'S':
    printf("Relationship status is Sister and Brother");
    break;
}
}

void removeletter(char *flames,int rmindex){
for(i=rmindex;i<size-1;i++)
	{
		flames[i]=flames[i+1];
	}
	size=size-1;
}
