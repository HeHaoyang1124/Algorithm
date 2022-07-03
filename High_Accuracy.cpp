#include "High_Accuracy.h"
#include <cmath>

High_Accuracy::High_Accuracy() : m_length(0)
{
    memset(m_bit, 0, sizeof(m_bit));
}

High_Accuracy::High_Accuracy(char *s)
{
    m_length = strlen(s);
    for (int i = 1; i <= m_length; i++)
    {
        m_bit[i] = s[m_length - i] - '0';
    }
}

High_Accuracy::High_Accuracy(long long integer)
{
    for (int i = 999, front = 1; i > 0; i--)
    {
        m_bit[i] = integer / (int)pow(10, i - 1);
        m_bit[i] %= 10;
        if (front == 1 && m_bit[i] != 0)
        {
            m_length = i;
            front = 0;
        }
    }
}

void High_Accuracy::Input_Num()
{
    char *s;
    scanf("%s", s);
    m_length = strlen(s);
    for (int i = 1; i <= m_length; i++)
    {
        m_bit[i] = s[m_length - i] - '0';
    }
}

void High_Accuracy::Print_Num()
{
    for (int i = m_length; i > 0; i--)
    {
        printf("%d", m_bit[i]);
    }
}

High_Accuracy High_Accuracy::Sum(High_Accuracy &another)
{
    High_Accuracy a;

    a.m_length = this->m_length > another.m_length ? this->m_length : another.m_length;

    int carrying = 0;
    for (int i = 1; i <= a.m_length; i++)
    {
        a.m_bit[i] = (m_bit[i] + another.m_bit[i] + carrying) % 10;
        carrying = (m_bit[i] + another.m_bit[i]) / 10;
    }

    if (carrying != 0)
    {
        a.m_length++;
        a.m_bit[a.m_length] = carrying;
    }

    return a;
}

High_Accuracy High_Accuracy::Multiply(High_Accuracy &another)
{
    High_Accuracy a;

    a.m_length = this->m_length + another.m_length;

    for (int i = 1; i <= this->m_length; i++)
    {
        for (int j = 1; j <= another.m_length; j++)
        {
            a.m_bit[i + j - 1] += (this->m_bit[i] * another.m_bit[j]);
            // carrying
            a.m_bit[i + j] += a.m_bit[i + j - 1] / 10;
            a.m_bit[i + j - 1] %= 10;
        }
    }
    if (a.m_bit[a.m_length] == 0)
    {
        a.m_length--;
    }
    return a;
}

High_Accuracy High_Accuracy::Division(High_Accuracy &divisor)
{
    High_Accuracy a;
    High_Accuracy remainder;

    for (int i = divisor.m_length; i <= this->m_length; i++)
    {
        remainder.Copy(*this, i);
        if (remainder.compare(divisor) == -1)
        {
            continue;
        }
        else
        {
            // for(int i=1)///////
        }
    }

    return a;
}

void High_Accuracy::Copy(High_Accuracy &from, int len)
{

    m_length = len;

    for (int i = 1; i <= len; i++)
    {
        m_bit[i] = from.m_bit[from.m_length - len + i];
    }
}

int High_Accuracy::compare(High_Accuracy &another)
{
    if (this->m_length > another.m_length)
        return 1;

    else if (this->m_length < another.m_length)
        return -1;

    else
    {
        for (int i = this->m_length; i > 0; i--)
        {
            if (this->m_bit[i] > another.m_bit[i])
                return 1;
            if (this->m_bit[i] < another.m_bit[i])
                return -1;
        }
        return 0;
    }
}

High_Accuracy High_Accuracy::Subtraction(High_Accuracy &subtrahend)
{
    High_Accuracy a;
    if (this->compare(subtrahend) < 0)
    {
        a = subtrahend.Subtraction(*this);
        a.m_bit[0] = -1;
    }

    for (int i = 1; i <= m_length; i++)
    {
        a.m_bit[i] = this->m_bit[i] - subtrahend.m_bit[i];

        if (a.m_bit[i] < 0)
        {
            a.m_bit[i] += 10;
            a.m_bit[i + 1]--;
        }
    }

    a.m_length = this->m_length;

    if (a.m_bit[a.m_length] == 0)
        a.m_length--;

    return a;
}