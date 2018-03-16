#include <stdio.h>
#include "myMath.h"
#include "myStr.h"

void main()
{
   int a=0,b=0;
   printf("Enter two Values: \n");
   printf("a : ");
   scanf("%d",&a);
   printf("b : ");
   scanf("%d",&b);

   int equal=isEqual(a,b);
   if(equal==1)
   {
      printf("a is equal to b\n");
   }
   else if(equal==-1)
   {
      printf("a is not equal to b\n");
   }
   int swp=swap(&a,&b);
   printf("After Swapping : \n");
   printf("a=");
   printf("%d",a);
   printf("\nb=");
   printf("%d",b);
   printf("\n");

   printf("\n");
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
