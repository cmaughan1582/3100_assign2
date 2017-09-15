#include "CompFib.hpp"

int CompFib::fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int total = 0;
    total = fib(n-1) + fib(n-2);
    return total;
}