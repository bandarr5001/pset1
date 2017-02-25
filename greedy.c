#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
    
{
    float money;
    do{
    printf("change:"); 
    money = get_float();
    }
    while (money <= 0);
    int money_int = (int)round(money * 100); 
    int coins = 0;
    
    for (; money_int > 0 ; coins++)
    {
         //printf("%i\n", money_int);
        if (money_int >= 25)
        {
            (money_int -= 25);
        }
        else if (money_int >= 10)
        {
            (money_int -= 10);
        }
        else if (money_int >= 5)
        {
            (money_int -= 5);
        }
        else 
        {
            (money_int -= 1);
        }
       
    }
    
        printf("%i\n", coins);
}