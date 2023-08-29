#include <stdio.h>
int main()
{
    int x,new_num;
    scanf("%d",&x);
    new_num = x / 1000;
    if(new_num % 2 == 0)
    {
        printf("EVEN");
    } 
    else
    {
        printf("ODD");
    }
    return 0;
}