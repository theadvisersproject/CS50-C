#include <stdio.h>
// BUT NO! I insist to put the newly created function at the bottom and still wanna make it work!

void cough(void); // this is the prototype of the function, so C knows its declared somewhere in the program.

int main(void){
   
        cough(3); // calling a custom function that loops.  
}

 void cough(int n) 
 {      
        for(int i = 0; i < n; i++){
        printf("cough!\n");
        }
    }
