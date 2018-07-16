#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define SIZE 1024
int main()
{
	int fd[2];
	pipe(fd);
	int cpid = fork();
	if(cpid==0)
	{
		close(fd[1]);
		char buff[SIZE];
		memset(buff,'\0',SIZE);
		int n= read(fd[0],buff,SIZE);
		printf("Message from Parent is : \n");
		write(1,buff,n);
	}
	else
	{
		close(fd[0]);
		const char * arr="Hello Child \n";
		write(fd[1],arr,strlen(arr));
		arr="New Message\n";
		write(fd[1],arr,strlen(arr));
		wait(NULL);
	}
}
