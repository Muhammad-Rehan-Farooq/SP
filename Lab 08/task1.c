#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	char buff[256];
	int fd=open("/etc/passwd",O_RDONLY);
		if(fd==-1)
			printf("No such file exist");
		else
		{
			int newfd=dup(fd);
			int n=0;
			while((n=read(fd,buff,255))>0)
			{
				write(1,buff,n);
			}
			close(newfd);			
			close(fd);
					
		}
	

	return 0;
}
