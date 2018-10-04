#include <stdio.h>

int dormir(int h1, int m1, int h2, int m2);

int main(){
	int h1, m1, h2, m2, minutos;
	while(1){
		scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
		if(h1==0 && m1==0 && h2==0 && m2==0)
			break;
	//ou
	/*
	while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2) && h1+m1+h2+m2 > 0){
		minutos = dormir(h1, m1, h2, m2);
		printf("%d\n", minutos);
	}
	*/
		
		minutos = dormir(h1, m1, h2, m2);
		printf("%d\n", minutos);
	}
	return 0;
}

int dormir(int h1, int m1, int h2, int m2){
	int descanso;
	
	if(h2 < h1)
		h2 += 24;
	else if(h2==h1 && m2<m1)
		h2 += 24;
			
	descanso = (h2*60+m2) - (h1*60+m1);
	
	//ou
	/*
	int descanso;
	int tempoIni = h1*60 + m1;
	int tempoFin = h2*60 + m2;
	
	if(tempoFin <= tempoIni)
		tempoFin += 24*60;
	
	descanso = tempoFin-tempoIni;
	*/
	return descanso;
}
