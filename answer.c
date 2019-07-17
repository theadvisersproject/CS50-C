#include <cs50.h>
#include <stdio.h>

int main(void){
    //prompt user for answer
    char c = get_char("Answer: ");
    
    //check answer
    if (c == 'Y' || c == 'y'){
        printf("yes\n");
    } else if (c == 'N' || c == 'n'){
        prinf("no\n");
    } else {
        printf("type either y or n as your response");
    }
}
