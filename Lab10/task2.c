#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>


#define SIZE 1024
int main()
{
	int fd[2];
	int rv=pipe(fd);
	if(rv==-1)
		printf("Pipe Failed");
	int cpid = fork();
	if(cpid==0)
	{
		close(fd[0]);
		close(1);
		dup(fd[1]);
		execlp("ls","ls",NULL);
		
	}
	else
	{
		wait(NULL);
		close(fd[1]);
		char buff[SIZE];
		memset(buff,'\0',SIZE);
		read(fd[0],buff,SIZE);
		write(1,buff,SIZE);
	}
}
