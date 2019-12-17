#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

vec addTwo_parallel(vec x, vec y){
    vec z(x.n_elem);
    int i;
#pragma omp parallel for schedule(static) \
private(i) shared(x,y,z)
    for(i=0; i < x.n_elem; i++)
        z(i) = x(i) + 2 * y(i);
    return z;
}

int main()
{

    vec a = ones<vec>(10);
    vec b = ones<vec>(10);
    vec c = addTwo_parallel(a, b);
    c.print();
    return 0;
}
