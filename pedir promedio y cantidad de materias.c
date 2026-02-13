#include <stdio.h>

int main ()
{
    //pedir promedio y materias reprobadas
    int promedio;
    int mteReprobadas;

    printf("cual es tu promedio?\n");
    scanf("%d", &promedio);

    printf("cuantas materias reprobaste?\n");
    scanf("%d", &mteReprobadas);

    if(promedio<90){
        printf("tu promedio es muy bajo\n");
    }else(printf ("tu promedio es apto\n"));

    if(mteReprobadas>3){
        printf("demasiadas materias reprobadas\n");
    }else (printf("materias validas\n"));

    if(promedio>90 && mteReprobadas<3){
        printf("beca aprobada");
        }else(printf("beca rechazada"));


    return 0;
}
