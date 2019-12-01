#include <iostream>

using namespace std;

void geraNumerosRandomicos(int vet[], int tamVetor)
{
	int i;
	vet[i] = 1 + rand() % 100;
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

void exibeVetor(int vet[], int tamVetor)
{
	int i; cout << ("\nExibe vetor\n") << endl; for (i = 0; i < tamVetor; i++)
		cout << (vet[i]) << endl;

	cout << ("\n\n");
}

int opcaoMenu()
{
	int opcao;

	cout << "\nMENU\n------------------------------------\n" << endl;
	cout << "1 - Pesquisa sequencial" << endl;
	cout << "2 - Pesquisa binaria" << endl;
	cout << "3 - Exibir vetor" << endl;
	cout << "0 - Sair\n" << endl;
	cout << "Digite a opcao: " << endl;

	cin >> opcao;

	return opcao;
}

int main(int argc, char* argv[])
{
	//int vetor[n];
	int opcao = -1;

	//geraNumerosRandomicos(vetor, n);
	//ordenaVetor(vetor, n);

	do
	{
		switch (opcaoMenu())
		{

		case 1:
			//buscaSequencial(vetor, n);
			break;
		case 2:
			//buscaBinaria(vetor, n);
			break;
		case 3:
			//exibeVetor(vetor, n);
			break;
		default:
			return 0;

		}

	} while (opcao != 0);

	return 0;
}