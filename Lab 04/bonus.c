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
       execlp("/bin/bash","bash",'\0');
   }
   else
   {
        wait();
	printf("Parent\n");
   }
}
