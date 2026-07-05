#include <stdio.h>
int main(){
	float milhas, quilometros;
	
	printf("digite a quantidade de milhas");
	scanf("%f", &milhas);

	quilometros = milhas * 1.852;
	
	printf("a distancia em quilometros e: %.3f km\n", quilometros);
	return(0);
	
	
	
	
}
