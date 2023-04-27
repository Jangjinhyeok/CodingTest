#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* myString) {
    int size = strlen(myString) + 1;
    char* answer = (char*)malloc(size);
    char arr[100];
    strcpy(arr, myString);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 96 && arr[i] < 123)
            arr[i] = arr[i] - 32;
    }
    answer = arr;
    return answer;
}