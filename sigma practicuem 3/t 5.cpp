#include <stdio.h>
#include <string.h>

int main(void) {
    char username[20], password[20];
    
    printf("Masukkan Username: ");
    scanf("%s", username);
    printf("Masukkan Password: ");
    scanf("%s", password);

    
    if (strcmp(username, "admin") != 0) {
        printf("Username salah!\n");
        
   
    } else if (strcmp(password, "13579") != 0) {
        printf("Password salah!\n");
        
        
    } else {
        printf("Login Berhasil!\n");
    }

    return 0;
}
