#include<stdio.h>


   char findchar(char s1[1000],char chr);
   void main(){
   	      
   	      char s1[1000] ,chr;
   	      prinf("Enter the string :");
   	      gets(s1);
   	      
   	      printf("Enter the character you wan find in string :");
   	      scanf("%s",&chr);
   	      
   	   char result = findchar(s1,chr);
		 printf(" character not found");     
   	      
     	        
   }
   
      char findchar(char s1[1000],char chr){
	  
      
      int i;
      char forget;
      
      for(i=0;s1[i]!='\0';i++){
      	
      	if(s1[i]==chr)
      {
      	char forget = s1[i];
      	
      	}
      }
      	return forget;
      	
      }
	  
