#include<stdio.h>
#include<string.h>

   void main(){
   	char s1[1000], oldchar,newchar;
   	
   	printf("Enter the string :");
   	gets(s1);
   	printf("Enter the character you wan a replace :");
   	scanf("%c",&oldchar);
   	printf("  By which character you wan a replace with :");
   	scanf(" %c",&newchar);
   	
   	replacechar(s1,oldchar,newchar);
   	printf("The modified  string is : %s",s1);
   	
   }
   
     void replacechar(char *s1,char oldchar,char newchar){
     	
     	int i;
     	int length = strlen(s1);
     	for(i=0;i<length;i++)
		 {
     		
     		if(s1[i]==oldchar)
			 {
     			s1[i]=newchar;
			 }
		 }
	 }
	 


