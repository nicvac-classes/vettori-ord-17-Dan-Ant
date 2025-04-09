#include <iostream>
#include <vector>


using namespace std;



int main() {
    
    
    int n, i, j;

    cout << "Dichiara n" << endl;
    cin >> n;
    double p[n], d[n];
    double t, r;
    bool scambio;

    i = 0;
    p[i] = 0;
    d[i] = 0;
    while (i < n) {
        r = rand() % n;
        if (r % 2 == 0) {
            p[i] = r;
            cout << p[i] << endl;
        } else {
            d[i] = r;
            cout << d[i] << endl;
        }
        i = 1 + i;
    }
    i = 0;
    scambio = true;
    while (i <= n && scambio) {
        j = 0;
        scambio = false;
        while (j <= n - 2 - i) {
            if (p[j] > p[j + 1]) {
                t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    scambio = true;
    while (i <= n && scambio) {
        j = 0;
        scambio = false;
        while (j <= n - 2 - i) {
            if (d[j] > d[j + 1]) {
                t = d[j];
                d[j] = d[j + 1];
                d[j + 1] = t;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    cout << "Pari" << endl;
    while (i < n) {
        cout << p[i] << endl;
        i = i + 1;
    }
    i = 0;
    cout << "dispari" << endl;
    while (i < n) {
        cout << d[i] << endl;
        i = i + 1;
    }
    
}



