#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    a=12;
    b=5;
    c=b-a;

    printf("nilai c adalah: %d",c);

    /*
    baris   A       B       C
    1       null    null    null
    2       12      null    null
    3       12      5       null
    4       12      -7      -7
    5       -7      -7      -7
    */

    return 0;
}
