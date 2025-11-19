#include <stdio.h>
#include <string.h>

int main() {
    char kode[1000];
    char pesan[1000];

    fgets(kode, 1000, stdin);
    kode[strcspn(kode, "\n")] = 0;

    fgets(pesan, 1000, stdin);
    pesan[strcspn(pesan, "\n")] = 0;

    if (strlen(kode) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu");
    } else {
        int bintang = 0;
        int pagar = 0;
        int panjang = strlen(kode);

        for (int i = 0; i < panjang; i++) {
            if (kode[i] == pesan[i]) {
                if (kode[i] == ' ') {
                    printf(" ");
                } else {
                    printf("*");
                    bintang++;
                }
            } else {
                printf("#");
                pagar++;
            }
        }
        printf("\n");
        printf("* = %d\n", bintang);
        printf("# = %d\n", pagar);

        if (bintang > pagar) {
            printf("Pesan Asli");
        } else {
            printf("Pesan Palsu");
        }
    }
    printf("\n");
    return 0;
}