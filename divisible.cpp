#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int m = 3;
    int sum = 0;
    int divsum = 0;

    for (int i = 1; i <= n; ++i) {
        if ((i % m) == 0){sum += i;}
        else {divsum += i;}
    }
    std::cout<< "Sum: " << sum << std::endl;
    std::cout<< "DivSum: " << divsum << std::endl;
    std::cout<< "Result:  " << (divsum - sum) << std::endl;
    
    return 0;
}