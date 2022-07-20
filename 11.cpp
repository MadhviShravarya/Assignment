#include<stdio.h>

int main()
{
int h,m;

printf("enter the time ", h);
scanf("%d" ,&h);
printf(":");
printf(" ",m);
scanf("%d",&m);
printf("%02d hours and %02d minutes",h,m);

return 0;
}
