#include <iostream>

long long fib(long long f[], long long n) 
{ 
    f[0] = 0; 
    f[1] = 1; 
  
    for (long long i = 2; i <= n; i++) 
        f[i] = (f[i - 1] + f[i - 2]) % 10; 
  
    return f[n]; 
} 
  

int get_fibonacci_last_digit(long long n) {
        long long f[60] = {0}; 
  
        fib(f, 60); 
  
        return f[n % 60]; 
}

int main() {

    long long n;
    std::cin >> n;
    long long c = get_fibonacci_last_digit(n);
    std::cout << c << '\n';

}
