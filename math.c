#include <stdio.h>
#include <cs50.h>

int main(void){
    //getting the first value
    int x = get_int("x: ");
    //getting the second value
    int y = get_int("y: ");
    
    //performing math
    printf("Addition is: %i\n", x + y);
    printf("Substraction is: %i\n", x - y);
}
