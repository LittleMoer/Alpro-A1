#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    int Vb;
    int Vk;

    printf("Masukan Jari2 dalam m; ");
    scanf("%d",&r);

    Vb = 4/3 * ( 3.1415 * (r*r*r));

    Vk = 0.5 * Vb;


    printf("Volume Bola: %d ", Vb);
    printf("  ");
    printf("Volume Kerucut: %d",Vk);

    return 0;

}
