#include <stdio.h>
#include <unistd.h>

int main()
{
    uid_t ruid,euid,suid;
    gid_t rgid,egid,sgid;
    getresuid(&ruid,&euid,&suid);
    getresgid(&rgid,&egid,&sgid);
    printf("Before Changing...\n"); 
    printf("Real User Id : %d\n", ruid);
    printf("Effective User Id : %d\n", euid);
    printf("Save User Id : %d\n", suid);
    printf("Real Group Id : %d\n", rgid);
    printf("Effective Group Id : %d\n", egid);
    printf("Save Group Id : %d\n", sgid);

    if(setuid(501)>=0)
    {
            getresuid(&ruid,&euid,&suid);
	    getresgid(&rgid,&egid,&sgid);
	    printf("After Changing...\n"); 
	    printf("Real User Id : %d\n", ruid);
	    printf("Effective User Id : %d\n", euid);
	    printf("Save User Id : %d\n", suid);
	    printf("Real Group Id : %d\n", rgid);
	    printf("Effective Group Id : %d\n", egid);
	    printf("Save Group Id : %d\n", sgid);
    }
    else
    {
        printf("Unpriviliged User\n");    
    }

   return 0;
}
