#define _CRT_SECURE_NO_WARNINGS
/* ���� �ڵ� */
#include <stdio.h>

int main() {
    int arr[10];
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= 10; i++) {
        printf("%d \n", arr[i]);
    }
    return 0;
}