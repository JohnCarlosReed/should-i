#include <stdio.h>
#include <time.h>
#include "answers.h"

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
