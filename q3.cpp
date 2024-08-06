#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int phi(int n) {
    int result = 1;
    for (int i = 2; i < n; i++)
        if (gcd(i, n) == 1)
            result++;
    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Phi(" << n << ") = " << phi(n) << endl;
    return 0;
}
