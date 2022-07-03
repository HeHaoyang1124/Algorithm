#include <cstdio>
#include <cstring>
#include <iostream>

class High_Accuracy
{
private:
    int m_bit[1000];
    int m_length;

public:
    High_Accuracy();

    High_Accuracy(char *s);

    void Input_Num();

    void Print_Num();

    High_Accuracy Sum(High_Accuracy another);
    High_Accuracy multiply(High_Accuracy another);

};