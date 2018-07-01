#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main()
{
	int cpid=fork();
	if(cpid==0)
	{
		while(1)
		{
			printf("Child in loop\n");
			sleep(1);
		}
	}
	else
	{
		sleep(5);
		printf("Parent Process \n");
		kill(cpid,SIGINT);
		printf("Parent Process kill it's child \n");
	}
	return 0;
}
