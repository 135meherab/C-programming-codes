#include <stdio.h>
int main()
{
    char my_str;
    int count[26]={0};
    while (scanf("%c",&my_str)!=EOF)
    {
        count[my_str - 'a']++;
    }
    for (int i = 'a'; i <='z'; i++)
    {
        if (count[i-'a']!=0)
        {
            printf("%c : %d\n",i,count[i-'a']);
        }
    }
    
    
    return 0;
}