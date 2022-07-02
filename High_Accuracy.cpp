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

High_Accuracy High_Accuracy::add(High_Accuracy another)
{
    High_Accuracy a;

    a.m_length = this->m_length > another.m_length ? this->m_length : another.m_length;

    for (int i = 1, carrying = 0; i <= a.m_length; i++)
    {
        a.m_bit[i] = (m_bit[i] + another.m_bit[i] + carrying) % 10;
        carrying = (m_bit[i] + another.m_bit[i]) / 10;
    }

    return a;
}