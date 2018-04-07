#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Real User Id : %d\n", (long)getuid());
    printf("Effective User Id : %d\n", (long)geteuid());
    printf("Real Group Id : %d\n", (long)getgid());
    printf("Effective Group Id : %d\n", (long)getegid());

   return 0;
}
