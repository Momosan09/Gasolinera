#include <stdio.h>

int litros, acum, cont, contM, prom, max, porc, mas20, sigue;

main(){

do{

printf("  \n  Cuantos litros?\n  ");
scanf("%d", &litros);

acum= acum + litros;

cont= cont +1;

if(cont == 1||litros > max){
	max= litros;
	contM= cont;
}

if(litros >= 20){
mas20= +1;

}

printf("\n  ***Seguir?***  \n  0-No || 1-Si  \n  ");
scanf("%d", &sigue);

}while(sigue > 0);
porc = (mas20 * 100)/ cont;
prom = acum / cont;

printf("\n*****************************************************************\n");
printf("  -Litros totales = %d\n", acum);
printf("  -Promedio       = %d\n", prom);
printf("  -Porcentaje de personas que cargaron mas de 20L = %d\n", porc);
printf("  -En la carga numero = %d se registro la carga maxima de = %d  \n", contM, max);
printf("\n*****************************************************************\n");
}
