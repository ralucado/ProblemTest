#include <iostream>
#include <vector>
using namespace std;


void ordenar (vector<double>& V);


int main() {
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i=0; i<n; ++i) {
            cin >> V[i];
        }
        ordenar(V);
        for (int i=0; i<n; ++i) {
            cout << " " << V[i];
        }
        cout << endl;
    }
}
