#include <stdio.h>

typedef struct Alumno{
    int edad;
    char nombre[50];
    int curso;
}Alumno;

int main(){
    Alumno lista[5];
    int i,j;
    for(i=0;i<5;i++){
        fflush(stdin);
        printf("\n\nNombre del alumno? ==> ");
        fgets(lista[i].nombre,50,stdin);
        printf("\n\nEdad del alumno? ==> ");
        scanf("%d",&lista[i].edad);
        printf("\n\nCurso del alumno? ==> ");
        scanf("%d",&lista[i].curso);
    }
    puts("\n==============================\n");
    printf("    Alumnos");
    puts("\n==============================\n");
    printf("NOMBRE\tEDAD\tCURSO\n");
    for(i=0;i<5;i++){
        printf("%s\t%d\t%d\n",lista[i].nombre,lista[i].edad,lista[i].curso);
    }
    return 0;
}