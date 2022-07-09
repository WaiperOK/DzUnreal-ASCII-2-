#include <iostream>

int main()
{

    std::cout << "Input a keyboard character: "; 

    char n;
    std::cin >> n;
    std::cout << n << " has ASCII code " << static_cast<int>(n) << std::endl;

    
    std::cin >> n; 
    std::cout << n << " has ASCII code " << static_cast<int>(n) << std::endl;

    return 0;
}