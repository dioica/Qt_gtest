#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"
#include <math.h>


//std::string reverse(std::string str);

int myfunc(int b) {
    char *buffer = malloc(sizeof(char) * 1000);
    buffer [0] = b + 4;
    // здесь должен ругаться sonarcloud, т.к. утечка памяти
    return buffer[0];
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


/*void root(double a, double b, double c, double* x1, double* x2) {

    if (a == 0)
    {
        printf("This is not a quadratic equation.\n");
    }
    else if ((c == 0) && (b == 0))
    {
        *x1 = 0;
        *x2 = 0;
    }
    else if (c == 0)
    {
        *x1 = 0;
        *x2 = -1 * (b/a);
    }
    else if (b == 0)
    {
        //printf("b = 0.\n");
        // проверить если знаки а с совпадают
        if (((a > 0) && (c > 0)) || ((a < 0) && (c < 0)))
        {
            printf("There are no roots!\n");
        }else{
            // если знаки а с различны
            *x1 = -1 * sqrt(  (-1 * c / a));
            *x2 = sqrt( -1 * (c/a));
        }
    }
    else if((b*b - 4*a*c) > 0) //Если дискриминант больше или равен 0
    {
        *x1 = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
        *x2 = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
    }
    else if ((b*b - 4*a*c) == 0)
    {
        *x1 = -b / (2 * a);
        *x2 = *x1;

    }
    else if ((b*b - 4*a*c) < 0)
    {
        printf("There are no roots!\n");

    }
    else
    {
        printf("There are no roots!\n");
    }

    //return a;
}*/


void rootSearch(double a, double b, double c, double* x1, double* x2){
    // Рассчитываем дискриминант
    double d = b * b - 4 * a * c;

    if (a == 0 && b== 0)
    {
        *x1 = -c;
        *x2 = -c;
    }

    else if (a == 0 && b != 0)
    {
        *x1 = -c/b;
        *x2 = -c/b;
    }

    else if (d > 0) // Условие при дискриминанте больше нуля
    {
        *x1 = ((-b) - sqrt(d)) / (2 * a);
        *x2 = ((-b) + sqrt(d)) / (2 * a);
    }

    else if (d == 0) // Условие для дискриминанта равного нулю
    {
        *x1 = -(b / (2 * a));
        *x2 = -(b / (2 * a));
    }

    else if (d < 0) // Условие при дискриминанте меньше нуля
    {
        // нет корней
    }
}

void printStdoutMessages() {
    printf("This is a test message from myfunc.c\n");
    printf("Do not disturb\n");
}
