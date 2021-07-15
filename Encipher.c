#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


int main(int argc, string argv[])
{
    //To get only one input in the command line
    if (argc == 2)
    {
        //To check that entered contains only integers
        for (int j = 0, p = strlen(argv[1]); j < p; j++)
        {
            if (isalpha(argv[1][j]))
            {
                printf("Usage: ./caeser key\n");
                return 1;
            }
        }
        //convert the string to integer
        int key = atoi(argv[1]);
        //To allow only positive no as key input
        if (key < 0)
        {
            printf("Enter a positive digit\n");
            return 1;
        }
        //Get user input
        printf("plaintext:");
        scanf("%s", text);
        printf("ciphertext: ");

        //Convert the input into cipher text letter by letter
        for (int i = 0, n = strlen(text); i < n; i++)
        {
            if (isalpha(text[i]))
            {
                if (isupper(text[i]))
                {
                    //converts the char to its ASCII code
                    int value = (text[i] - 'A' + key);
                    if (value < 26)
                    {
                        value += 'A';
                        printf("%c", value);
                    }
                    //To make sure that only valid characters are printed
                    else
                    {
                        value %= 26;
                        value += 'A';
                        printf("%c", value);
                    }
                }

                else if (islower(text[i]))
                {
                    int value = (text[i] - 'a' + key);
                    if (value < 26)
                    {
                        value += 'a';
                        printf("%c", value);
                    }
                    //To make sure that only valid characters are printed
                    else
                    {
                        value %= 26;
                        value += 'a';
                        printf("%c", value);
                    }
                }
            }
            else // printing non-alphabetic charscters
            {
                int value = text[i];
                printf("%c", value);
            }
        }
        printf("\n");
        return 0;
    }
    //Throws an error whenever conditions are not followed
    else
    {
        printf("Usage: ./caeser key\n");
        return 1;
    }
}

