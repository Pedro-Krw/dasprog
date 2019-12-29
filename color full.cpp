#include "stdio.h"
#include "windows.h"
#include "unistd.h"
main ()
 {
 	system ("color 2");
 	int n,i,j;
 	
 	 printf("Masukan angka yang anda mau :");
 	  scanf ("%d",&n);
 	   printf("\t1\n");
 	    sleep (1);
 	    system ("color 73");
 	    printf("\t\t2\n");
 	    sleep(1);
 	     system ("color 25");
 	    printf("\t\t\t3\n");
 	    sleep(1);
 	     system ("color D2");
 	    printf("\t\t\t\t4\n");
 	    sleep(1);
 	     system ("color A1");
 	    printf("\t\t\t\t\t5\n");
 	    sleep (1);
 	   for (i=1; i<=n; i++)
 	   {
 	   	 for (j=1; j<=2*n-1;j++)
 	   	 {
 	   	 	
 	   	 	
 	   	 	 if (j>=n-(i-1) && j<=n+(i-1))
 	   	 	 {
 	   	 	  system ("color 43\n");
 	   	 	 	 printf("*");
 	   	 	 	 
 	 
 	   	 	 	
				  }
				 else
           
 	   	 	printf(" ");
 	   
 	   	 	
			 }
 printf("\n");
 	   	

		}
 	
 	
 	

     
 	
 }
 
