#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[1001] = "", small[1001];

    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\r\n")] = '\0';

    int n = strlen(word);

    for (int i = 0; i < n; i++) {
        small[i] = tolower((unsigned char)word[i]);
    }
    small[n] = '\0';

    int palindrom = 1;
    for (int i = 0; i < n / 2; i++) {
        if (small[i] != small[n - 1 - i]) {
            palindrom = 0;
            break;
        }
    }

    if (palindrom) {
        printf("Kata '%s' adalah palindrom\n", word);
    } else {
        printf("Kata '%s' bukan palindrom\n", word);
    }

    return 0;
}