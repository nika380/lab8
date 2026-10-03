// Студентка: Захарова Вероника Сергеевна
// Группа: Пи1-1
#include <stdio.h>
#define MAX_SIZE 100

int main(void)
{
    int a[MAX_SIZE];
    int n;
    int x, y;
    int count = 0;
    int first = -1;
    int last = -1;

    printf("Введите количество элементов: ");

    if (scanf("%d", &n) != 1) {
        printf("Input error\n");
        return 1;
    }

    if (n <= 0 || n > MAX_SIZE) {
        printf("Value error\n");
        return 1;
    }

    printf("Введите элементы массива:\n");

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Input error\n");
            return 1;
        }

        if (a[i] < -1000 || a[i] > 1000) {
            printf("Value error\n");
            return 1;
        }
    }

    printf("Введите x и y: ");

    if (scanf("%d %d", &x, &y) != 2) {
        printf("Input error\n");
        return 1;
    }

    if (x < -1000  x > 1000  y < -1000 || y > 1000) {
        printf("Value error\n");
        return 1;
    }

    /* Массив до обработки */
    printf("До: ");
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);

        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    /* Поиск и замена всех совпадений */
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            if (count == 0) {
                first = i;
            }

            last = i;
            count++;

            a[i] = y;
        }
    }

    /* Массив после обработки */
    printf("После: ");
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);

        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    /* Результат */
    if (count == 0) {
        printf("Not found\n");
        printf("count = 0\n");
    } else {
        printf("count = %d\n", count);
        printf("first = %d\n", first);
        printf("last = %d\n", last);
    }

    return 0;
}
