#include <stdio.h>
#include <fcntl.h>

int main(int argc,char* argv[])
{
	int n=0;
	int fd=1;
	char buff[256];
	if(argc < 2)
		printf("Give file name for input\n");
	else
	{
		fd=open("f1",O_RDONLY);
		if (fd==-1)
		{
			printf("File not opened");
		}
		else
		{
			int fdd=open("newFile",O_CREAT|O_WRONLY);
			if(fdd==-1)
				printf("file not opened");
			n=read(fd,buff,255);
			write(fdd,buff,n);
		}
	}
	
	
	close(fd);
	return 0;
}
