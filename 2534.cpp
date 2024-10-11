#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, q, idx;
    while (cin >> n >> q) {
        vector<int> grades;
        int grade;

        for (int i = 0; i < n; ++i) {
            cin >> grade;
            grades.push_back(grade);
        }

        sort(grades.begin(), grades.end(), greater<int>());

        for (int i = 0; i < q; ++i) {
            cin >> idx;
            cout << grades[idx-1] << endl;
        }
    }

    return 0;
}