#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    printf("%c\n", *s);
    printf("%s\n", s);
    printf("%c\n", *(s));
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+3));
    printf("%c\n", *(s+4));
    for (int i=0; i<10;i++)
    {
      printf("%c", *(s+i));
    }
}