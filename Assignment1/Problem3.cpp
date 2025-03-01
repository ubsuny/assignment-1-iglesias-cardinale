#include <iostream>

/*
int squared(int x){ return x*x;}
long int squared(long int x){ return x*x;}
unsigned long int squared(unsigned long int x){ return x*x;}
*/

template< class T>
T squared(T x){return x*x;}

int main(void){
    int counter = 0;
    
    std::cout <<"For an int:\n";
    std::cout << "f_0 = 2" << "\n";
    for (int fn = 2; fn < 1000000; fn = squared (fn) ) {
        counter++;
        if (squared(fn) > fn){
        std::cout << "f_" << counter << " = f_" << counter -1 << "^2 = " << fn << "^2 = " << squared(fn) << "\n";
        }
        else {
            break;
        }
    }
    std::cout <<"\n";

    counter = 0;

    std::cout <<"For a long int:\n";
    std::cout << "f_0 = 2" << "\n";
    for (long int fn = 2; fn < 1000000; fn = squared (fn) ) {
        counter++;
        if (squared(fn) > fn){
            std::cout << "f_" << counter << " = f_" << counter -1 << "^2 = " << fn << "^2 = " << squared(fn) << "\n";
        }
        else {
            break;
        }
    }
    std::cout <<"\n";
    
    counter = 0;

    std::cout <<"For an unsigned long int:\n";
    std::cout << "f_0 = 2" << "\n";
    for (unsigned long int fn = 2; fn < 1000000; fn = squared (fn) ) {
        counter++;
        if (squared(fn) > fn){
            std::cout << "f_" << counter << " = f_" << counter -1 << "^2 = " << fn << "^2 = " << squared(fn) << "\n";
        }
        else {
            break;
        }
    }

    std::cout << std::endl;
    return 0;
}