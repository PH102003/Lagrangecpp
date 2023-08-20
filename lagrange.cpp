#include <iostream>
#include <vector>

//criaçao de vetores double e do ponto de l1 (point)
double lagrange(const std::vector<double>& x, const std::vector<double>& y, double point){
    //variavel resultado
    double r = 0.0;
    //numero de "n"
    double n = x.size();
    //loop para ver todos os pontos possiveis para "x"
    for(int i = 0; i < n; ++i){
        //numero de yi
        double yi = y[i];
        for(int j = 0; j < n; ++j){
            if(j != i){
                yi *= (point - x[j])/(x[i] - x[j]);
            }
        }
        r += yi;
    }
    return r;
}
