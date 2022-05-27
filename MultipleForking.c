#include <stdio.h> 
#include <stdlib.h>
#include<sys/types.h> 
#include<sys/wait.h>


int  main()
{
  
  pid_t pid; 
  
  for ( int i=0; i<3 ; i++) 
  {
    pid=fork(); 
  } 
  
///////////////////////////////////////////////
// fork 10 children and divide them into teams 
  
    for (int i=0; i<5; i++){
      soldiers_Army1[i].team = 1;// First Army 
      soldiers_Army1[i].x = *(x+i);
      soldiers_Army1[i].y = *(y+i);
     
      soldiers_Army2[i].team = 2;// Second Army
      soldiers_Army2[i].x = *(x+i+5);
      soldiers_Army2[i].y = *(y+i+5);           
  }
 ///////////////////////////////////////////////////// 
 
  
  
  
}
