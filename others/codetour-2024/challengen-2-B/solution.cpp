/*#include <bits/stdc++.h>

using namespace std;

vector<int> findPrimeFactors(int n) {
    vector<int> primeFactors;
    map<int, bool> mp;
    while (n % 2 == 0) {
        primeFactors.push_back(2);
        mp[2]=true;
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
        	if(mp[i]==0){
            	primeFactors.push_back(i);
            	mp[i]=1;
        	}
            n /= i;
        }
    }
    if (n > 2 && mp[n]==0) {
        primeFactors.push_back(n);
    }
    
    return primeFactors;
}

bool cmp(const int &a,const int &b){
	return a%26 < b%26;
}

int main(){
	long long n; cin >> n;
	vector<int> v;
	v = findPrimeFactors(n);
	sort(v.begin(),v.end(),cmp);
	for(auto& x: v){
		cout << (char)(x%26+65) ;
	}
}*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// Function to generate all prime numbers up to maxN using Sieve of Eratosthenes
vector<int> sieve(int maxN) {
    vector<bool> isPrime(maxN + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= maxN; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= maxN; j += i) {
                isPrime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= maxN; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

bool cmp(const int &a,const int &b){
	return a%26 < b%26;
}


int main() {
    long long N;
    cin >> N;

    // Generate all prime numbers up to N
    vector<int> primes = sieve(N);

    // Collect prime factors of N
    vector<int> primeFactors;
    for (int prime : primes) {
        if (N % prime == 0) {
            primeFactors.push_back(prime);
        }
    }

    // Sort the prime factors to ensure lexicographical order
    sort(primeFactors.begin(), primeFactors.end(), cmp);

    // Map prime factors to corresponding characters ('A' = 1st prime, 'B' = 2nd prime, etc.)
    string decodedMessage;
    for (int prime : primeFactors) {
        decodedMessage += ('A' + prime%26); // 'A' corresponds to 2nd prime number (prime 2)
    }

    // Output the decoded message
    cout << decodedMessage << endl;

    return 0;
}
