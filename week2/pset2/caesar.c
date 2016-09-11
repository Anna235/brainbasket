//a program that encrypts messages using Caesar’s cipher

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int key;
    int output;
   
    // argc should be equal to 2
    if (argc != 2)
    {
        printf("You didn't enter a key.  Please run program and enter a key when you run.\n");
        return 1;
    }
    
    
    // ask the user for the text to be encrypted
    string Text = GetString();


    // argv -> int
    key = atoi(argv[1]);
    

    if (key >= 26)
    {
        key = (key % 26);
    }

   
    for(int i = 0, n = strlen(Text); i < n; i++)
    {

        output = (Text[i] + key);
        
            
        // Upper & lowercase 
        if (isupper(Text[i]) && (output > 'Z'))
        {
            output = (output - 26);
        }
            
        if (islower(Text[i]) && (output > 'z'))
        {
            output = (output - 26);
        }
            
            
        // Alphabetical/non-alphabetical character check
        if (isalpha(Text[i]))
        {
            printf("%c", output);
        }
         
        else
        {
            printf("%c", Text[i]);
        }
            
            
    }
    
    printf("\n");
    return 0;
}

