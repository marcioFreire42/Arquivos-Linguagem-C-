#include <stdio.h>

int main (){
    
    int num[20]; 
    int quantele = 20; // quantidade inicial de elementos do vetor;
    
   
    for (int i = 0 ; i < 20 ; i++){
        printf("Digite o valor %d: ", i);
        scanf("%d",&num[i]);
    }
    
    for(int i = 0; i < quantele - 1; i++){
        for(int j = i + 1; j < quantele; j++){
		// este loop um dentro do outro faz com que os elementos do vetor sejam comparados uns com os outros um por um;
            if(num[j] == num[i]){
                i--; // quando há uma exclusão de número repetido os números mudam de posição
		    // esse comando garante que o número foi comparado será comparado novamente com
		    // o novo número que foi para o lugar do que foi excluido;
		    // garante que se o número que for exclído for substituido por outro igual, haverá uma nova exclusão;
                for (int x = j; x < quantele; x++){
                    num[x]=num[x+1];
			// quando os numeros são iguais puxamos todos os elementos do vetor deixando o última posição vazia;
                }
                quantele--; // diminuimos a quantidade de elementos,
            }
        }
    }

    
	for (int i = 0 ; i < quantele ; i++){
       printf("%d ", num[i]);
    }
    
    

}
