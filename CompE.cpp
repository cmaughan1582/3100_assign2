#include "CompE.hpp"

using namespace std;

double CompE::calc(int n){
    double total;
    int fac = fact(n);
    double dfac = (double)fac;
    double dn = 1.0;
    if (n==0){
        total = 1;
        return total;
    }
    total = dn/dfac + calc(n-1);
    return total;
}

int CompE::fact(int n){
    if(n == 0){
        return 1;
    }
    int total = n * fact(n-1);
    return total;
}