#include<stdio.h>
#include<string.h>


   void main(){
    
    char s1[1000],s2[1000];
  
    
    printf("Enter the first string :");
    gets(s1);
     printf("Enter the second  string :");
    gets(s2);
    
	   	 char s3[1000]=s1[1000],s3[1000]=s2[1000];
	   	printf("length of string 1 is : %d\n",strlen(s1));
	   	printf("length of string 2 is : %d\n",strlen(s2));
	   	
	   	 if(strcmp(s1,s2)==0){
	   	 	
	   	 	printf("Both strings are same.");
			}
			else
			{
				printf("The both strings are not same");
			}
			    printf("\n");
			    
			     printf("The reverse string 1 is :%S\n",strrev(s1));
	   	        
	   	         printf("The reverse string 2 is :%S\n",strrev(s2));
			    
			    
			     printf("%s\n", strcat(s1,s2));
			     
			    printf("%s\n",strlwr(s1));
	   	         
	   	         printf("%s\n",strlwr(s2));
	   	         
	   	         printf("%s\n",strupr(s1));
	   	         
	   	         printf("%s\n",strupr(s2));
			
				printf("%s\n", strcpy(s1,s2));
				
	   	      
	   	       
	   	       
	   	         
	   	         
	   	       
   }
