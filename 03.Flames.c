//FLAMES

#include<stdio.h>
#include<string.h>

char boy[100],girl[100],com[100];
int i,j,k=-1,lenb,leng,count,rmvindex,size;
char flames[6] = "FLAMES";

void main()
{
	printf("%s",flames);
	printf("\nEnter the Boys name : ");
	scanf("%s",boy);
	printf("\nEnter the girls name : ");
	scanf("%s",girl);
	
	//Finding the count of characters excluding the common characters
	
	lenb=strlen(boy);
	leng=strlen(girl);
	printf("\nLength of the boys name : %d",lenb);
	printf("\nLength of the girls name : %d",leng);
	
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
		
	for(i=0;i<lenb;i++)
	{
		if(boy[i]!=1)
		{
			com[++k]=boy[i];
		}
    }
		for(i=0;i<leng;i++)
	    {
		if(girl[i]!=1)
		{
			com[++k]=girl[i];
		}
    }
    printf("\nCharacters without repitation is : %s",com);
    count=strlen(com);
    printf("\nTotal count : %d",count);
    size=strlen(flames);
    
    while(size>1)
    {
    	
    	printf("\nhi");
        rmvindex=count%size-1;
       if(rmvindex>=0)
       {
       	  striking(flames,rmvindex);
	   }
	   else
	   {
	   	  size=size-1;
			printf("%c",flames[size-1]);
	   	  printf("\n%d",size);
	   }
	}
	printf("\n\nRelationship status is : %c",flames[0]);	
}

void striking(char *flames,int rmvindex)
{
	printf("\n\n\t\t%d",size);
	for(i=rmvindex;i<size-1;i++)
	{
		flames[i]=flames[i+1];
	}
	size=size-1;
	puts(flames);
}










