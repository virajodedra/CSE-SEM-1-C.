#include<stdio.h>

   void main(){
   	
   	char x;
   	printf("enter the character x:");
   	scanf("%c",&x);
   	
   	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
   		printf("the character is vowel");
	   }else{
	   	printf("the character is consonant");
	   }
   }
