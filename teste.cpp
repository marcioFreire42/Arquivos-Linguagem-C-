#include <stdio.h>

int main (){
    
    int num[20]; 
    int quantele = 20;
    
   
    for (int i = 0 ; i < 20 ; i++){
        printf("Digite o valor %d: ", i);
        scanf("%d",&num[i]);
    }
    
    for(int i = 0; i < quantele - 1; i++){
        for(int j = i + 1; j < quantele; j++){
            if(num[j] == num[i]){
                i--; // garante 
                for (int x = j; x < quantele; x++){
                    num[x]=num[x+1];
                }
                quantele--;
            }
        }
    }

    
	for (int i = 0 ; i < quantele ; i++){
       printf("%d ", num[i]);
    }
    
    

}