#include<iostream>
#include<iomanip>
using namespace std;

void Create(int* a, const int size, int i)
{
    if (i < size)
    {
        std::cout << "a[" << i << "] = ";
        std::cin >> a[i];
        if (a[i] < 0 || a[i] % 2 != 0) // Перевірка на від'ємність або непарність
        {
            Create(a, size, i + 1);
        }
        else
        {
            std::cout << "False" << std::endl;
            Create(a, size, i);
        }
    }
}

int main()
{
    const int n = 5;
    int a[n];
    Create(a, n, 0);

    std::cout << "True ";
    for (int i = 0; i < n; ++i)
    {
        if (a[i] < 0 || a[i] % 2 != 0)
        {
            std::cout << a[i] << " ";
        }
    }

    return 0;
}