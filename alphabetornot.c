#include<stdio.h>
  
      void main() {
      char ch;
      printf("Enter the character :");
      scanf("%c",&ch);
      
      if(ch>='A' && ch<='Z'){
      	printf("%c is upper case.",ch);
	  }  
	   else if(ch>='a' && ch<='z'){
      	printf("%c is lower case.",ch);
	  }
	  else if(ch>='0' && ch<='9'){
      	printf("%c is digit.",ch);
	  }  else{
	  	printf("%c is special digit.",ch);
	  }
	  }
