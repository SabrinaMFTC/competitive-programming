#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    char op;
    cin >> op;

    double sum = 0, num;
    int n = 0;

    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            cin >> num;
            
            if (i + j >= 12) {
                sum += num;
                n++;
            }
        }
    }

    cout << fixed << setprecision(1);
    if (op == 'S') cout << sum << endl;
    else cout << sum / n << endl;

    return 0;
}