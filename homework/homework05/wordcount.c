//Aidan Esposito / Juan Ballesteros


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//Main used to count number of words in a given text file or directory path
int main( int argc, char * argv[] ) {

    int wordcount = 0; //variable to store wordcount
    int wordspace = 1; //variable to help check for spaces
    int c; //variable to compare to open file

        //Checks for correct number of arguments
        if( argc != 2) {
            printf("\nNot Acceptable Argument, only use two arguments, one for the program and one for the file you want to count the words of.\n");
            return 1;
        }
        else{
            FILE* in = fopen(argv[1], "r");
            if( !in){ //checks if the file exists on your computer
                printf("File %s not found \n", argv[1]);
                return 2;
            }
            while((c = fgetc(in)) != EOF){ //checks for whitespace in the file and updates word count
                if(isspace(c)){
                    wordspace = 1;
                }
                else if(wordspace == 1){
                    wordcount ++;
                    wordspace = 0;  
                }
            }   
        printf("The amount of words in this file is: %d\n", wordcount);
        fclose( in );
        return 0;
    }
}

