#include "stdio.h"
#include "windows.h"
 main ()
 {
 	
 	int sapi,rusa,kuda;
 	system ("color 02\n");
 	 printf("masukan nilai yang anda ingginkan :");
 	  scanf ("%d",&sapi);
 	  printf("POLA KE 1\n");
 	   Sleep(80);
 	   for (rusa=1; rusa<=sapi;rusa++){
 	   	
 	   	 for (kuda=1;kuda<=rusa;kuda++){
 	   	 	
 	   	 	printf("*");
			 }
			 printf("\n");
 	   system ("\n");
		}
 	
	 
	 
	 
	 	int Asapi,Arusa,Akuda;
 	
 	 printf("masukan nilai yang anda ingginkan :");
 	  scanf ("%d",&Asapi);
 	  printf("POLA KE 2\n");
 	   system ("\ncolor 03");
 	    Sleep(80);
 	   for (Arusa=1; Arusa<=Asapi;Arusa++){
 	   	
 	   	 for (Akuda=Asapi;Akuda>=Arusa;Akuda--){
 	   	 	
 	   	 	printf("*");
			 }
			 printf("\n");
 }
 	
     int bsapi,brusa,bkuda,tikus;
      printf("masukan nilai :");
       scanf("%d",&bsapi);
       printf("POLA 3\n");
        Sleep(80);
       for (brusa=1;brusa<=bsapi;brusa++){
       	
       	for (bkuda=1; bkuda<=brusa;bkuda++){
       		
       		printf(" ");
       		
		   }
		   for (tikus=bsapi;tikus>=brusa;tikus--){
		   	
		   	printf("*");
		   }
		   printf("\n");
       	
	   }
	  	
     int csapi,crusa,ckuda,ctikus;
      printf("masukan nilai :");
       scanf ("%d",&csapi);
        Sleep(80);
       for (crusa=1; crusa<=csapi;crusa++){
       	 for (ckuda=csapi;ckuda>=crusa;ckuda--){
       	 	
       	 	printf(" ");
			}
       	for (tikus=1;tikus<=crusa;tikus++){
       		printf("*");
       		
       		
		   }
		   printf("\n");
	   }
     
	 }
 	 
	 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
