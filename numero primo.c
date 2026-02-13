#include <stdio.h>

int main()
{
    int num, i, esPrimo;

    printf("ingresa un numero\n");
    scanf("%d", &num);

    //par o impar

    if(num % 2 == 0){
        printf("es par\n");
    }else (printf("es impar\n"));


    if (num <= 1) {
        esPrimo = 0;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                esPrimo = 0;
                break;
            }
        }
    }

    if (esPrimo) {
        printf("%d es un numero primo.\n", num);
    } else {
        printf("%d no es un numero primo.\n", num);
    }

    return 0;
}



