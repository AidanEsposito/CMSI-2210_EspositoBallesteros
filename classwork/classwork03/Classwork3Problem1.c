#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define  MAX_STRING   5999

int main( int argc, char * argv[] ) {
    
    char outputString[25] = "\0"
    char input[25] = outputString[25];
    int index = 0;
    int value = 0;

    char alphabet[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", 
    "k", "l", "m", "n", "o", "p", "q", "r", "s","t", "u", "v", "w", "x", "y", "z"}

    char * symbol[] = {"Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Golf", "Hotel", "India",
    "Juliett", "Kilo", "Lima", "Mike", "November", "Oscar", "Papa", "Quebec", "Romeo", "Sierra", "Tango",
    "Uniform", "Victor", "X-ray", "Yankee", "Zulu" }

    if( argc == 1 ) {
      printf( "\n\n   Sorry, you need to provide a single character" \
              " or up to 5999.\n\n" );
      exit( 0 );
   }

   char userString = atoi( argv[1] );
   char lowerUserString = tolower(userString);
   if( lowerUserString > MAX_STRING ) {
      printf( "\n\n   Sorry, you need to provide a single integer" \
              " less than or equal to %d.\n\n", MAX_STRING );
      exit( 0 );
   }

   while(lowerUserString) {                             // while input number is not zero
      while( lowerUserString / del[index] ) {             // while a number contains the largest key value possible
         strcat( outputString, symbol[index] ); // append the symbol for this key value to res string
         value -= del[index];                   // subtract the key value from number
      }
      index++;                                  // proceed to the next key value
   }
   printf("Please Enter a word");
   gets(input);
   printf( "\n\n   Nato Alphabet for Values %d: %s\n\n", atoi( argv[1] ), input);

}