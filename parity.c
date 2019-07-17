#include <cs50.h>
#include <stdio.h>

int main(void){
    
    //prompt user for the number
    int n = get_int("n: ");
    
    //check parity of the given integer
    if (n % 2 == 0){
        printf("The number %i is even\n", n);
    }
    else {
        printf("The number %i is odd\n", n);
    }
    
}
