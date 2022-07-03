#include "High_Accuracy.h"

int main()
{

    High_Accuracy h1((char *)"532");
    High_Accuracy h2((char *)"918");

    High_Accuracy h3 = h1.Multiply(h2);

    h3.Print_Num();
    printf("\n");

    std::cin.get();
    return 0;
}