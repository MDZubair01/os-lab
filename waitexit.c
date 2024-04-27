#include <stdio.h>
#include <unistd.h>
int main()
 {
     int i,pid;
     pid = fork();
     if(pid == -1)
     {
     printf("Fork failed");
     exit(0);     
     }
     
     else if (pid == 0)
     {
     printf("Child Process starts");
     
     for(i = 0;i<5;i++)
         {
         
         printf("\nChild Process %d is called",i);
         
         }
         printf("Child process ends\n");
     }  
     else
     
     {
     wait(0);
     printf("\n Parent process ends");
     }
     exit(0);
     
}
