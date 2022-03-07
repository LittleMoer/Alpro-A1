#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v0;
    int t;
    int y;

    printf("Masukan Kecepatan awal dalam m/s; ");
    scanf("%d",&v0 );
    printf("Masukan Waktu dalam satuan detik; ");
    scanf("%d",&t );

    y = v0 * t - 0.5 * (9.8 * (t*t));

    printf("Jarak yang ditempuh: %d", y);

    return 0;

}
