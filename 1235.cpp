#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    cin.ignore();

    string str;

    for (int i = 0; i < n; ++i) {
        getline(cin, str);

        int len = str.size();
        int mid = len / 2;

        for (int i = mid - 1; i >= 0; --i) {
            cout << str[i];
        }

        for (int i = len - 1; i >= mid; --i) {
            cout << str[i];
        }

        cout << endl;
    }

    return 0;
}