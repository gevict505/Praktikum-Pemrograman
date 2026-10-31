#include <stdio.h>
#include <string.h>

int main(void) {
    char username[50], password[50];
    printf("Masukkan Username: ");
    scanf("%s", username);
    printf("Masukkan Password: ");
    scanf("%s", password);
    
    if (strcmp(username, "admin") == 0 && strcmp(password, "admin123") == 0) {
        printf("Login Berhasil!\n");
    } else {
        printf("Login Gagal! Kredensial Salah.\n");
    }
    return 0;
}
