// program that prompts the user for the length of his or her shower in minutes (as a positive integer) and 
//then prints the equivalent number of bottles of water (as an integer) per the sample output below, 
//wherein underlined text represents some user’s input.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Give me # of minutes of your shower:");
    int m = GetInt();
    int n = m * 12;
    
    if (m>0)
    {
        printf("Number of bottles used per shower is %d\n", n);
        
    }
    else 
    {
    printf("Number of minutes should be a positive integer!\n");
    }
}