#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	char buff[256];
	int fd=open("file.txt",O_RDONLY);
    int fd1=open("errorAndOutput.txt",O_CREAT|O_WRONLY,7777);
	dup2(fd1,1);
    dup2(fd1,2);
    if(fd==-1)
        printf("No such file exist");
    
    int n=0;
    n=read(fd,buff,255);
	write(1,buff,n);
    close(fd);
	
    return 0;
}
