#include <iostream>
#include <iterator>

int main()
{
    constexpr int notas[]{23, 43, 5, 561, 12, 109};
    constexpr int numStudents{static_cast<int>(std::size(notas))};

    int maximo{0};

    for (int i = 0; i < numStudents; ++i)
    {
        if (notas[i] > maximo)
        {
            maximo = notas[i];
        }
    }

    std::cout << "El numero mas grande es : " << maximo << '\n';

    return 0;
}


