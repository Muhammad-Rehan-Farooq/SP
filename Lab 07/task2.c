#include <stdio.h>
#include <fcntl.h>

int main(int argc,char* argv[])
{
	char buff[1400];
	int fd=open("/etc/shadow",O_RDONLY);
		if(fd==-1)
			printf("No such file exist");
		else
		{
			int n1=read(fd,buff,1399);
			int fdd=open(argv[1],O_CREAT|O_WRONLY);
			if(fdd==-1)
				printf("File not opened");			

			int p=write(fdd,buff,n1);
			close(fdd);			
			close(fd);
					
		}
	

	return 0;
}
