/*
vetor de elementos inteiros de tamanho N
a ser especificado na linha de comando

o vetor de tamanho N deve ser gerado aleatoriamente, com valores entre 0 e 100

Para implementar a pesquisa binária, o programa deve, primeiro, ordenar o vetor.
Para tanto, pode ser usado qualquer algoritmo de ordenação.

Os programas devem calcular e mostrar os tempos de execução da
busca sequencial e da
busca binária
*/

#include <iostream>
#include <sys/time.h>

using namespace std;

void buscaSequencial(int tamanho) {

	//Criar vetor de elementos
	int vetorDeElementos[tamanho];

	srand(tamanho);
	for (int i = 0; i < tamanho; i++)
	{
		//Gerar números entre 0 e 100
		vetorDeElementos[i] = rand() % 100;
	}

	int valorBusca = -1;

	cout << "Busca sequencial. Informe o valor: ";
	cin >> valorBusca;


	/*
	int i, valorBusca, achou = 0;
	struct timeval tv1, tv2;
	double t1, t2;

	
	// recupera o tempo inicial -
	gettimeofday(&tv1, NULL);
	t1 = (double)(tv1.tv_sec) + (double)(tv1.tv_usec) / 1000000.00;
	for (i = 0; i < TAMANHO; i++) {
		if (vetorDados[i] == valorBusca) {
			cout << "Valor encontrado na posicao: " << i << endl;
			achou = 1; break;
		} // if
	} // for
	// recupera o tempo final -
	gettimeofday(&tv2, NULL);
	t2 = (double)(tv2.tv_sec) + (double)(tv2.tv_usec) / 1000000.00;
	// calcula e imprime o tempo total de execucao
	printf("\nO tempo de execucao foi: %lf\n", (t2 - t1));
	if (!achou) cout << "Valor nao encontrado!\n" << endl;
	*/
}

void buscaBinaria() {

}


/*
void buscaSequencial(int vet[], int tamVet)
{
	clock_t tempo;
	int i, buscaNum;

	cout << ("BUSCA SEQUENCIAL\n") << endl; cout << ("Digite o numero que deseja buscar: ") << endl; cin >> buscaNum;

	i = 0; while ((i < tamVet) && (vet[i] != buscaNum)) i++;

	if (vet[i] == buscaNum) cout << ("Número encontrado na posição %i\n", buscaNum, i) << endl;
	else cout << ("Número não encontrado", buscaNum) << endl;

	cout << ("Tempo de execucao da busca sequencial foi:", (clock() - tempo) / (double)CLOCKS_PER_SEC) << endl;
}

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
	//Declarar tamanho do vetor
	int tamanhoDoVetor = -1;

	//Solicitar tamanho do vetor
	cout << "Tamanho do vetor: ";
	cin >> tamanhoDoVetor;

	//Realizar as operações e imprimir resultado na tela
	buscaSequencial(tamanhoDoVetor);
	//buscaBinaria(tamanhoDoVetor);

	return 0;
}