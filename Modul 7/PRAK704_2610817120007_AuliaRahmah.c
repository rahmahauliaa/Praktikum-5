#include <stdio.h>
#include <string.h>

int main() {
    char description[1001] = "";

    fgets(description, sizeof(description), stdin);
    description[strcspn(description, "\r\n")] = '\0';

    if (strlen(description) > 20) {
        printf("%.20s...\n", description);
    } else {
        printf("%s\n", description);
    }

    return 0;
}