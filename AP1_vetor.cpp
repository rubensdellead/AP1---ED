#include <iostream>
using namespace std;

void vet(int v[],int &n){ //função para ler o vetor de n posições;
    int i;
    for(i=0;i<n;i++) 
    cin>>v[i];
}
bool verif_crescente(int v[],int n){
    int cont = 1; //(c2) (1x)
    if(n > 1){ //(c3) (1x)
    for(int i = 1; i < n; i++){ //PIOR caso:(c4(n vezes));
    				            // MELHOR caso: ele rodará uma ÚNICA vez; 
        if(v[i-1] < v[i]){ /*PIOR caso: (c5) Rodará n vezes no , e no MELHOR caso rodará uma ÚNICA vez, pois, 
                            logo no primeiro teste, teremos que: o elemento que tiver na posição i será
                            maior que o elemento que se encontra na posição i-1. */
            cont++; //(c6) 
        }else{
            return 1;
            }
        }
   }if(n == cont){ 
            return 0; 
        }
}
int main(){
    int q_n;
    cin>>q_n;
    int vetor[q_n];
    vet(vetor,q_n);

    if (verif_crescente (vetor,q_n) == false)
    cout<<"O seu vetor esta ordenado.\n";
    if (verif_crescente (vetor,q_n) == true)
    cout<<"o seu vetor esta desordenado.\n";
    
    return 0;
}
/* 
Complexidade de pior caso: 
- Seria o vetor estar ordenado de forma crescente, pois o FOR iria percorrer todo o vetor, verificando  posição à posição. 

 a = c2 + c3 + c6
 b = c4 + c5
 d = a + b

-> c2 + c3 + c4.n + c5.n + c6; 
-> c2 + c3 + c6 + n(c4 + c5) 
-> a + nb = n(a+b) -> f(n) = n.d

Complexidade de melhor caso: 
Melhor caso seria o vetor estar ordenado de forma descrecente, pois rapidamente ele iria reconhecer que o vetor está desordenado.

 */