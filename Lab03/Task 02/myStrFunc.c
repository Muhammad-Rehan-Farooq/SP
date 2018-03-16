#include <stdio.h>
int isPalindrme(char* arr,int size)
{
   char tmp[5] ;
   int flag=1;
   for(int i=(size-1), j=0; i>=0,j<size; i--,j++)
   {
      tmp[j]=arr[i];
   }
   for(int j=0; j<size; j++)
   {
      if(tmp[j]!=arr[j])
      {
         flag=0;
         break;
      }
   }
   if(flag==1)
      return 1;
   else
      return -1;
}

