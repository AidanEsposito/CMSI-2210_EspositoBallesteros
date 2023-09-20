// Aidan Esposito, Juan Ballesteros

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRY 25

int main( int argc, char * argv[] ) {
   char input[25];
   char input1[25];
   char value[25];
   char concatString[25];  
   int i;
   int sum;
   int length;
   int average;
   int sevenCheck = 0;
   for( int i =0; i < MAX_ENTRY; i++ ) {
      printf( "\n  please enter a list of numbers " );
      char value = fgets(input, 10, stdin);
      length = sizeof(input)/sizeof(input[0]);  
      if(value == -9999){
        printf("\n all entries are complete");
      }
      else{
        for(int i =0; i < length; i++){
            sum = sum + input[i];
            average = sum / length;
            char concatString = strcat(input1, input[i]);
            for(i = 0; i < strlen(concatString); i++ ){
                if(strchr(concatString, '7' != NULL)){
                    sevenCheck++;
                }
            }
        }
        printf("\n Sum of Entry: %d", sum);
        printf("\n Average of Entry: %d", average);
        printf(" \n All values in one string: %s", concatString );
        printf("\n Amount of Sevens: %d", sevenCheck);
      }
   }
}


