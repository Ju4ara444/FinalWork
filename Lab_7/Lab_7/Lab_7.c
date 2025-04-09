#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

void rvs(char* str) {
    if (*str == '\0') {
        return;
    }
    rvs(str + 1);
    printf("%c", *str);
}


int main() {
<<<<<<< HEAD
    char str[100], slovo[] = "slovooo", result[200] = "";
=======
    char str[100], slovaaaaaa[] = "slovooo", result[200] = "";
>>>>>>> Jukov
    int prcount = 0;

    system("chcp 1251");
    system("cls");

    printf("¬ведите строку: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char* token = strtok(str, " ");
    while (token != NULL) {
        strcat(result, token);
        strcat(result, " ");
        if (++prcount == 2) {
<<<<<<< HEAD
            strcat(result, slovo);
=======
            strcat(result, slovaaaaaa);
>>>>>>> Jukov
            strcat(result, " ");
        }
        token = strtok(NULL, " ");
    }

    if (result[strlen(result) - 1] == ' ') {
        result[strlen(result) - 1] = '\0';
    }
    rvs(result);

    return 0;
}