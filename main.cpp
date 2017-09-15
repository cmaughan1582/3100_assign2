#include <iostream>
#include <string>
#include <stdexcept>
#include "CompE.hpp"
#include "CompPi.hpp"
#include "CompFib.hpp"

using namespace std;

void helpmessage();

int main(int argc, char* argv[]){
    if(argc > 1){
        for(int i = 0; i < argc; i++){
            string test = argv[i];
            if(test == "-pi"){
                string param = argv[i+1];
                int dec = 0;
                try{
                dec = stoi(param);
                } catch (exception& e){
                    helpmessage();
                    return 0;
                }
                
                if(dec < 1 || dec > 10){
                    helpmessage();
                }
                else{
                    CompPi x;
                    x.calc(dec);
                    return 0;
                }
            }
            else if(test == "-fib"){
                string param = argv[i+1];
                int dec = 0;
                try{
                    dec = stoi(param);
                } catch (exception& e){
                    helpmessage();
                    return 0;
                }
                if(dec < 0 || dec > 40){
                    helpmessage();
                }
                else{
                    CompFib x;
                    cout<<"The fibonacci of "<<dec<<" is: "<<x.fib(dec)<<endl;
                    return 0;
                }
            }
            else if(test == "-e"){
                string param = argv[i+1];
                int dec = 0;
                CompE x;
                try{
                    dec = stoi(param);
                } catch (exception& e){
                    helpmessage();
                    return 0;
                }
                if(dec < 1 || dec > 30){
                    helpmessage();
                }
                else{
                    cout.precision(10);
                    cout<<"e calculated to "<<dec<<" iterations is: "<<x.calc(dec)<<endl;
                    return 0;
                }
            }
        }
        helpmessage();
    }
    else{
        helpmessage();
    }
    
    return 0;
}

void helpmessage(){
    cout<<"That is not valid"<<endl;
    cout<<"Use one of the following commands"<<endl<<endl;
    cout<<"-pi [n]: Compute pi to the nth digit. (n between 1 and 10)"<<endl;
    cout<<"-fib [n]: Compute the fibonacci of n. (n between 0 and 40)"<<endl;
    cout<<"-e [n]: Compute e to the nth iteration. (n between 1 and 30)"<<endl;
}