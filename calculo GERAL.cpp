#include <stdio.h>
#include <string.h>

 float calcularmaterial(float metragem){
		// calculando pvc
		float pvc, perfiltubo, parafuso, buchas;
		
		pvc=(metragem/1.2);
		perfiltubo= ((metragem/9)*2);	 
		parafuso= ((metragem/9)*100);
		buchas= ((metragem/9)*40);
		
	printf("\n %f pecas c/ 6 metros", pvc); // depois incluir tamanhos
	printf("\n %f perfil F", perfiltubo );
	printf("\n %f Tubos", perfiltubo);
	printf("\n %f parafusos", parafuso);
	printf("\n %f buchas", buchas);
	
	
}


 main(){
	
	float metragem;
	
	
	printf("entre com o a metragem total => ");
	scanf("%f", &metragem);
	
	
	
	calcularmaterial(metragem);
	
}



/*		printf("\n tamanhos: ");
	for(int i=5; i<9; i++){
		printf("\n >com %d metros? ", i);
	}	
	scanf("\n %d ", &tamanho);	
	
	if(tamanho=5){
			pvc = (metragem/1);
			
		}
		else if(tamanho = 6){
			pvc = (metragem/1.2);
			
		}
		else if(tamanho = 7){
			pvc = (metragem/1.4);
			
		}
		else if(tamanho = 8){
			pvc = (metragem/1.6);
		}
		else{
			printf("refaça");
			/*int res;
			while(tamanho <5 || tamanho >8  ){
			printf("\n tamanho nao encontrado. Tente novamente ou desista");
			printf("\n 01- Tentar Novamente: ");
			printf("\n 02- Desistir: ");
			scanf("%d", &res);
			if(res = 01){
				
			}*/
