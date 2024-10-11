#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> even{}, odd{};

    for (int i = 0; i < n; ++i) {
        int number;
        cin >> number;

        if (number % 2 == 0) even.push_back(number);
        else odd.push_back(number);
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<int>());

    for (auto e : even) cout << e << endl;
    for (auto o : odd) cout << o << endl;

    return 0;
}