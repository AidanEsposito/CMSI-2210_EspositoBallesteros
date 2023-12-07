//Aidan Esposito / Juan Ballesteros

// To Compile: gcc whichEndIsUp.c -o whichEndIsUp.exe
// To Run: whichEndIsUp.exe

#include <stdio.h>

int main(){

    //Number to check byte order
    int num = 1;

    //char used to check endian order with num value
    char *endian_check = (char *)&num;

    //If the first byte is 1
    if(*endian_check == 1){
        printf("Your system is Little Endian\n");
    }
    else{
        printf("Your system is Big Endian\n");
    }

return 0;
}
