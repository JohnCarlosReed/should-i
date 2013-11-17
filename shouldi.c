#include <stdio.h>
#include <time.h>
#include "answers.h"

int array_length( char ** );

#define YES 1
#define NO 0

int main()
{

    int yes_count = array_length( yes );
    int no_count = array_length( no );

    /* seed rand */
    srand( time( NULL ) );
    
    /* random YES or NO */
    int yes_or_no = rand() % 2;

    /* array index to access for yes and no arrays */
    int yes_idx = rand() % yes_count;
    int no_idx  = rand() % no_count;

    if( yes_or_no == 1 ) {
        puts( yes[ yes_idx ] );
    }
    else {
        puts( no[ no_idx ] );
    }

    return 0;
}

/* This function counts the number of elements in a char *[],
   until I learn a better way */
int array_length( char **answer ){
    int count = 0;
    while( *answer != '\0' ){
        answer++;
        count++;
    } 
    return count;
}
