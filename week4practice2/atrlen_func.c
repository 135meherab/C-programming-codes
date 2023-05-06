#include <stdio.h>
int my_len(char my_str[])
{
    int count = 0, i = 0;
    while (my_str[i]!= '\0')
    {
        count++;
        i++;
    }
    
    return count;
}
int main()
{
    char my_str[1000];
    scanf("%s",my_str);
    printf("%d",my_len(my_str));
    return 0;
}