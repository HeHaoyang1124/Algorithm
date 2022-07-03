#include "High_Accuracy.h"

int main()
{
    High_Accuracy h1(57899);
    High_Accuracy h3(321);
    High_Accuracy h2;
    h2 = h1.Subtraction(h3);

    h2.Print_Num();
    printf("\n");

    std::cin.get();
    return 0;
}