#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*kamus*/
    float voltabreak;
    float volkel;
    float volairtum;
    float diameter;
    float jarijari;

    /*progam*/
    printf("==============================\n");
    printf("Menghitung Volume Air yang Tumpah\n");
    printf("==============================\n");
    diameter=4;
    jarijari=diameter/2;
    voltabreak=(jarijari*jarijari*3.14*10)+(jarijari*jarijari*jarijari*3.14*2/3);
    printf("Masukan Volume Kelereng:");scanf("%f",&volkel);
    volairtum=voltabreak-volkel;
    printf("Volume Air yang tumpah adalah:%.2f cm^3",volairtum);


    return 0;
}
