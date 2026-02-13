#include <stdio.h>

int main ()
{
    //pedir edad y verificar si es mayor de edad
    int edad;

    printf("introduce tu edad");
    scanf("%d", &edad);

    if(edad<18){
        printf("eres menor de edad");
    }else(printf ("eres mayor de edad"));

    return 0;
}
