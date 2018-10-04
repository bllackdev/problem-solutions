#include<stdio.h>
#include<math.h>

typedef struct _p{
	float x;
	float y;
}ponto;

float DistanciaPontos(ponto p1, ponto p2);

int main(){
	ponto p1, p2;
	float distancia;
	printf("Digite X e Y do primeiro ponto: ");
	scanf("%f %f ", &p1.x, &p1.y);
	printf("Digite X e Y do segundo ponto: ");
	scanf("%f %f ", &p2.x, &p2.y);
	
	distancia = DistanciaPontos(p1,p2);
	printf("Distancia dos Pontos: %.1f\n", distancia);
	return 0;
}

float DistanciaPontos(ponto p1, ponto p2){
	float resul, a, b;
	
	a = p1.x - p1.y;
	b = p2.x - p2.y;
	
	resul = sqrt(pow(a,2) + pow(b,2));
	
	return resul;
}
