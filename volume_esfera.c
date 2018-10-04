#include <stdio.h>
#include <math.h>

#define PI 3.1416

float volumeEsfera(float r);

int main(){
	float Volume, raio;
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	
	Volume = volumeEsfera(raio);
	
	printf("Volume da esfera: %.2f\n", Volume);
	return 0;
}

float volumeEsfera(float r){
	float vol;
	
	vol = (4/3) * PI * pow(r,3);
	
	return vol;
}
