#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable : 4996)

void rvs(char* str) {
    if (*str == '\0') {
        return;
    }
    rvs(str + 1);
    printf("%c", *str);
}

int main() {
    char str[100], slovaaaaaa[] = "slovooo", result[200] = "";
    int prcount = 0;
    
    // ���������� � ������������� ������� �� 10 ��������� � �������� �� -10 �� 40
    int numbers[10];
    srand(time(0)); // ������������� ���������� ��������� �����
    
    printf("������ �� 10 ��������� ����� �� -10 �� 40:\n");
    for (int i = 0; i < 10; i++) {
        numbers[i] = rand() % 51 - 10; // ��������� ����� �� -10 �� 40
        printf("%d ", numbers[i]);
    }
    printf("\n\n");

    system("chcp 1251");
    system("cls");

    printf("������� ������: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char* token = strtok(str, " ");
    while (token != NULL) {
        strcat(result, token);
        strcat(result, " ");
        if (++prcount == 2) {
            strcat(result, slovaaaaaa);
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