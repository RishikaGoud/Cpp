#include <iostream>
using namespace std;

bool checkPrime(int n);

int main()
{
    int p, i;
    bool flag = false;

    cout << "Enter a positive  integer: ";
    cin >> p;

    for(i = 2; i <= p/2; i++)
    {
        if (checkPrime(i))
        {
            if (checkPrime(p - i))
            {
                cout << p << " = " << i << " + " << p-i << endl;
                flag = true;
            }
        }
    }

    if (!flag)
      cout << p << " can't be expressed as sum of two prime numbers.";

    return 0;
}

bool checkPrime(int p)
{
    int i;
    bool isPrime = true;

    for(i = 2; i <= p/2; i++)
    {
        if(p % i == 0)
            isPrime = false;
    }
    
    return isPrime;
}

