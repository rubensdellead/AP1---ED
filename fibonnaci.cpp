#include<iostream> 
using namespace std; 

int fib(int n){        
        /*if(n == 0) {
           return 0;
        }
            if(n == 1 || n == 2){
                return 1; 
            }else if(n >= 3){
                return fib(n-1) + fib(n-2); 
            }*/
        int f = 1, fib1 = 1, fib2 = 1, i;
        for (i = 3; i < n; i++) {
            f = fib1 + fib2;
            fib2 = fib1;
            fib1 = f;
    }
}
int main(){
    int n;
    cin >> n;
    cout << fib(n) << endl;
}