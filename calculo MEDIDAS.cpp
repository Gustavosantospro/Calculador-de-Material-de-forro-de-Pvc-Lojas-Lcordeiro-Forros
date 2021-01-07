#include<stdio.h>
#include <string.h>

 void calcularmaterial(float principal, float secundaria){
		// calculando pvc
		float pvc, perfilF, tubo, parafuso, buchas;
		
		// CALCULO DE PVC
		/* Os forros de pvc são vendidos em placas/peças que variam de 6 à 8 metros de comprimento, variando a cada 1 metro. 
		Por conta disso, podem ser vendidas de acordo com a necessidade dos cômodos dos clientes: se as medidas são
		multiplas de 2 metros, podem ser utilizadas peças com 6, 8, para se ter melhor aproveitamento; se a medida
		de instalção for 3,50, opta-se por vender peças com 7m, tendo em vista o menor desperdício de material e assim 
		por diante.*/
			
		if(principal > 2.51 && principal <= 3.00 ){
			pvc = ((secundaria/0.2)/2);
			printf("\n %.2f Pecas c/ 6m \n  ", pvc);
		} else if( principal > 5.00 && principal <= 6.00){
			pvc = ((secundaria/0.2));
			printf("\n %.2f Pecas c/ 6m \n  ", pvc);
		} else if( principal > 6.00 && principal <= 7.00){
			pvc = ((secundaria/0.2));
			printf("\n %.2f Pecas c/ 7m", pvc);
		} else if(principal > 3.01 && principal <=3.50){
			pvc = ((secundaria/0.2)/2);
			printf("\n %.2f Pecas c/ 7m", pvc);
		} else if(principal > 3.51 && principal <= 4.00){
			pvc = ((secundaria/0.2)/2);
			printf("\n %.2f Pecas c/ 8m", pvc);
		} else if(principal > 7.00 && principal <= 8.00){
			pvc = ((secundaria/0.2));
			printf("\n %.2f Pecas c/ 8m", pvc);			
		} else if(principal > 2.01 && principal <=2.50){
			pvc = ((secundaria/0.2)/2);
			printf("\n %.2f Pecas c/ 5m", pvc);
		} else if( principal > 4.00 && principal <= 5.00){
			pvc = ((secundaria/0.2));
			printf("\n %.2f Pecas c/ 5m", pvc);
		}
		
		
		// CALCULO DE PERFIL F
		perfilF = (((principal*2)+(secundaria*2))/6);
		/* O perfil é um acessório da instalação do forro que é necessário nas 4 paredes do cômodo. É então feita
		a soma linear dos cômodos e dividido por 6m, pois cada perfil se vende a peça com 6 metros de comprimento*/
		
		// CALCULO DE TUBO
		tubo = (((principal/0.7)*secundaria)/6); // arredondamento
		/* Os tubos são acessórios que servem para fixação do forro de pvc: o pvc é fixado ao tubo por meio de 
		parafusos e os tubos são fixados no telhado, ou na lage, por meio de linhas de arame galvanizado. Os Tubos
		são fixados no sentindo transversal do sentindo de instalção do forro e a cada 70cm de distância*/		
		// CALCULO DE PARAFUSOS
		parafuso = ((((principal*2)+(secundaria*2))/0.3)+((secundaria/0.2)*(principal/0.7)));
		/* Para cada 30 cm de metro linear, no perfil, põe-se um parafuso e uma bucha; parafusos também são utilizados
		na fixação do forro: nesse caso, a medida secundária dividida p/ 0.2(pois cada placa de pvc têm 20cm)
		multilicado pela principal dividida por 0.7*/
		
		// CALCULO DE BUCHA
		buchas = (((principal*2)+(secundaria*2))/0.3);
		
		printf("\n Perfil(s) F=> %.2f ", perfilF); 
		printf("\n Tubo(s)    => %.2f ", tubo);
		printf("\n Parafusos  => %.2f ", parafuso);
		printf("\n Bucha(s)   => %.2f ", buchas);
	
		
		
	
}
	



 main(){
	
	float medidaprincipal, medidasecundaria;
	
	
	printf("MEDIDA PRINCIPAL => ");
	scanf("%f", &medidaprincipal);
	
	printf("MEDIDA SECUDARIA => ");
	scanf("%f", &medidasecundaria);
	
	calcularmaterial(medidaprincipal, medidasecundaria);
	
	
}
