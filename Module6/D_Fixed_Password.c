#include <stdio.h>
int main()
{
    int pass;
    int correct_pass = 1999;
    while (1)
    {
        scanf("%d",&pass);
        if(pass != correct_pass)
        {
            printf("Wrong\n");
        }
        else
        {
            printf("Correct");
            break;
        }
    }
    
    return 0;
}