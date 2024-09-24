#include <stdio.h>
#include <string.h>
void concatenate(char s[], char t[]) {
    int i = 0, j = 0;

    while (s[i] != '\0') {
        i++;
    }
    while ((s[i++] = t[j++]) != '\0');

}


int main() {

    char s[30];
    char t[30];
    printf("Primeira String: ");
    scanf("%s", s);
    printf("Segunda String: ");
    scanf("%s", t);
    concatenate(s, t);

    printf("%s", s);

    return (0);
}
