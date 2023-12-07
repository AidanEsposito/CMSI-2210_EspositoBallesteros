//Aidan Esposito / Juan Ballesteros

// To Assemble: nasm -fwin32 findGCD.asm 
// To Compile: gcc -m32 findGCD.obj -o findGCD.exe 
// To Run: gcdFinder.exe

#include <stdio.h>
#include <stdint.h>  
#include <assert.h>

//external GCD function from findGCDfunc.asm
extern int32_t findGCD(int32_t a, int32_t b);

int main(){

    //Numbers to be used to test function
    int32_t num1, num2;


    //Numbers entered from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);


    //value used to keep track of numbers entered
    int32_t result = findGCD(num1, num2);

    //check if result > 0 
    assert(result > 0);
    //check if result == 1
    assert(result == 1);
    //print GCD
    printf("Numbers: %d %d, GCD: %d\n", num1, num2, result);

    return 0;
}