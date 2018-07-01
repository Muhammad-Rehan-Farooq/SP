#include <stdio.h>
#include <signal.h>

int main()
{
	signal(SIGINT,SIG_IGN);
	signal(SIGFPE,SIG_IGN);
	signal(SIGQUIT,SIG_IGN);
	signal(SIGSTOP,SIG_IGN);
	signal(SIGHUP,SIG_IGN);
	
	printf("These signals are ignnored by program : \n");
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
