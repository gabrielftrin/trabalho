/*
vetor de elementos inteiros de tamanho N
a ser especificado na linha de comando

o vetor de tamanho N deve ser gerado aleatoriamente, com valores entre 0 e 100

Para implementar a pesquisa binária, o programa deve,
primeiro, ordenar o vetor.
Para tanto, pode ser usado qualquer algoritmo de ordenação.

Os programas devem calcular e mostrar os tempos de execução da
busca sequencial e da
busca binária
*/

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

}


/*

void ordenaVetor(int vet[], int tamVetor)
{
	int i, key, j;

	for (i = 1; i < tamVetor; i++)
	{
		key = vet[i];
		j = i - 1;

		while (j >= 0 && vet[j] > key)
		{
			vet[j + 1] = vet[j];
			j = j - 1;
		}

		vet[j + 1] = key;
	}
}

void buscaBinaria(int vet[], int tamVetor)
{
	clock_t tempo;

	int limiteInf = 0;

	cout << ("BUSCA BINARIA\n") << endl; cout << ("Digite o número que deseja buscar: ") << endl; cin >> buscaNum;

	while ((limiteInf <= limiteSup) && (vet[meio] != buscaNum))
	{
		meio = (int)((limiteInf + limiteSup) / 2);

		if (buscaNum < vet[meio])
			limiteSup = meio - 1;
		else
			limiteInf = meio + 1;
	}

	cout << ("chegou aqui\n") << endl; if (vet[meio] == buscaNum) cout << ("Número %i encontrado na posição %i\n", buscaNum, meio) << endl; else cout << ("Número %i não encontrado\n", buscaNum) << endl;

	cout << ("Tempo de exec. da busca binária foi: segs\n\n", (clock() - tempo) / (double)CLOCKS_PER_SEC) << endl; // sTempo final }
}
*/

//O valor lido deve ser um inteiro maior que zero
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
	buscaSequencial();
	//buscaBinaria(tamanhoDoVetor);

	return 0;
}