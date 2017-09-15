#include "CompPi.hpp"
#include <iostream>

using namespace std;

void CompPi::calc(int n){
    int a = 22;
    int b = 7;
    double pi = 0;
    pi = (double)a/(double)b;
    cout.precision(n+1);
    cout<<"pi computed to "<<n<<" decimals is: "<<pi<<endl;
}