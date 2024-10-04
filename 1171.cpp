#include <iostream>
#include <map>

using namespace std;

int main() {
    int n; cin >> n;
    int number;
    map<int, int> mapa;

    for (int i = 0; i < n; ++i) {
        cin >> number;

        if (mapa.find(number) == mapa.end()) mapa[number] = 1;
        else mapa[number]++;
    }

    for (const auto &it : mapa) {
        cout << it.first << " aparece " << it.second << " vez(es)" << endl;
    }

    return 0;
}
