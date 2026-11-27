#include <iostream>

int main() 
{
    long long n, m;
    std::cin >> n >> m;
	
    long long min_val = n < m - 1 ? n : m - 1;
    long long total = min_val * (2 * m - min_val - 1) / 2;
	
    std::cout << total << std::endl;
	
    return 0;
}