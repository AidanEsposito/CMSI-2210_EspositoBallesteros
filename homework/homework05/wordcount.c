//Aidan Esposito / Juan Ballesteros


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main( int argc, char * argv[] ) {

    int wordcount = 0;
    int wordspace = 1;
    int c;

        if( argc != 2) {
            printf("\nNot Acceptable Argument, only use two arguments, one for the program and one for the file you want to count the words of.\n");
            return 1;
        }
        else{
            FILE* in = fopen(argv[1], "r");
            if( !in){
                printf("File %s not found \n", argv[1]);
                return 2;
            }
            while((c = fgetc(in)) != EOF){
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

