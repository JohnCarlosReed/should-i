#include <stdio.h>
#include <time.h>
 
int main()
{
    /* put these in another file? */
    const char* yes[] = { "Yes.", "Oh yea." };
    const char* no[] = { "No.", "No way." };

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
