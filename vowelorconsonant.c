#include <stdio.h>
int main()
{
    char ch,cha;
    printf("Enter an alphabet : ");
    scanf("%c",&ch);
    cha=tolower(ch);
    if (cha == 'a' || cha == 'e' || cha == 'i' || cha == 'o' || cha == 'u' )
    {
        printf("The letter is vowel");
    }
    else if (cha >= 'a' && cha <= 'z')
    {
        printf("The letter is consonant");
    }
    else 
    {
        printf("Moodittu Enter a letter");
    }
    
}