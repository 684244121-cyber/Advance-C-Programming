#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int A[10]= {1,12,33,4,53,6,7,82,49,10}, x;

    for (const auto &x : A) {
        cout << x << " ";
    };
    sort(begin(A), end(A), greater<int>());
    cout << "\nAfter sorting (Descending order): \n";
    for (const auto &x : A) {
        cout << x << " ";
    };
}