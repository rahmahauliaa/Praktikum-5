#include <stdio.h>
#include <string.h>

int main() {
    char first_name[100] = "", last_name[100] = "", full_name[210];

    printf("Nama Depan : ");
    fgets(first_name, sizeof(first_name), stdin);
    first_name[strcspn(first_name, "\r\n")] = '\0';

    printf("Nama Belakang : ");
    fgets(last_name, sizeof(last_name), stdin);
    last_name[strcspn(last_name, "\r\n")] = '\0';

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    printf("Nama Lengkap : %s\n", full_name);

    int length = 0;
    for (int i = 0; full_name[i] != '\0'; i++) {
        if (full_name[i] != ' ') {
            length++;
        }
    }
    printf("Panjang Nama (tanpa spasi) : %d\n", length);

    return 0;
}