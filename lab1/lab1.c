#include <stdio.h>
#include <stdlib.h>
#include<string.h>



int* criaVec(int tam){
	int* vec=(int*)malloc(tam* sizeof(int));
	for(int i=2;i<tam;i++){
		vec[i]=0;
	}
	return vec;
}

void marcaNum(int* vec,int i,int tam){
	for(int j=i;j<tam;j+=i){
		if(j%i==0 && j!=i)
			vec[j]=1;
	}
}

int proxPrim(int* vec,int tam,int i){
	for(int j=2;j<tam;j++){
		if(j>i && vec[j]==0) 
                    return j;
	}
	return -1;
	
}

	
 int main(){
 	int tam=100;
 	int i=2;
 	int* vec=criaVec(tam);
 	
 	while(i!=-1){
 		marcaNum(vec,i,tam);
 		i=proxPrim(vec,tam,i);	
 	}
 	for(int i=2;i<tam;i++){
 		if(vec[i]==0)
 			printf("%d ",i);
 	}
 			
} 	
 	
 
