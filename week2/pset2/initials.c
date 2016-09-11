//program that prompts a user for their name and then outputs their initials in uppercase
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    string s = GetString();
    
    for (int i=0, n=strlen(s); i<n; i++)
        {
            //for 1st character
            if (i==0)
            {
                if (s[i]>'@' && s[i]<'[')
                printf("%c", s[i]);
                
                
                else
                printf("%c", s[i]-32);
            }
            
            
            //for other characters
            else if (s[i]==' ')
            {
                if (s[i+1]>'@' && s[i+1]<'[')
                printf("%c", s[i+1]);
                
                
                else
                printf("%c", s[i+1]-32);
            }
            
        }
    printf("\n");
}