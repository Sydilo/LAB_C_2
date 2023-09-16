#include <stdio.h>

int isFibonacci(int n) {
    int a = 0, b = 1, c;
    while (b < n) {
        c = a + b;
        a = b;
        b = c;
    }
    return(b == n);
}

int main() {
    int num;
    printf("Введіть п'ятирозрядне ціле число: ");
    scanf("%d", &num);

    if (num < 10000 || num >= 100000) {
        printf("Введене число не є п'ятирозрядним. \n");
        return 1;
    }

    if (isFibonacci(num)) {
        int sum = 0;
        while (num > 0){
            sum += num % 10;
            num /= 10;
        }
        printf("Сумі цифр числа: %d\n", sum);
    } else {
        int product = 1;
        while (num > 0) {
            product *= num % 10;
            num /= 10;
        }
        printf("Добуток цифр числа: %d\n", product);
    }

    return 0;
}