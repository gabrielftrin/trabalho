#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <ctime>

/*
    1- ler n na chamada do programa e cria vetor de tamanho
    2- gera números aleatorios para vetor[n] (entre 0-100)
    3- pesquisa sequencial
    4- ordena vetor
    5- pesquisa binaria
    6- calcular tempo de busca seq e busca bin
*/

using namespace std;		//fazer alguns ajustes af

/* Função que gera números aleatórios
 * Parâmetros:
 *  vet[] = vetor de inteiros
 *  tamVetor = tamanho do vetor */
void geraNumerosRandomicos(int vet[], int tamVetor){
    int i;
    //std::rand();
    for (i = 0; i < tamVetor; i++){
		cout<<"Os valores aleatorio gerados sao: ";        
        vet[i] = 1+rand() % 100;        // Gera valores aleatórios entre 0 e 100
		cout<<endl; 
		cout<<endl; 
	}
}


/* Função que faz busca sequencial
 * E imprime o tempo gasto na operação
 * Parâmetros:
 *  vet[] = vetor de inteiros
 *  tamVetor = tamanho do vetor */
void buscaSequencial(int vet[], int tamVet){
    clock_t tempo;              // Variavel do tempo
	tempo = clock();            // Tempo inicial
    
    int i, buscaNum;
    
    cout<<("BUSCA SEQUENCIAL\n")<<endl;
    cout<<("Digite o numero que deseja buscar: ")<<endl;
    cin>>buscaNum;
	//scanf("%i", &buscaNum);
    
    i = 0;
    while((i < tamVet) && (vet[i] != buscaNum))
        i++;
    
    if(vet[i] == buscaNum)
        cout<<("Número encontrado na posição %i\n", buscaNum, i)<<endl;
    else
        cout<<("Número não encontrado", buscaNum)<<endl;
        
    cout<<("Tempo de execucao da busca sequencial foi:", (clock() - tempo) / (double)CLOCKS_PER_SEC)<<endl; // Tempo final
}

/* Função que ordena vetor usando inserção (insert-short)
 * Parâmetros:
 *  vet[] = vetor de inteiros
 *  tamVetor = tamanho do vetor */
void ordenaVetor(int vet[], int tamVetor){
    int i, key, j; 
    
    for (i = 1; i < tamVetor; i++) { 
        key = vet[i]; 
        j = i - 1;
    
        while (j >= 0 && vet[j] > key) { 
            vet[j + 1] = vet[j]; 
            j = j - 1; 
        } 
        vet[j + 1] = key; 
    } 
}

/* Função que faz busca binária
 * E imprime o tempo gasto na operação
 * Parâmetros:
 *  vet[] = vetor de inteiros
 *  tamVetor = tamanho do vetor */
void buscaBinaria(int vet[], int tamVetor){
    clock_t tempo;              // Variavel do tempo
	tempo = clock();            // Tempo inicial
    
    int limiteInf = 0;              // limite inferior
    int limiteSup = tamVetor;       // limite superior
    int meio = 0;
    int buscaNum;
    
    cout<<("BUSCA BINARIA\n")<<endl;
    cout<<("Digite o número que deseja buscar: ")<<endl;
    cin>>buscaNum;
     
    while((limiteInf <= limiteSup) && (vet[meio] != buscaNum)){
        meio = (int)((limiteInf + limiteSup)/2);
            
        if (buscaNum < vet[meio])
            limiteSup = meio-1;
        else
            limiteInf = meio+1;
    }
    
    cout<<("chegou aqui\n")<<endl;
    if(vet[meio] == buscaNum)
        cout<<("Número %i encontrado na posição %i\n", buscaNum, meio)<<endl;
    else
        cout<<("Número %i não encontrado\n", buscaNum)<<endl;
        
    cout<<("Tempo de exec. da busca binária foi: segs\n\n", (clock() - tempo) / (double)CLOCKS_PER_SEC)<<endl; // sTempo final
}

/* Função que exibe vetor
 * Parâmetros:
 *  vet[] = vetor de inteiros
 *  tamVetor = tamanho do vetor */
void exibeVetor(int vet[], int tamVetor){
    int i;
    cout<<("\nExibe vetor\n")<<endl;
    for (i = 0; i < tamVetor; i++)          
        cout<<(vet[i])<<endl;
    
    cout<<("\n\n");
}    

/* Função que exibe menu e retorna opção */
int opcaoMenu(){
    int opcao;
    cout<<("\nMENU\n------------------------------------\n")<<endl;
    cout<<("1 - Pesquisa sequencial\n")<<endl;
    cout<<("2 - Pesquisa binaria\n")<<endl;
    cout<<("3 - Exibir vetor\n")<<endl;
    cout<<("0 - Sair\n")<<endl;
    cout<<("Digite a opcao: ")<<endl;
    //cout<<("opcao")<<endl;
    cout<<("\n-----------------------------------------\n");
    
    return opcao;
}

int main(int argc, char *argv[]){       // Recebe parâmetro do tamanho do vetor na chamada do programa
    int n = atoi(argv[1]);              // Converte o parâmetro d tamanho do vetor para inteiro
    
    int vetor[n];                       // Cria um vetor de tamanhon n
    
    geraNumerosRandomicos(vetor, n);    // Gera números aleatórios
    ordenaVetor(vetor, n);              // Ordena vetor
    
    while(1){               			// Este laço executa até que opção seja sair
        switch (opcaoMenu()){
            case 1:{
                buscaSequencial(vetor, n); // Opção 1
                break;
            }
            case 2: {
                buscaBinaria(vetor, n);    // Opção 2
                break;
            }
            case 3: {
                exibeVetor(vetor, n);      // Opção 3
                break;
            }
            default: {                     // Qualquer opção diferente de 1, 2 ou 3
                return 0;                  // Sai do while
            }
        }
    }
    return 0;			                   // Encerra programa
}
