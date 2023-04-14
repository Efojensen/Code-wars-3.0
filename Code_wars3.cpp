#include <iostream>

int solution(int begin)
{
    int sum = 0;
    for(int i = 1; i < begin; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    if (sum < 0)
    {
        std::cout << "0\n";
    }
    std::cout << sum;
    return 0;
}

int main()
{
    std::cout <<"Enter in a number\n";
    int num;
    std::cin >> num;
    solution(num);
}

