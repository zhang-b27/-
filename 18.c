#include<stdio.h>
int main(void)
{
 int sum=0,a=1,i,n;
 printf("Enter n:\n");
 scanf("%d", &n);
 for (i = 1; i <= n; i++)
 {     
      a=a*i;
       sum=sum+a;
 }
 printf("sum is %d\n", sum);
 return 0;
}
 