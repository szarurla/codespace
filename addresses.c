#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    printf("%c\n", *s);
    printf("%s\n", s);
    printf("%c\n", *s(1+1));
    printf("%c\n", *s(1+2));
    printf("%c\n", *s(1+3));
}