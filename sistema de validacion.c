#include <stdio.h>

int main ()
{
    //sistema de validacion
    int promedio;
    int mteReprobadas;
    int edad;


    printf("cual es tu edad?\n");
    scanf("%d", &edad);

    printf("cual es tu promedio?\n");
    scanf("%d", &promedio);

    printf("cuantas materias reprobaste?\n");
    scanf("%d", &mteReprobadas);

    if(promedio<90){
        printf("tu promedio es muy bajo\n");
        }else(printf ("tu promedio es apto\n"));

    if(mteReprobadas <=0){
        printf("materias validas\n");
        }else (printf("demasiadas materias reprobadas\n"));

    if(promedio>90 && mteReprobadas<=0){
        printf("beca aprobada\n");
        }else(printf("beca rechazada\n"));

    if(mteReprobadas<3){
        printf("tienes oportunidad de reinscribirte\n");
        }else(printf("no puedes reinscribirte, demasiadas materias reprobadas\n"));

    if(mteReprobadas >3){
        printf("situacion critica por materias reprobadas\n");
        }else(printf("vas bien, sigue asi"));




    return 0;
}
