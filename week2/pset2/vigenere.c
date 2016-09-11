//Vigenère’s cipher

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, string argv[])  
{    
    // argc should be equal to 2
    if (argc != 2)
    {
        printf("Wrong number of arguments. Please try again.\n");

        return 1;
    }
    else 
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            while (isalpha(argv[1][i])==0)
            {
                printf("Key must be alphabetic chars only.");

                return 1;
            }    
        }
    }



    // Key -> string
    string k = argv[1];
    
    int key_len = strlen(k);
    


    // Ask user for text
    string Text = GetString();
    


    for (int i = 0, j = 0, n = strlen(Text); i < n; i++)
    {            
        int letter_key = tolower(k[j % key_len]) - 'a';

        if (isupper(Text[i]))
        {
            printf("%c", (Text[i] - 'A' + letter_key) % 26 + 'A');
            j++;
        }
        
        else if (islower(Text[i]))
        {
            printf("%c", (Text[i] - 'a' + letter_key) % 26 + 'a');
            j++;
        }
        
        else
        {
            printf("%c", Text[i]);
        }
    }

    printf("\n");

    return 0;
}