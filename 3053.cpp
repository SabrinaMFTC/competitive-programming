#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    char c;
    cin >> c;
    
    int mov;

    for (int i = 0; i < n; ++i) {
        cin >> mov;
        
        switch (mov) {
            case 1:
                if (c == 'A') c = 'B';
                else if (c == 'B')  c = 'A';
                break;
            case 2:
                if (c == 'B') c = 'C';
                else if (c == 'C') c = 'B';
                break;
            case 3:
                if (c == 'A') c = 'C';
                else if (c == 'C') c = 'A';
                break;
        }
    }

    cout << c << endl;

    return 0;
}