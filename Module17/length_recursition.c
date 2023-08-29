#include <stdio.h>
int fun(char str[],int i)
{
    if(str[i]=='\0') return 0;
    int len = fun(str,i+1);
    return len+1;
}

int main()
{
    char str[8]="meherab";
    int len = fun(str,0);
    printf("%d",len);
    return 0;
}