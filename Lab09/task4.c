#include <stdio.h>
#include <signal.h>

int main()
{
	sigset_t oldSet, newSet;
	sigemptyset(&newSet);
	sigaddset(&newSet,SIGINT);
	sigprocmask(SIG_SETMASK,&newSet,&oldSet);
	for(int i=0; i<5;i++)
	{
		printf("Infinite Loop \n");
		sleep(1);
	} 
	sigprocmask(SIG_SETMASK,&oldSet,NULL);
	for(int i=0; i<5;i++)
	{
		printf("After removing masking \n");
		sleep(1);
	}	
	return 0;
}
