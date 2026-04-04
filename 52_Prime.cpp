#include <iostream>
using namespace std;

int isPrime(int num)
{
    int check = 1;

    if (num <= 1)
    {
        check = 0;
        return check;
    }
    else
    {
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                check = 0;
                break;
            }
        }
        return check;
    }
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (isPrime(num))
    {
        cout << "The number is Prime";
    }
    else
    {
        cout << "The number is not Prime";
    }
    return 0;
}