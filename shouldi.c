#include <stdio.h>
#include <time.h>
 
int main()
{
    /* seed rand */
    srand( time(NULL) );

    int i = rand() % 2;

    if( i == 1 ) {
        printf("Why, yes you should.");
    } else {
        printf("No, I would certainly not do that.");
    }
    return 0;
}
