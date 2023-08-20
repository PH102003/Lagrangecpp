#include <iostream>
#include <vector>
#include "lagrange.cpp"


int main(){
    std::vector<double> x = {1.0, 2.0, 3.0, 4.0};  // valores de x
    std::vector<double> y = {4.0, 3.0, 1.0, 2.0};  // valores de y
    double point = 2.5;  // ponto a ser interpolado

    double valorInterpolado = lagrange(x, y, point);
    std::cout << "valor a ser interpolado em: " << point << ": " << valorInterpolado << std::endl;

    return 0;
}
