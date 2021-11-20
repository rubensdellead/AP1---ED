#include<iostream> 
using namespace std; 
int fib(int n){        
        int f = 1, fib1 = 1, fib2 = 1, i; // c4 
        for (i = 3; i < n; i++){ // c5 que executará n-2 vezes
            f = fib1 + fib2; // c6
            fib2 = fib1; // c7 
            fib1 = f; // c8 
    }
}
int main(){
    int n;
    cin >> n;
    cout << fib(n) << endl;
}

/*Pior caso: 
a = c4 + c6 + c7 + c8
b = c5.2
d = a + b

-> c4 + c5.(n-2) + c6 + c7 + c8 
-> c4 + c6 + c7 + c8 + c5.n + c5 - 2 = a + b + c5.n 
-> d + c5.n -> n.(c5 + d)

Prova que é linear, pois c5 e d são constante e n vezes qualquer constante sempre dá uma função linear. */