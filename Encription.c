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

    string word = get_string("Input a word to encrypt: ");
    string ciphertextHigh = argv[1];
    string ciphertextLow[] ;
     printf("%s\n", ciphertextHigh);
     printf("%s\n", ciphertextLow);
    for (int j = 0; j < 27; j++)
    {
         printf("%s\n", ciphertextLow);
         ciphertextLow[j] = (ciphertextHigh[j]);
         printf("%s\n", ciphertextLow);
    }

  ciphertextHigh = argv[1];
  printf("%s\n", ciphertextHigh);
  printf("%s\n", ciphertextLow);
    printf("ciphertext: ");
    for (int i = 0; i < strlen(word); i++)
    {
        int word_char_value = word[i];
        if (isupper(word[i]))
        {
            if (word_char_value >= 65 && word_char_value <= 90)
            {
                printf("%c", ciphertextHigh[word_char_value - 65]);
            }
        }
        else if (islower(word[i]))
        {
            if (word_char_value >= 97 && word_char_value <= 122)
            {
                printf("%c", ciphertextLow[word_char_value - 97]);
            }
        }
    }

    printf("\n");

    return 0;
}