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
    printf("%s\n", (s+1));
    printf("%s\n", (s+2));
    for (int i=0; i<1;i++)
    {
      printf("%c", *(s+i));
    }
}