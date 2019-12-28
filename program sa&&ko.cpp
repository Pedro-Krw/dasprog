#include "stdio.h"
 main ()
 {
 	int suhuc,suhud,suhue,suhuf;
 	 
 	 printf("\t \t \tMASUKAN ANGKA YANG DI KETAHUI :");
 	  scanf ("%d",&suhuc);
 	   
 	   for (suhud=1; suhud<=suhuc; suhud++)
 	   {
 	   	 for (suhue=1; suhue<=2*suhuc-1; suhue++)
 	   	 {
 	   	 	  if (suhue>=suhuc-(suhud-1) && suhue<=suhuc+(suhud-1))
 	   	 	  {
 	   	 	  	  printf("*");
 	   	 	  	
 	   	 	  	
				   }
 	   	 	else
 	   	 	 printf(" ");
 	   	 	
			 }
			
 	   
 	   	printf("\n");
 	   	
		}
		  printf("\t \t=======");
		  
		  printf("\n");
		  
		  printf("\t \t=======");
		  
		  printf("\n");
		  
		  printf("\t\t=======");
		  
		  printf("\n");
		  
		  printf("\t\t=======");
		  
		   printf("\n");
		   
		   printf("\n");
		   
		    
		     printf("\n");
		     printf("\n");
		 
 	printf(">%d< adalah bilangan :",suhuc);
 	 printf("\n");
 	
 	  
 	   if(suhuc%2==0)
 	    {
 	    	printf("GENAP");
 	    	
		 }
 	else
 	 printf("GENJIL");
 	
 	
 }
