# include <stdio.h>
int char_to_ascii(char caracter)
{
    int ascii = caracter;
    return ascii;
}
int main()
{
    char inpcar;
    scanf("%c",&inpcar);
    int result = char_to_ascii(inpcar);
    printf("%d",result);
    return 0;
}