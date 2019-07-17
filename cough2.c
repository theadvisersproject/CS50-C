#include <stdio.h>
// BUT NO! I insist to put the newly created function at the bottom and still wanna make it work!

void cough(void); // this is the prototype of the function, so C knows its declared somewhere in the program.

int main(void){
    
    for (int i = 0; i < 3; i++){
        
        cough(); // calling a custom function.
    }
     
}

 void cough(void) 
 { 
        printf("cough!\n");
    }
