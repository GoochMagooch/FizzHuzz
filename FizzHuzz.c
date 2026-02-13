#include <stdlib.h>
#include <stdio.h>

int main() {
    int num = 0;

    printf("Enter a number from 1 to 100: ");
    scanf("%d", &num);

    if (num >= 1 && num <= 100) {
        for (int i = 1; i <= num; i++) {
            if (i % 3 == 0 && i % 5 == 0){
                printf("FizzHuzz!\n");
            } else if (i % 3 == 0) {
                printf("Fizz\n");
            } else if (i % 5 == 0) {
                printf("Huzz\n");
            } else {
                printf("%d\n", i);
            }
        }
    } else {
        printf("Enter a number between 1 and 100! >:[\n");
    }

    return 0;
}
