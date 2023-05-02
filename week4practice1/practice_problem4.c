# include <stdio.h>
char small_to_capital(char caracter)
{
    char small = caracter;
    char capital = small -32;
    return capital; 
}
int main()
{
    char alp;
    scanf("%c",&alp);
    char result = small_to_capital(alp);
    printf("%c",result);
    return 0;
}