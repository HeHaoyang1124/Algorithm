#include "High_Accuracy.h"

int main()
{
    High_Accuracy h1(57899);
    High_Accuracy h2(321);
    High_Accuracy h3;
    h3 = h1.Division(h2);
    h3.Print_Num();
    printf("\n");

    std::cin.get();
    return 0;
}