#include <stdio.h>
#include <time.h>
#include "answers.h"

/* TODO 
     - calculate the current length of answer arrays
     - two more rand variables to use for picking random answers
     - add more answsers
*/

int main()
{

    /* seed rand */
    srand( time(NULL) );
    
    /* random 0 or 1 */
    int i = rand() % 2;

    if( i == 1 ) {
        puts( yes[0] );
    }
    else {
        puts( no[0] );
    }

    return 0;
}
