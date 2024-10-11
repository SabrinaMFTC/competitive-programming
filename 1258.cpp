#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>
using namespace std;

int main() {
    int n;
    int skipLine = 0;
    
    while (cin >> n && n) {
        if (skipLine) cout << endl;
        skipLine = 1;

        string name, color;
        char size;

        vector<tuple<string, char, string>> tshirts;

        for (int i = 0; i < n; ++i) {
            cin.ignore();
            getline(cin, name);
            cin >> color >> size;

            tshirts.push_back(make_tuple(color, size, name));
        }

        sort(tshirts.begin(), tshirts.end(), [](const auto &a, const auto &b) {
            if (get<0>(a) != get<0>(b)) return get<0>(a) < get<0>(b);
            if (get<1>(a) != get<1>(b)) return get<1>(a) > get<1>(b);
            return get<2>(a) < get<2>(b);
        });

        for (const auto &tshirt : tshirts) {
            cout << get<0>(tshirt) << " " << get<1>(tshirt) << " " << get<2>(tshirt) << endl;
        }
    }

    return 0;
}