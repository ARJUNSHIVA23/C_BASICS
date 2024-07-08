#include <stdio.h>
const MAX = 4;
void main () 
{
    char *names[] = {"Zara","Hina","Nuha", "Sara"};
    int i = 0;
    for( i = 0; i < MAX; i++) {
    printf("Value of names[%d] = %s\n", i, names[i] );
    }
}
