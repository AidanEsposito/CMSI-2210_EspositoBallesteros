//Aidan Esposito and Juan Ballesteros

#include <stdio.h>
#include <time.h> 

clock_t start; //start of clock

//Main Program that starts timer when enter press and ends timer with another
//enter press.
int main( int argc, char * argv[] ) {
    printf("Try to hold your breath! Press ENTER to start the timer! \n");
      
    int enterpress = fgetc(stdin);

    if(enterpress == 0x0A){
        start = clock();
    }
    printf("When you need air, press ENTER again to stop the timer \n");
    enterpress = fgetc(stdin);
    
    if(enterpress == 0x0A){
        clock_t end = clock(); //end of clock
        double total = (double)(end - start)  / CLOCKS_PER_SEC; //total amount of time 
        int minutes = (int)(total / 60); //seconds to minutes
        int seconds = (int)(total) % 60; //seconds

        printf("You held your breath for %d minutes and %d seconds!\n", minutes, seconds);
    }
return 0;
}