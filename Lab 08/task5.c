#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc,char* [])
{
	if(argc!=2)
	{
		printf("Invalid arguments given\n");
	}
	else
	{
        if(access(argv[1],R_OK)==0)
        {
            printf("You have read access to this file\n");
        }
        else
        {
            printf("You have not read access to this file\n");
        }

        if(access(argv[1], W_OK)==0)
        {
            printf("You have write access to this file\n");
        }
        else
        {
            printf("You have not write access to this file\n");
        } 
        if(access(argv[1], X_OK)==0)
        {
            printf("You have execute access to this file\n");
        }
        else
        {
            printf("You have not execute access to this file\n");
        } 
    }
    return 0;
}