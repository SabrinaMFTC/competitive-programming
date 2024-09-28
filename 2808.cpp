#include <iostream>
#include <string>

using namespace std;

int main() {

    char cols[8] = {'a','b','c','d','e','f','g','h'};

    string p1, p2;
    cin >> p1 >> p2;

    char l1 = p1[0];
    char l2 = p2[0];
    int  n1 = (int) p1[1]; 
    int  n2 = (int) p2[1];

    int idx1 = 0, idx2 = 0;

    for (int i = 0; i < 8; ++i) {
        if (cols[i] == l1) idx1 = i;
        else if (cols[i] == l2) idx2 = i;

        if (idx1 != 0 && idx2 != 0) break;
    }

    int valid = 0;   

    if (
        ((idx1 == idx2 - 2 || idx1 == idx2 + 2) &&
         (n1 == n2 - 1 || n1 == n2 + 1)) ||
        ((idx1 == idx2 - 1 || idx1 == idx2 + 1) &&
         (n1 == n2 - 2 || n1 == n2 + 2))
        )
        valid = 1;
    
    if (valid) cout << "VALIDO" << endl;
    else cout << "INVALIDO" << endl;

    return 0;
}