/*TP 0
1) Los tipos básicos son:
■ char (un elemento del tamaño de un byte)
■ int (un número entero con signo)
■ long (un entero largo)
■ float (un número en punto flotante)
■ double (un número en punto flotante, doble precisión)

2)La palabra word (palabra) en arquitectura de computadoras se refiere a la cantidad de bits que un procesador maneja como una unidad de datos en sus registros internos.
En una arquitectura de 32 bits, una word generalmente equivale a 32 bits (4 bytes).
En una arquitectura de 64 bits, una word equivale a 64 bits (8 bytes).
El tamaño de una word depende de la arquitectura del procesador y afecta la cantidad de datos que se pueden procesar en una sola operación.

3)El tamaño de int depende de la arquitectura del sistema.

En diferentes arquitecturas:
Arquitectura  | 	Tamaño de int
8 bits	            8 bits (1 byte)
32 bits	            32 bits (4 bytes)
64 bits	            32 bits (4 bytes) (puede ser 64 bits en algunos casos)

4)  %i imprime el valor numérico de a. osea 77
    %c imprime el carácter almacenado en a. osea M

5)
Para char i: su rango es -128 a 127
Para unsigned char j: su rango es 0 a 255

Puedes ejecutar este código en C para ver los valores exactos en tu sistema:
#include <stdio.h>
#include <limits.h>

int main() {
    printf("Rango de char con signo: %d a %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Rango de unsigned char: %d a %d\n", 0, UCHAR_MAX);
    return 0;
}

6)
'a' en ASCII -> 97 en decimal -> 01100001 en binario

j = 77 -> 01001101 en binario

k = 0x4D (hexadecimal) -> 77 en decimal -> 01001101 en binario

7)
    integer a; (no existe integer en C)
    short i,j,k; ✔
    long float (h); (long float no existe)
    double long d3; (el orden debe ser double long)
    unsigned float n;(float no puede ser unasigned)
    char 2j; (los nombres de variable no pueden empezar con numero)
    int MY; ✔
    float ancho, alto, long; (long es una palabra reservada en C)
    bool i; (no existe boolean en C)

8)
Tamaño de char: 1 bytes        
Tamaño de short: 2 bytes       
Tamaño de int: 4 bytes
Tamaño de long: 4 bytes        
Tamaño de long long: 8 bytes   
Tamaño de float: 4 bytes       
Tamaño de double: 8 bytes      
Tamaño de long double: 16 bytes

9)

10)a-
int a, b; -> error: convertir a 'a' y 'b' en float
float r;
a = 5;
b = 2;
r = a / b;

b-
int a, b, c, d;
a = 1;
b = 2;
c = a / b; (Ambos son enteros, así que c = 0 (truncamiento))
d = a / c; (Error de división por cero)
*/
