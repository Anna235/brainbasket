#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float n;        //amount of change owed in dollars
    int m;          //amount of change owed in cents
    int a = 25;     //quarter
    int b = 10;     //dime
    int c = 5;      //nickel
    int d = 1;      //penny
    int e;          // number of quarters
    int f;          // number of dimes
    int g;          // number of nickels
    int h;          // number of pennies
    int r;          // remainder from division
    int z;          //number of coins needed
    
        do
    {
        printf("O hai! How much change is owed? ");
        n = GetFloat();
        if(n == 0||n < 0)
        printf("How much change is owed?\n");
    }
    while (n==0||n<0);
    
    m = (int)round(n*100);
    
    e=m/a;
    r=m%a;
    
    f=r/b;
    r=r%b;
    
    g=r/c;
    r=r%c;
    
    h=r/d;
    r=r%d;
    
    z=e+f+g+h;
    printf("%d\n", z);
  }
