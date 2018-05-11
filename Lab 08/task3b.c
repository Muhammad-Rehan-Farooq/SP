#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	char buff[256];
    dup2(1,2);
    
    int fd1=open("f1",O_RDONLY);
    int fd2=open("f2",O_CREAT|O_WRONLY,7777);
	dup2(fd1,0);
    dup2(fd2,1);
    
    if(fd1==-1 || fd2==-1)
        printf("No such file exist");
    else
    {
        int n=0;
        n=read(0,buff,255);
        write(1,buff,n);
        
    }
    
	close(fd1);
    close(fd2);
    return 0;
}
