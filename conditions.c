#include <cs50.h>
#include <stdio.h>

int main(void){
    //prompt user to enter two numbers.
    int x = get_int("x: ");
    int y = get_int("y: ");
    
    //comparing x and y to find whether they're equal, greater than or less than.
    if (x > y)
    {
        printf("x is greater than y\n");
    } 
    else if (y > x) 
    {
        printf("y is greater than x\n");
    }
    else
    {
        printf("both x and y are equal\n");
    }
   
}
