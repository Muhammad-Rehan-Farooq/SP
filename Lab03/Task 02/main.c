#include <stdio.h>
#include "myStr.h"
void main()
{
   char arr[5]={'R','E','H','A','N'};
   int res = isPalindrme(arr,5);
   if(res==1)
   {
     printf("%s",arr);
      printf("\nArray is Palindrom.\n");
   }
   else if(res==-1)
   {
      printf("%s",arr);
      printf("\nArray is not Palindrom.\n");
   }
}
