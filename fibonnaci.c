#include <stdio.h>
int main(){
	int soma=0,somaAnt=1,somaAntAnt=0,numUser=0;
	 printf( "Escreva um numero ");
	 scanf ("%d", &numUser);
	 
	 while(soma<numUser){
	 	soma=somaAnt+somaAntAnt;
	 	somaAntAnt=somaAnt;
	 	somaAnt=soma;
	 	
	 	if (numUser==soma){
	 		printf("Numero e Fibonacci");
		}
		else if(soma>numUser){
			printf("Nao e numero Fibonacci");
		}
	}
}