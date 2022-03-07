#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1;
    int s2;
    int d1;
    int d2;
    int Luas;
    int Kel;

    printf("Masukan sisi 1 dalam m; ");
    scanf("%d",&s1);
    printf("Masukan sisi 2 dalam m; ");
    scanf("%d",&s2);
    printf("Masukan diagonal sisi 1 dalam m; ");
    scanf("%d",&d1);
    printf("Masukan daigonal sisi 2 dalam m; ");
    scanf("%d",&d2);

    Luas = 0.5 *d1 *d2;

    Kel = 2 * (s1 + s2);

    printf("Luas Layang-layang: %d",Luas);
    printf(" ");
    printf("Keliling layang-layang: %d",Kel);

    return 0;
}
