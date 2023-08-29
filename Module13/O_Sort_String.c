#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char my_str[n];
    while (scanf("%c",&my_str)!=EOF)
    {
        for (int i = 0; i < strlen(my_str)-1; i++)
        {
            for (int j = i+1; j < strlen(my_str); j++)
            {
                if(my_str[i]>my_str[j])
                {
                    char tmp = my_str[i];
                    my_str[i] = my_str[j];
                    my_str[j] = tmp; 
                }
            }
            
        }
        
    }
    for (int i = 0; i < strlen(my_str); i++)
    {
        printf("%c",my_str[i]);
    }
    
    
    return 0;
}