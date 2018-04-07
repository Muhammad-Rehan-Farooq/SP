#include <stdio.h>
#include <unistd.h>

int main()
{
   int cpid=-1;
   cpid=fork();
   if(cpid==-1)
   {
       printf("Fork Failed");
   }
   else if(cpid==0)
   {
       printf("PID of child process %d\n",getpid());
       printf("PPID of child process %d\n",getppid());
   }
   else
   {
       wait();
       printf("PID of Parent process %d\n",getpid());
       printf("PPID of Parent process %d\n",getppid());
   }
}
