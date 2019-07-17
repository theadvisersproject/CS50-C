#include <stdio.h>
#include <cs50.h>

int main(void){
    
    //printing a division upto 7 digits after decimal.
    
    float x = get_float("x: ");
    float y = get_float("y: ");
    
    printf("hello, %f\n", x / y); //prints out the normal floating output.
    printf("hello, %.7f\n", x / y); //prints out the output of 7 digits after decimal %".number"f is the notation.
}
