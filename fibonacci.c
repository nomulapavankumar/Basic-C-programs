#include<stdio.h>
int main()
{
int n, a=0, b=1, next, i;
scanf("%d", &n);
printf("First %d Fibonacci terms are: \n", n);
for(i=1;i<=n;i++)
{
 printf("%d\t", a);
 next = a + b;
 a = b;
 b = next;
}
