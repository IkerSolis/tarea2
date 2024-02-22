#include <stdio.h>

int main() {
    int opcion;

    do {
        printf("Menu de Historia de Shrek:\n");
        printf("1. Inicio de la historia\n");
        printf("2. Encuentro con el burro\n");
        printf("3. El rescate de la princesa\n");
        printf("4. Viaje al castillo de Lord Farquaad\n");
        printf("5. El torneo de lucha\n");
        printf("6. Shrek y Fiona\n");
        printf("7. El dragon y la boda\n");
        printf("8. La revelacion del secreto\n");
        printf("9. Final feliz\n");
        printf("10. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Habia una vez un ogro llamado Shrek que vivia en su pantano.\n");
                break;
            case 2:
                printf("Un dia, Shrek se encuentra con un burro parlante que cambia su vida.\n");
                break;
            case 3:
                printf("Shrek se embarca en una mision para rescatar a la princesa Fiona de la torre.\n");
                break;
            case 4:
                printf("Viajan al castillo de Lord Farquaad, el villano que quiere casarse con Fiona.\n");
                break;
            case 5:
                printf("Shrek participa en un torneo de lucha para salvar a Fiona.\n");
                break;
            case 6:
                printf("Shrek y Fiona comienzan a enamorarse durante su viaje de regreso.\n");
                break;
            case 7:
                printf("Deben enfrentar un dragon y planear una boda con un giro inesperado.\n");
                break;
            case 8:
                printf("Se revela el secreto de Fiona, que cambia todo.\n");
                break;
            case 9:
                printf("A pesar de los obstáculos, Shrek y Fiona tienen un final feliz juntos.\n");
                break;
            case 10:
                printf("Saliendo del programa. Adios\n");
                break;
            default:
                printf("Opcion no válida. Por favor, seleccione una opción valida porfavor.\n");
        }

    } while (opcion != 10);

    return 0;
}

