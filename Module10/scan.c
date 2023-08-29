#include <stdio.h>
int main()
{
    char a[7];
    scanf("%s",&a);
    int size = sizeof(a);
    
    printf("%s",a);
    return 0;
}