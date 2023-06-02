#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool isallalpha(string str)
{
    int counts[26] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        if (!isalpha(str[i]))
        {
            return false;
        }
        int index = tolower(str[i]) - 'a';
        if (counts[index] > 0)
        {
            return false;
        }
        counts[index]++;
    }

    return true;
}

int main(int argc, string argv[])
{
    if (argc != 2 || strlen(argv[1]) != 26 || !isallalpha(argv[1]))
    {
        printf("Use 26 alphabetic characters as command-line arguments.\n");
        return 1;
    }
    string ciphertext = argv[1];
    for (int j = 0; j < strlen(ciphertext); j++)
    {
        int lcarg = ciphertext[j];
        if (lcarg >= 'a' && lcarg <= 'z')
        {
            ciphertext[j] = lcarg - 32;
        }
    }

    string word = get_string("Input a word to encrypt: ");

    printf("ciphertext: ");
    for (int i = 0; i < strlen(word); i++)
    {
        int word_char_value = word[i];
        if (!isalpha(word[i]))
        {
            printf("%c", word[i]);
        }
        if (isupper(word[i]))
        {
            if (word_char_value >= 65 && word_char_value <= 90)
            {
                printf("%c", ciphertext[word_char_value - 65]);
            }
        }
        else if (islower(word[i]))
        {
            if (word_char_value >= 97 && word_char_value <= 122)
            {
                printf("%c", (ciphertext[word_char_value - 97] + 32));
            }
        }
    }

    printf("\n");

    return 0;
}