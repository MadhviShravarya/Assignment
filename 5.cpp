#include <stdio.h>
 
int main()
{
    char a[1000];  
    int i;
 
    printf("Enter any string: ");
    gets(a);
    for(i=0; a[i]!='\0'; i++);
    printf("Length of '%s' = %d",a,i);
 
    return 0;
}
