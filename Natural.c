#include<stdio.h>
int main()
{
int i, n,sum=0;
printf("Enter a positive value of n");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
sum+=i;
}
printf("sum=");
return 0;
}
