#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Progam unutk perusahaan cat di semarang
    /*kamus*/
    float luas_dinding;
    char nama_konsumen [30];
    char tgl_pembelian [15];
    int total_kaleng;
    int harga_dibayar;
    /*progam*/
    printf("--------------------\n");
    printf("PT Cat Semarang\n");
    printf("--------------------\n");
    printf("Nama Pembeli\t\t:");
    gets(nama_konsumen);
    fflush(stdin);
    printf("Luas Dinding(m2)\t:");
    scanf("%f",&luas_dinding);
    fflush(stdin);
    printf("Tanggal Pembelian\t:");
    gets(tgl_pembelian);

    printf("\n\n");

    printf("--------------------\n");
    printf("NOTA\n");
    printf("--------------------\n");
    printf("Nama Pembeli\t\t:%s\n",nama_konsumen);
    printf("Tanggal Pembelian\t:%s\n",tgl_pembelian);
    total_kaleng=luas_dinding/10;
    printf("Total kaleng\t\t:%d\n",total_kaleng);
    harga_dibayar=total_kaleng*25000;
    printf("Total Harga\t\t:%d rupiah",harga_dibayar);

    return 0;
}
