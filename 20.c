#include<stdio.h>
int main(void)
{
int i,a,b,c,sum;

for (i = 100; i < 1000; i++)
{ 
a=i%10;
b=(i-a)/10%10;
c=(i-a-10*b)/100;
sum=a*a*a+b*b*b+c*c*c;

if(i==sum)

printf("i is %d\n", i);
}
return 0;
}