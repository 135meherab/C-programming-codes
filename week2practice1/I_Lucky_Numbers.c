#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int reminder = num % 10;
    num = num / 10;
    if(reminder%num == 0 || num%reminder==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    

    return 0;
}