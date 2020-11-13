#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void prog1() {
    int a, b, c = 0;float h;
  
    printf("Введите a ");
    scanf("%d", &a);
    printf("Введите b ");
    scanf("%d", &b);
    printf("Введите h ");
    scanf("%f", &h);
    printf("\nмоя функция y=16/(8-2^x)");

    float i = a;

        while(i <= b){
        if ( (8 - pow(2,i)) != 0) {
            c++;
            printf("\n%d",c);
            printf("     %f", i);
            printf("     %f", 16 / (8 - pow(2,i)));
       }
        else {
            c++;
            printf("\n%d", c);
            printf("     %f", i);
            printf("     ***");
        }

        i = i + h;

    }

}
void prog2() {
    int a=22, b=8,c=2002,d,f;// первые 3 числа,дата др)

    printf("Введите число ");
    scanf("%d", &d);

    for (int i = 0; i < d; i++) {
        f = c + a;
        printf(" %d",f);
        a = b;
        b = c;
        c = f;

    }

}
void prog3() {
    float f, x, a, b, e, s;
    int n;

    printf("Введите икс для  f(x)=arcsin: ");
    scanf_s("%f", &x);
    printf("Введите эпсилон ");
    scanf_s("%f", &e);

    n = 0;

    b = x;
    s = x;

    f = asin(x);
    do {
        a = b; 
        b = (a * (pow(x, 2))) * ((pow(2.0f * n + 1, 2)) / (2 * (n + 1) * (2 * n + 3)));
        s += b; 
        n += 1;
    } while ((a - b) > e);

    printf("\n");
    printf("функция равна         %f\n", f);
    printf("Сумма равна  %f\n", s);


}
void prog4() {
    int a,b=0;
    printf("Введите число ");
    scanf("%d", &a);

    while (a/10  > 0) {
        while (a >0)
        {
            b = b + a % 10;
            a = a / 10;
        }
        printf("  %d", b);
        a = b;
        b = 0;

    }
    printf("\nОтвет %d", a);

}
void prog5() {
    int a, b = 0;
    printf("Введите число ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        b = 0;
        if (a % i == 0 ) {
            for (int j = 2; j <= i/2  ; j++)
            {
                if (i%j==0) {
                    b++;
                }


            }
            if (b == 0) {
                printf(" %d ", i);
            }
        }
        


    }
}
void prog6() {
    int a, b = 0,c=0;
    printf("Введите число ");
    scanf("%d", &a);
    b = a * (a - 1) + 1;
    for (int i = 0; i < a; i++)
    {
        c = c + b;
        printf(" %d ", b);
        b = b + 2;
        
    }
    printf("Ответ %d ", c);
}
void prog7() {
    int a, b = 0, c = 20;
    printf("Введите число ");
    scanf("%d", &a);
    
    while (a > 0) {
        if (a - pow(2, c) >= 0) {
            a = a - pow(2, c);
            b++;
        }
        c--;

    }
    printf("Ответ %d ",b);
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int q = -1;

    while (q != 0) {
        printf("\n\n\n1)  Напечатать таблицу значений функции на отрезке [а, b] с шагом h.\nФункцию придумать самим, она должна иметь разрыв на отрезке[а, b].");
        printf("\n2) Yn=Y(n-1)+Y(n-3)");
        printf("\n3) Вычислить сумму ряда Маркелона");
        printf("\n4) Найти цифровой корень натурального числа");
        printf("\n5) Вывести из каких простых чисел состоит число");
        printf("\n6) Возводить число в 3 степень");
        printf("\n7) кол-во единиц в двоичной записи данного числа");



        printf("\nВведите число ");
        scanf_s("%d", &q);
        switch (q) {
        case 1: {
            prog1();
            break;
        }
        case 2: {
            prog2();
            break;
        }
        case 3: {
            prog3();
            break;
        }
        case 4: {
            prog4();
            break;
        }
        case 5: {
            prog5();
            break;
        }
        case 6: {
            prog6();
            break;
        }
        case 7: {
            prog7();
            break;
        }
        }


    }









    return 0;
}