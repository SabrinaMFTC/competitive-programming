#include <iostream>
#include <algorithm>
#include <tuple>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<tuple<string, char, int>> data;
        string name;
        char zone;
        int distance;

        for (int i = 0; i < n; ++i) {
            cin >> name >> zone >> distance;
            data.push_back(make_tuple(name, zone, distance));
        }

        sort(data.begin(), data.end(), [](const auto &a, const auto &b) {
            if (get<2>(a) != get<2>(b)) return get<2>(a) < get<2>(b);
            if (get<1>(a) != get<1>(b)) return get<1>(a) < get<1>(b);
            return get<0>(a) < get<0>(b);
        });
            
        for (const auto &d : data) cout << get<0>(d) << endl;
    }

    return 0;
}