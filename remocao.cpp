#include <iostream>

int busca (int num, int vetor[]){
	vetor[20] = num;
	int i = 0;
	while (vetor[i] !=num && i<20){
		i++;
	}

	if (i!=20) return i;
	else return -1;
}

void remove (int num, int &nElem, int *vetor) {
	 
	if(nElem != 0) {
		int indice = busca(num, vetor);
		if (indice != -1) {
			for (int i=indice; i<20; i++){
				vetor[i] = vetor[i+1];
			}
			std::cout << "Número " << num << " Removido com sucesso" << std:: endl;
			nElem--;
		}
		else std::cout << "O Número " << num << " Não se encontra na lista" << std::endl;
	}
	else std::cout << "A lista está vazia" << std::endl;
	
}

int main() {
	int vetor[21] = {1, 2, 5, 6 ,8 ,9, 12, 15, 16, 17, 18, 21, 23, 24, 25, 27, 32, 39, 41, 42};
  int nElem = 20;
	int num;
	bool continuar = true;
	char decisao;
	while (continuar == true) {
		std::cout << "Digite o número que deseja remover" << std::endl;
		std::cin >> num;
		remove(num, nElem, vetor);
		std::cout << "Deseja continuar? [Y/N]" << std::endl;
		std::cin >> decisao;
		if (decisao == 'N' || decisao == 'n') continuar = false;
	}
}