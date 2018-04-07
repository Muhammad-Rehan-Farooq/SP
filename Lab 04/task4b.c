#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main()
{
   int cpid=-1;
   int status;
   cpid=fork();
   if(cpid==-1)
   {
       printf("Fork Failed");
   }
   else if(cpid==0)
   {
       printf("PID of child process %d\n",getpid());
       printf("PPID of child process %d\n",getppid());
       exit(-1);
   }
   else
   {
       wait(&status);
       if(WIFEXITED(status))
       	   {printf("Exit Status %d\n",WEXITSTATUS(status));}
       printf("PID of Parent process %d\n",getpid());
       printf("PPID of Parent process %d\n",getppid());
   }
}
