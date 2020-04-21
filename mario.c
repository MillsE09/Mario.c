#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int height;
    do
    {
        height = get_int("Height:  ");
    }
    while(height<1||height>8);
    
      for(int row=0; row<height; row++)
    {
        for(int column=0; column<height*2+3; column++)
        {
            if(row+column<height-1||column-row>height+2)
            {
                printf(" ");
            }
            else if(column==height||column==height+1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        
        
    
        printf("\n");
        }
