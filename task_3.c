#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Russian");

    int x, y;
    scanf_s("%d %d", &x, &y);
    if (x == 0) {
        if (y == 0) {
            printf("Точка в начале координат");
        }
        else {
            printf("Точка на оси ординат");
        }
    }
    else if (y == 0) {
        printf("Точка на оси абсцисс");
    }
    else {
        if (x > 0 && y > 0) { printf("Точка в первой четверти"); }
        if (x < 0 && y > 0) { printf("Точка во второй четверти"); }
        if (x < 0 && y < 0) { printf("Точка в третьей четверти"); }
        if (x > 0 && y < 0) { printf("Точка в четвертой четверти"); }
    }
}
