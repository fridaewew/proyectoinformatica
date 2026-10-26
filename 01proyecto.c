/*leer tres numeros enteros y mostrar sus suma,
su producto y su promedio con dos decimales.
*/

#include <stdio.h>
main(){
//pedir datos
printf("ingresa el primer numero:");
float numeroUno;
scanf("%f",&numeroUno);
printf("ingresa el segundo numero:");
float numeroDos;
scanf("%f",&numeroDos);
printf("ingresa el tercer numero:");
float numeroTres;
scanf("%f",&numeroTres);

//operaciones
float suma;
float producto;
float promedio;

suma=numeroUno+numeroDos+numeroTres;
producto=numeroUno*numeroDos*numeroTres;
promedio=(numeroUno+numeroDos+numeroTres)/3;

//mostar datos
printf("\nLa suma de los numeros es: %.2f",suma);
printf("\nEl producto de los numeros es: %.2f",producto);
printf("\nEl promedio de los numeros es: %.2f",promedio);
}
