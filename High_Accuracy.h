#pragma once

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

    High_Accuracy(long long integer);


    void Input_Num();

    void Print_Num();

    High_Accuracy Sum(High_Accuracy &another);

    High_Accuracy Subtraction(High_Accuracy &subtrahend);
    
    High_Accuracy Multiply(High_Accuracy &another);
    
    High_Accuracy Division(High_Accuracy &divisor);

    void Copy(High_Accuracy &from, int len);

    int compare(High_Accuracy &another);
};
