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
		int fd1[2];
		int rv=pipe(fd1);
		int cpid1=fork();
		if(cpid1==0)
		{
			close(1);
			dup(fd1[1]);
			close(fd1[0]);
			execlp("man","man ls","ls",NULL);
		}
		else
		{
			wait(NULL);
			close(fd1[1]);
			close(0);
			dup(fd1[0]);
			close(1);
			close(fd[0]);
			dup(fd[1]);
			execlp("grep","grep","ls",NULL);
			
		}
	}
	else
	{
		wait(NULL);
		close(fd[1]);
		close(0);
		dup(fd[0]);
		execlp("wc","wc","-l",NULL);
		
	}
}
