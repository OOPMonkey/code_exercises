#include <iostream>

const int MIN = 1;
const int MAX = 5;
 
// Loop between 1 and 5
int main()
{
    int outer = MAX;
    while (outer >= MIN)
    {
        int inner = outer;
        while (inner >= 1)
            std::cout << inner-- << " ";
 
        std::cout << "\n";
        --outer;
    }
 
    return 0;
}
