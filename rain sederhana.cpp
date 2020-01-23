 #include <windows.h>
  #include <iostream>
  #include <stdio.h>
  #include <stdlib.h>
  #include <conio.h>
  
  using namespace std;
  
  int main(int argc, char *argv[] )
  {
      int a;
      string array [42] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","O","P","Q","R","S","T","U","V","W","X","Y","Z","1","2","3","4","5","6","7","8","9"," "," "," ","?","!","#"};
      system("The Wing's Matrix Project");
      system("color 5\n");
      while(1)
      {
         Sleep(25);
         for(int i=0; i<20; i++)
         {
                 a=rand()%42;
                 cout<<" "<<array[a];
                 cout<<"  ";
                 
                 }
         system ("color 2");
              printf("*");
              }
      getch();
      return(0);
      }
