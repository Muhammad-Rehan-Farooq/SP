#include <stdio.h>
#include <signal.h>

void mySignalHandler(int signum)
{
	switch(signum)
	{
		case 2:
			printf("Signal Handler for SIGINT \n");
			break;
		case 3:
			printf("Signal Handler for SIGQUIT \n");
			break;
		case 8:
			printf("Signal Handler for SIGFPE \n");
			break;
		case 19:
			printf("Signal Handler for SIGSTOP \n");
			break;
		case 1:
			printf("Signal Handler for SIGHUB \n");
			break;
		case 9:
			printf("Signal Handler for SIGKill \n");
			break;

	}
}


int main()
{
	signal(SIGINT,mySignalHandler);
	signal(SIGFPE,mySignalHandler);
	signal(SIGQUIT,mySignalHandler);
	signal(SIGSTOP,mySignalHandler);
	signal(SIGHUP,mySignalHandler);
	
	printf("These signals are Handeled by program : \n");
	printf("1. SIGINT\n");
	printf("2. SIGFPE\n");
	printf("3. SIGQUIT\n");
	printf("4. SIGSTOP\n");
	printf("5. SIGHUP\n \n");
	
	while(1)
	{
		printf("Infinite Loop \n");
		sleep(1);
	}

	return 0;
}
