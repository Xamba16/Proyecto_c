#include <stdio.h>

int main() {
    int opcion;
    float cantidad, resultado;
    
    // Tasas de cambio aproximadas (puedes actualizarlas)
    float usd_a_gtq = 7.80;
    float eur_a_gtq = 8.45;
    float eur_a_usd = 1.08;

    printf("--- CONVERSOR DE MONEDAS MULTIPLE ---\n");
    printf("1. Dolares (USD) a Quetzales (GTQ)\n");
    printf("2. Quetzales (GTQ) a Dolares (USD)\n");
    printf("3. Euros (EUR) a Quetzales (GTQ)\n");
    printf("4. Quetzales (GTQ) a Euros (EUR)\n");
    printf("5. Euros (EUR) a Dolares (USD)\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            resultado = cantidad * usd_a_gtq;
            printf("%.2f USD equivalen a %.2f GTQ\n", cantidad, resultado);
            break;
        case 2:
            resultado = cantidad / usd_a_gtq;
            printf("%.2f GTQ equivalen a %.2f USD\n", cantidad, resultado);
            break;
        case 3:
            resultado = cantidad * eur_a_gtq;
            printf("%.2f EUR equivalen a %.2f GTQ\n", cantidad, resultado);
            break;
        case 4:
            resultado = cantidad / eur_a_gtq;
            printf("%.2f GTQ equivalen a %.2f EUR\n", cantidad, resultado);
            break;
        case 5:
            resultado = cantidad * eur_a_usd;
            printf("%.2f EUR equivalen a %.2f USD\n", cantidad, resultado);
            break;
        default:
            printf("Opcion no valida.\n");
    }

    return 0;
}