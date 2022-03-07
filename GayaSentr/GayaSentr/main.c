#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    int v;
    int r;
    int F;

    printf("Masukan Massa dalam Kg; ");
    scanf("%d",&m );
    printf("Masukan Kecepatan dalam m/s; ");
    scanf("%d",&v );
    printf("Masukan jari2 dalam m; ");
    scanf("%d",&r );

    F = m * ((v*v)/ r);

    printf("Gaya yang dihasilkan dalam satuan Newton: %d", F);

    return 0;

}
