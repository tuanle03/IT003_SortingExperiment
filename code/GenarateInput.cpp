#include <bits/stdc++.h>
using namespace std;
const int sizear = 1000000, LIMIT = 1000000;
int num[sizear + 5];
void increasingnum() {
    ofstream fo("test1.inp");
    for (int i = 0; i < sizear; ++i)
        num[i] = rand()%LIMIT;
    sort(num, num+sizear);
    for (int i = 0; i < sizear; ++i)
        fo << num[i] <<' ';
    fo.close();
}
void decreasingnum() {
    ofstream fo("test2.inp");
    for (int i = 0; i < sizear; ++i)
        num[i] = rand()%LIMIT;
    sort(num, num+sizear, greater<int>());
    for (int i = 0; i < sizear; ++i)
        fo << num[i] <<' ';
    fo.close();
}
void randomnum() {
    for (int i = 3; i <= 10; ++i) {
        string filename = "test" + to_string(i) + ".inp";
        ofstream fo(filename);
        for (int i = 0; i < sizear; ++i)
            fo << rand()%LIMIT <<' ';
        fo.close();
    }
}
int main() {
    increasingnum();
    decreasingnum();
    randomnum();
    return 0;
}
