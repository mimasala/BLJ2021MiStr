#include <stdio.h>
#define SIZE 100

void initArray(int numbers[], int length_arr);

int main(void){

    int numbers[SIZE];
    initArray(numbers, (sizeof(numbers) / sizeof(int)) - 1);

    return 0;
}
void initArray(int numbers[], int length_arr){
    for (int i = 0; i < length_arr; ++i) {
        numbers[i] = 0;
        printf("%d", numbers[i]);
    }
}
