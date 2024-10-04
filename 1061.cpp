#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string str;
    int d1, h1, m1, s1, d2, h2, m2, s2;

    cin >> str >> d1 >> h1 >> str >> m1 >> str >> s1;
    cin >> str >> d2 >> h2 >> str >> m2 >> str >> s2;

    int t1, t2, tf, df, hf, mf, sf;
    t1 = d1 * 86400 + h1 * 3600 + m1 * 60 + s1;
    t2 = d2 * 86400 + h2 * 3600 + m2 * 60 + s2;

    tf = t2 - t1;
    df = tf / 86400;
    tf %= 86400;
    hf = tf / 3600;
    tf %= 3600;
    mf = tf / 60;
    sf = tf % 60;

    cout << df << " dia(s)" << endl;
    cout << hf << " hora(s)" << endl;
    cout << mf << " minuto(s)" << endl;
    cout << sf << " segundo(s)" << endl;

    return 0;
}