#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
   
    do
    {
        printf("Give me an integer between 0 and 23\n");
        h = GetInt();
    }
    while (h<0 || h>23);   
    
    
    for (int r=0; r<h; r++)
    {
        for (int s=0; s<h-r-1; s++)
        {
            printf(" ");
            
        }
        for (int z=0; z<r+2; z++ )
        {
            printf("#");
        }
        printf ("\n");
    }

}