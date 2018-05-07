#include <stdio.h>
#include <fcntl.h>

int main(int argc,char* argv[])
{
	char buff[256];
	
	int fdd=open("newFile",O_CREAT|O_WRONLY);
	if(fdd==-1)
		printf("file not opened");
	int n=0,x=0;
	while(1)
	{
		n=read(0,buff,255);
		if(n<0)
		{
			close("input");
			exit(-1);
		}
		write(fdd,buff,n);
	}
	
	close(fdd);
	return 0;
}
