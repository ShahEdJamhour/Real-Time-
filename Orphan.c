// orphan process.
// parent finished excution while the child is still running. 
#include<stdio.h>

int main (){
// create child process 

int pid =fork (); 

if ( pid>0) // parent process 
{
printf("im parent, my pid = %d", getpid());
sleep(1); 
}
else if (pid==0)// child process
{
printf ("im child , my pid = %d my parents pid = %d", getpid(), getppid());
sleep(2); 
printf ("im child , my pid = %d my parents pid = %d", getpid(), getppid());

} 
return (0); 


}
