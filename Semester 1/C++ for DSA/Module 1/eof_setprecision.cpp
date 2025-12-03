#include <iostream>
#include <iomanip>

int main()
{
    int x;
    while (std::cin>>x)
    {
        (x%2==0)?std::cout<<"Even\n":std::cout<<"Odd\n";
    }
    
    // double x;
    // std::cin >> x;
    // std::cout << std::fixed << std::setprecision(5) << x;
    return 0;
}