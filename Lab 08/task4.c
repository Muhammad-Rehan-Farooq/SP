#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
int main(int argc,char* argv[])
{
	if(argc<2)
	{
		printf("No arguments given\n");
	}
	else
	{
        struct stat buff;
        for (int i=1; i<argc;i++)
        {
            if (lstat(argv[i],&buff)<0)
            {
                printf("Error in lstat\n");
                exit(1);
            }
            if(S_ISREG(buff.st_mode))
            {
                printf(argv[i]);
                printf(" is a file\n");
                printf("Inode no : %d \n",buff.st_ino);
                printf("Access Time : %d \n",buff.st_atime);
                printf("Modifies Time : %d \n",buff.st_mtime);
                printf("Size : %d \n",buff.st_size);
            }
            else if(S_ISDIR(buff.st_mode))
            {
                printf(argv[i]);
                printf(" is a Directory\n");
                printf("User ID: %d \n",buff.st_uid,"\n");
            }
            printf("\n\n");
        }
	}

	return 0;
}