#include <stdio.h>

int main() {
    int c;
    char palabra[6] = "juego";  
    char palabraActual[6] = "-----";  
    int tamanio = 5;
    int vidasActuales = 3;
    int letrasAcertadas = 0;

    while (vidasActuales > 0 && letrasAcertadas < tamanio) {
        printf("\nVidas actuales: %d", vidasActuales);
        printf("\nPalabra: %s", palabraActual);
        printf("\nIngrese una letra (0 para salir): ");
        
        c = getchar();

        if (c == '0') {
            printf("\nEl juego terminó...");
            break;
        }

        int acierto = 0;
        for (int i = 0; i < tamanio; i++) {
            if (c == palabra[i] && palabraActual[i] == '-') {
                palabraActual[i] = c;
                letrasAcertadas++;
                acierto = 1;
            }
        }

        if (!acierto) {
            vidasActuales--;
            printf("\nINCORRECTO");
        }

        if (letrasAcertadas == tamanio) {
            printf("\n¡GANOUUU!");
            break;
        }
        if (vidasActuales == 0) {
            printf("\nPERDIOUUU");
            break;
        }

        while (getchar() != '\n');
    }

    return 0;
}

