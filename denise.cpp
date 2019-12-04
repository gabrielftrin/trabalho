#include <iostream>
#include <time.h>

#define TAMANHO_MAXIMO_VETOR 1000

using namespace std;

//Declarar tamanho do vetor
int tamanhoDoVetor;

//Criar vetor de elementos
int vetorDeElementos[TAMANHO_MAXIMO_VETOR];

void buscaSequencial() {

	int valorBusca;
	cout << "Busca sequencial. Informe o valor: ";
	cin >> valorBusca;

	clock_t tempoInicial, tempoFinal;
	int valorEncontrado = 0;

	tempoInicial = clock();

	for (int i = 0; i < tamanhoDoVetor; i++)
	{
		if (vetorDeElementos[i] == valorBusca)
		{
			cout << "O valor encontrado na posicao: " << (i + 1) << endl;
			valorEncontrado = 1;
			break;
		}
	}

	tempoFinal = clock();
	double intervaloDeTempo = (tempoFinal - tempoInicial) * 1000.0 / CLOCKS_PER_SEC;

	printf("\nTempo de execucao da busca sequencial: %lf\n", intervaloDeTempo);
	if (valorEncontrado == 0) printf("Valor nao encontrado.\n");
}

void buscaBinaria() {

	clock_t tempoInicial, tempoFinal;
	tempoInicial = clock();

	//Ordenando vetor
	int menor = 0, aux = 0;
	for (int i = 0; i < tamanhoDoVetor; i++)
	{
		menor = i;
		for (int j = i + 1; j < tamanhoDoVetor; j++)
		{
			if (vetorDeElementos[j] < vetorDeElementos[menor])
			{
				menor = j;
			}
		}

		aux = vetorDeElementos[i];
		vetorDeElementos[i] = vetorDeElementos[menor];
		vetorDeElementos[menor] = aux;
	}

	int valorBusca, meio, inicio = 0, fim = tamanhoDoVetor - 1;
	int valorEncontrado = 0;

	cout << "Busca binaria. Informe o valor: ";
	cin >> valorBusca;

	inicio = 0; fim = tamanhoDoVetor - 1;

	while (inicio <= fim)
	{
		meio = (inicio + fim) / 2;

		if (valorBusca < vetorDeElementos[meio])
		{
			fim = meio - 1;
		}
		else if (valorBusca > vetorDeElementos[meio])
		{
			inicio = meio + 1;
		}
		else {
			cout << "Valor encontrado na posicao: " << meio << endl;
			valorEncontrado = 1;
			break;
		}
	}

	tempoFinal = clock();
	double intervaloDeTempo = (tempoFinal - tempoInicial) * 1000.0 / CLOCKS_PER_SEC;

	printf("\nTempo de execucao da busca sequencial: %lf\n", intervaloDeTempo);
	if (valorEncontrado == 0) printf("Valor nao encontrado.\n");
}

int main()
{
	//Solicitar tamanho do vetor
	cout << "Tamanho do vetor: ";
	cin >> tamanhoDoVetor;

	srand(tamanhoDoVetor);
	for (int i = 0; i < tamanhoDoVetor; i++)
	{
		//Gerar números entre 0 e 100
		vetorDeElementos[i] = rand() % 100;
		cout << vetorDeElementos[i] << endl;
	}

	//Realizar as operações e imprimir resultado na tela
	buscaSequencial(); cout << endl;
	buscaBinaria();

	return 0;
}