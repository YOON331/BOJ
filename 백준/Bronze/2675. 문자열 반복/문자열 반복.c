#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main () {
    int a;
    scanf("%d", &a);
    char str[21];

    for (int i = 0; i < a; i++) {
        int tnum;
        scanf("%d %s", &tnum, str);
        
        for(int j = 0 ; j < strlen(str); j++) {
            for(int k = 0; k < tnum; k++) {
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
