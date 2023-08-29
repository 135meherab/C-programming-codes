#include <stdio.h>
#include <string.h>
int main()
{
    char my_str[1001];
    fgets(my_str,1001,stdin);
    int capital = 0,small = 0, space = 0;
    int len = strlen(my_str);
    for (int i = 0; i < len; i++)
    {
        if (my_str[i]>='A' && my_str[i]<='Z')
        {
            capital++;
        }
        else if (my_str[i]>='a' && my_str[i]<='z')
        {
            small++;
        }
        else if (my_str[i]==' ')
        {
            space++;
        }
        
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d", capital, small, space);
    
    return 0;
}