#include <stdio.h>
#include <cs50.h>

/* this builds a pyramid of #'s of n height
*** PLEASE UNCOMENT LOOP IN build_pyramid FOR MARIO MORE
**********************************************
*/



void build_pyramid(int height);

int main(void){

    //ask user for the height

    int height;

    do
    {
        height = get_int("Enter the Height: ");
    } while (height < 1 && height > 8);


    build_pyramid(height);

    return 0;

}

// builds a pyramid for n Height

void build_pyramid(int height){


    for (int i = 1; i <= height; i++)
    {
        // prints an emty space
        for (int k = height - i; k > 0; k--)
        {
            printf(" ");
        }

        // prints a brick
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }


        // uncoment this loop for mario more

        /*
        printf(" ");

        for (int t = 0; t < i; t ++){  // prints second pyramid of bricks
            printf("#");
        }

        */


        // moves on a new line
        printf("\n");
    }
}
