#include <stdio.h>
#include <fcntl.h>

int main(int argc,char* argv[])
{
	if(argc<3)
	{
		printf("Provide file name properly\n");
	}
	else
	{
		char buff[256];
		int fd=open(argv[1],O_RDONLY);
		if(fd==-1)
			printf("No such file exist");
		else
		{
			int n=read(fd,buff,255);
			if(n==-1)
				printf("File not opened");
			int fdd=open(argv[2],O_WRONLY|O_CREAT,0433);
			if(fdd==-1)
			{
				printf("No such file exist");
			}			
			int p=write(fdd,buff,n);
			close(fd);		
		}
	}

	return 0;
}
