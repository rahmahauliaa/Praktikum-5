#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[1001] = "";

    printf("Kalimat : ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\r\n")] = '\0';

    int vokal = 0, konsonan = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        char c = tolower((unsigned char)sentence[i]);
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            vokal++;
        } else if (isalpha((unsigned char)c)) {
            konsonan++;
        }
    }

    printf("Jumlah Vokal : %d\n", vokal);
    printf("Jumlah Konsonan : %d\n", konsonan);

    return 0;
}