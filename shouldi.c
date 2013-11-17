#include <stdio.h>
#include <time.h>
#include "answers.h"

int array_length(char **);

/* TODO 
     - two more rand variables to use for picking random answers
     - add more answsers
*/

int main()
{

    int yes_length = array_length( yes );
    printf("length of yes: %d \n", yes_length);

    int no_length = array_length( no );
    printf("length of no: %d \n", no_length);



/*
    int no_length = array_length( no );
    printf("length of no: %d \n", no_length);
*/
    /* seed rand */
    srand( time(NULL) );
    
    /* random 0 or 1 */
    int i = rand() % 2;

    if( i == 1 ) {
       // puts( yes[0] );
    }
    else {
      //  puts( no[0] );
    }

    return 0;
}

/* This function counts the number of elements in a char *[],
   until I learn a better way */
int array_length(char **answer){
    /* puts( answer[1] ); */
    int count = 0;
    while( *answer != '\0' ){
        /* puts( *answer ); */
        answer++;
        count++;
    } 
    return count;
}
