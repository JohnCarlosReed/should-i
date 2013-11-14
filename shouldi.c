#include <stdio.h>
#include <time.h>
 
int main()
{
    /* Save this for later 
    time_t current_time = time(NULL);
    char* c_time_string = ctime(&current_time);
    printf( "current time is %s", c_time_string );
    */

    srand( time(NULL) );
    int i, x;

    for( x = 1; x <= 8; x++){
        i = rand() % 2;
        printf("%d", i);
        if( x % 8 == 0 )
            printf("\n"); 
    }

    return 0;
}
