//Aidan Esposito / Juan Ballesteros

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Main function that prints and makes the times table.
int main( int argc, char * argv[] ) {

    //checks if correct number of arguments is provided
    if(argc != 2){
        printf("Arguments must include only program name and number for times table.");
        return 1;
    }
    //variable used to calculate max value in times table, helps to determine size
    int N = atoi(argv[1]);

    //checks if number is in proper times table range
    if (N < 2) {
        printf("N should be a positive integer greater than 2.\n");
        return 1;
    }
    
    printf("Here is the Times Table for 2 to %d:\n", N);

    //prints top row of times table
    printf("   |");
    for (int i = 2; i <= N; i++) {
        printf("%5d", i);
    }

    //deals with first row of the table
    printf("\n---+");
    for (int i = 2; i < N; i++) {
        printf("-----+");
    }
    printf("\n");

    //prints numbers in the times table itself
    for(int i = 2; i <= N; i++){
        printf("%2d |", i);
        for(int j = 2; j <= N; j++){
            printf("%5d", i * j);
        }
        printf("\n");
    }
    
    return 0;
}