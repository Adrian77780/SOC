#include <vector>
#include <iostream>

using namespace std;  // Using namespace std globally

vector<int> sieve_of_eratosthenes(int limit) {
    vector<bool> primes(limit+1, true);
    primes[0] = primes[1] = false;

    for (int p=2; p*p<=limit; p++) {
        if (primes[p] == true) {
            for (int i=p*p; i<=limit; i += p)
                primes[i] = false;
        }
    }

    vector<int> prime_numbers;
    for (int p=2; p<=limit; p++)
        if (primes[p])
            prime_numbers.push_back(p);

    return prime_numbers;
}

int main() {
    int n;
    cin>>n;
    vector<int> primes = sieve_of_eratosthenes(n);

    for (int prime : primes)
        cout << prime << " ";

    return 0;
}