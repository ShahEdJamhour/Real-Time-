#include <stdio.h> 
#include <stdlib.h>
#include<sys/types.h> 
#include<sys/wait.h> 
int main()
{
pid_t pid,p; 
int s; 
//fork a process 

pid =fork(); 
if (pid <0 ) 
{

fprintf("error"); 
exit(0);
}

else if (pid==0) //child
{
  printf(" child pid = %d   ", getpid());

  
}
  else // parenr process 
  {
    printf("parent pid = %d", getpid()); 
    sleep (1); //  because parent and child start excution at the same time, i need to make sure that the parent finishes after child 
    
    
  }



{
