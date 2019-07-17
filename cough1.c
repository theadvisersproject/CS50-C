#include <stdio.h>
// have to create the new function at top since C is dumb and it reads from top to bottom and left to right.

 void cough(void) // the function neither takes a value as input nor puts an output on the screen, hence, void void.
 { 
        printf("cough!\n");
    }

int main(void){
    
    for (int i = 0; i < 3; i++){
        
        cough(); // calling a custom function.
    }
     
}
