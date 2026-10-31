#include <stdio.h>

int main(void) {
    int n, i, data, target;
    int ditemukan = 0, posisi = 0;

    printf("Nilai target yang dicari: ");
    scanf("%d", &target);
    printf("Banyak data (n)         : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Masukkan data ke-%d: ", i);
        scanf("%d", &data);
        if (data == target) {
            ditemukan = 1;
            posisi = i;
            break;                     
        }
    }

    if (ditemukan) {
        printf("Target %d ditemukan pada data ke-%d. ", target, posisi);
        printf("Pencarian dihentikan.\n");
    } else {
        printf("Target %d tidak ditemukan dari %d data.\n", target, n);
    }
    return 0;
}