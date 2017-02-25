#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int Height;
    do{
    printf("Height: ");
    Height = get_int();

    }while (Height < 0 || Height > 23);
    
    for (int row = Height; row > 0;  row--)
    {
        int number_of_spaces = row - 1;
        for (int i = 0; i < number_of_spaces; i++)
        {
            printf(" ");
        }
        
       int number_of_hashes = Height - number_of_spaces + 1;    
       for (int j = 0; j < number_of_hashes; j++)
       {
          printf("#");
       }

        printf("\n");
    }
}

