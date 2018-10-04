#include <stdio.h>

int somaF(int filhos, int filhas);

int main(){
	int L, R, qdeFilhos;
	while (scanf("%d %d", &L, &R) && L+R > 0){
		qdeFilhos = somaF(L, R);
		printf("%d\n", qdeFilhos);
	}
	return 0;
}

int somaF(int filhos, int filhas){
	int totFilhos;
	
	totFilhos = filhos + filhas;
	
	return (totFilhos); 
}
