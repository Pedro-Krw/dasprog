#include "stdio.h"

main (){
	
	int sa,ko,de;
	
	printf("silahkan masukan nilai :");
	 scanf ("%d",&sa);
	 
	  for (ko=1; ko<=sa; ko++){
	  	 
	  	for (de=1;de<=ko;de++){
	  		printf(" ");
	  		
		  }
	for (int tikus=sa; tikus>=(2*ko-sa);tikus--){
		
		printf("*");
	}
	printf("\n");
	  }
	int kam,pigi,su;
	
	 printf("masukan nilai :");
	  scanf ("%d",&kam);
	   
	    for (pigi=1; pigi<=kam;pigi++){
	    	
	    	for (su=kam;su>=pigi; su--){
	    		printf(" ");
	    		
			}
	   for (int dia=1; dia<=(2*pigi-1);dia++){
	   	 printf("*");
	   	
	   }
	   printf("\n");	
		}
	  
	
	
}
