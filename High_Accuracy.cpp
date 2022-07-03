#include "High_Accuracy.h"

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

High_Accuracy High_Accuracy::Sum(High_Accuracy another)
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

High_Accuracy High_Accuracy::Multiply(High_Accuracy another)
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