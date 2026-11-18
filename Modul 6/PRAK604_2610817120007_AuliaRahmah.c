#include <stdio.h>
#include <string.h>

int main() {
    char code[1000], message[1000], result[1000];
    int i, star = 0, hashtag = 0;

    fgets(code, sizeof(code), stdin);
    fgets(message, sizeof(message), stdin);
    code[strcspn(code, "\r\n")] = '\0';
    message[strcspn(message, "\r\n")] = '\0';

    if (strlen(code) != strlen(message)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    for (i = 0; code[i] != '\0'; i++) {
        if (code[i] == ' ' && message[i] == ' ') {
            result[i] = ' ';
        } else if (code[i] == message[i]) {
            result[i] = '*';
            star++;
        } else {
            result[i] = '#';
            hashtag++;
        }
    }
    result[i] = '\0';

    printf("%s\n", result);
    printf("* = %d\n", star);
    printf("# = %d\n", hashtag);
    if (star >= hashtag)
        printf("Pesan Asli\n");
    else
        printf("Pesan Palsu\n");
    return 0;
}