#include <vector>
using namespace std;


void intercanviar (double& a, double& b) 
{
    double c = a;
    a = b;
    b = c;
}


int posicio_minim (const vector<double>& V, int e, int d) {
    int pm = e;
    for (int i=e+1; i<=d; ++i) {
        if (V[i] < V[pm]) {
            pm = i;
        }
    }
    return pm;
}


void ordenar (vector<double>& V) {
    int n = V.size();
    for (int i=0; i<n-1; ++i) {
        int pm = posicio_minim(V, i, n-1);
        intercanviar(V[i], V[pm]);
    }
}


