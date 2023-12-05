#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"
#include <math.h>


//std::string reverse(std::string str);

int myfunc(int b) {
  //  char *buffer = malloc(sizeof(char) * 1000);
    //buffer [0] = b + 4;
    // здесь должен ругаться sonarcloud, т.к. утечка памяти
    //return buffer[0];
  return b + 4;
}

int val;

int fibonachi(int num) {
    int prev = 1;
    int next = 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num) {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}


int rootSearch(double a, double b, double c, double* x1, double* x2){
    // Рассчитываем дискриминант
    double d = b * b - 4 * a * c;

    if (a == 0 && b== 0)
    {
      return 0;
    }

    else if (a == 0 && b != 0)
    {
        *x1 = -c/b;
        *x2 = -c/b;

        return 1;
    }

    else if (d > 0) // Условие при дискриминанте больше нуля
    {
        *x1 = ((-b) - sqrt(d)) / (2 * a);
        *x2 = ((-b) + sqrt(d)) / (2 * a);

        return 2;
    }

    else if (d == 0) // Условие для дискриминанта равного нулю
    {
        *x1 = -(b / (2 * a));
        *x2 = -(b / (2 * a));

        return 1;
    }

    else if (d < 0) // Условие при дискриминанте меньше нуля
    {
        // нет корней
        return 0;
    }

  return 0;
}

void printStdoutMessages() {
    printf("This is a test message from myfunc.c\n");
    printf("Do not disturb\n");
}
