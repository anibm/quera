#include <iostream>
#include <stack>

using namespace std;

int getSum(string str)
{    
    stack<int> stack;
    int digit, sum = 0, index = 0;
    int length = str.length();
    while (index < length)
    {
        digit = str[index];
        stack.push(digit);
        index++;
    }

    while (!stack.empty())
    {
        digit = stack.top() - 48;
        sum+= digit;
        stack.pop();
    }

    if (sum < 10)
        return sum;
    else
    {
        string temp = to_string(sum);
        return getSum(temp);
    }
}

int main()
{
    string number;
    cin >> number;

    cout << getSum(number);

    return 0;
}