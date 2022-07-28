#include <iostream>

using namespace std;

bool IsPrime(int n);

int main() {
    int num_of_primes = 0;
    int candidate = 0;

    while(num_of_primes < 1000) {
	candidate++;
	if(IsPrime(candidate)) {
	    num_of_primes++;
	}
    }
    cout << candidate << " is the 1000th prime." << endl;

}


bool IsPrime(int n)
{
    if (n == 2 || n == 3)
        return true;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}
