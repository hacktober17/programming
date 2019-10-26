#include <iostream>

// Iterative gcd function
int gcd(int m, int n)
{
    if(!(m && n))
        return 0;
    
    while(true)
    {
        if((m = m % n) == 0)
            return n;
        else if((n = n % m) == 0)
            return m;
    }
}

int gcd_recursion(int m, int n)
{
    if(n != 0)
        return gcd_recursion(n, m%n);
    else
        return m;
}


int main()
{
    int m = 0;
    int n = 0;

    std::cout << "Please enter a number\n";
    std::cin >> m;

    std::cout << "Please enter another number\n";
    std::cin >> n;
    
    std::cout << "GCD of m and n: " << gcd(m, n) << '\n';
    std::cout << "GCD recursion of m and n: " << gcd_recursion(m, n) << '\n';

    return 0;
}
