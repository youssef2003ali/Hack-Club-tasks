#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    for(int i = 0; i < strlen(argv[1]); i++)
    {
        if(argv[1][i] > 57)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    char *plain;
    do
    {
        plain = get_string("plaintext: ");
    }
    while(strlen(plain) < 1);
    char cipher[100];
    char cipherChar[100];
    for(int i = 0, temp = 0, arg = atoi (argv[1]); i < strlen(plain); i++)
    {
            if(isupper(plain[i]))
            {
                temp = (((plain[i] - 65) + arg) % 26) + 65;
            }
            if(islower(plain[i]))
            {
                temp = (((plain[i] - 97) + arg) % 26) + 97;
            }
        sprintf(cipherChar, "%c", temp);
        strcat(cipher, cipherChar);
    }
    printf("ciphertext: %s", cipher);
}
