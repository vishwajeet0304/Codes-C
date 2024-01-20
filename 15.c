#include<stdio.h>
// input any 10 no and count no of positive negative and zero
int main()
{
  int p=0 , n=0 , z =0, i;
  int num1;
  for (i=0 ; i<10 ; i++ )
  {
    printf("enter the number");
    scanf("%d",&num1);
    if (num1>0)
    {
        p++;
    }
    else if (num1<0)
    {
    n++;
    }
    else z++;
  }
  printf("\n no of positive is %d",p);
  printf("\n no of negative is %d",n);
  printf("\n no of zero is %d",z);
  }
