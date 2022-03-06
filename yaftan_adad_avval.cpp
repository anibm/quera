#include <iostream>
#include <stack>

using namespace std;


bool checkPrime(int num) {
    bool isPrime = true;
    if (num == 0 || num == 1)
    {
      isPrime = false;
    } else {
      for (int i = 2; i <= num / 2; ++i)
      {
        if (num % i == 0)
        {
          isPrime = false;
          break;
        }
      }
    }

    return isPrime;
}

int main()
{
    int number, temp;
    cin >> number;

    if (number < 1 || number > 100000)
    {
        cout << "";
    }
    else
    {
        stack<int> stack;
        temp = number;
        int digit, sum = 0;

        while (temp >= 10)
        {
            digit = temp % 10;
            stack.push(digit);
            temp /= 10;
        }
        stack.push(temp);

        while (!stack.empty())
        {
            digit = stack.top();
            sum+= digit;
            stack.pop();
        }

        while (sum > 0)
        {
            number++;
            if (checkPrime(number))
                sum--;
        }

        cout << number;
        
    }
    
    return 0;
}