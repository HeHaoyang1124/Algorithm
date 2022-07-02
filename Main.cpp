#include "High_Accuracy.h"

int main()
{

    High_Accuracy h1((char *)"123");
    High_Accuracy h2((char *)"321");

   High_Accuracy h3 = h1.add(h2);
    
    h3.Print_Num();
    printf("\n");

    std::cin.get();
    return 0;
}