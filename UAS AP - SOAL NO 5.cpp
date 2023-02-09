#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int Un = 0;

    for (int i = 1; i <= n; i++) {
        Un = i*(i-1)/2 + 1;

        cout << Un;
        if (i < n) {
            cout << ", ";
        } else {
            cout << endl;
        }
    }
    return 0;
}
