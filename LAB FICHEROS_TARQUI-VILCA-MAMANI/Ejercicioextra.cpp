#include <stdio.h>
#include <string.h>

int main() {
    FILE *ficherou;
    char nombre[50], seccion[10];
    int i;

    ficherou = fopen("personas.txt", "wt");
    if (ficherou == NULL) {
        printf("Error al abrir el archivo para escritura.\n");
        return 1; // Salir si no se pudo abrir el archivo
    }

    printf("Programa para guardar el nombre y secci�n de tres personas.\n");

    // Recolectar los datos de tres personas
    for (i = 1; i <= 3; i++) {
        printf("Ingrese el nombre de la persona %d: ", i);
        fgets(nombre, sizeof(nombre), stdin); // Usar fgets en lugar de gets
        nombre[strcspn(nombre, "\n")] = '\0'; // Eliminar el salto de l�nea del nombre

        printf("Ingrese la secci�n de %s: ", nombre);
        fgets(seccion, sizeof(seccion), stdin); // Usar fgets en lugar de gets
        seccion[strcspn(seccion, "\n")] = '\0'; // Eliminar el salto de l�nea de la secci�n

        // Guardar los datos de cada persona en el archivo
        fprintf(ficherou, "Nombre: %s, Secci�n: %s\n", nombre, seccion);
    }

    fclose(ficherou); // Cerrar archivo de escritura

    // Mostrar los datos guardados
    printf("\nLos datos guardados son:\n");

    // Volver a abrir el archivo en modo lectura
    ficherou = fopen("personas.txt", "rt");
    if (ficherou == NULL) {
        printf("Error al abrir el archivo para lectura.\n");
        return 1; // Salir si no se pudo abrir el archivo
    }

    char linea[100];
    while (fgets(linea, sizeof(linea), ficherou)) {
        puts(linea); // Mostrar cada l�nea le�da
    }

    fclose(ficherou); // Cerrar archivo de lectura

    printf("...Hasta luego!\n");
    return 0;
}


