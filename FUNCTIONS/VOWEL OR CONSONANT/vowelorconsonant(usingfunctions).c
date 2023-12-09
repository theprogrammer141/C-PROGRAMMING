#include<stdio.h>
char vowelorconsonant(char);
int main()
{
    char character,a;
    printf("ENTER ANY CHARACTER(a-z)(A-Z):");
    scanf(" %c",&character);
    a=vowelorconsonant(character);
    
    return 0;

}
char vowelorconsonant(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("VOWEL\n");
    }
    else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("VOWEL\n");
    }
    else
    {
        printf("CONSONANT");
    }
    return ch;
}