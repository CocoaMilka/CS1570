#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    string reverse (string num)
    {
        int i = 0;
        int j = num.size() - 1;

        while (i < j)
        {
            swap(num[i], num[j]);

            i++;
            j--;
        }

        return num;
    }

    string addNums (string num1, string num2)
    {
        int i = num1.size() - 1;
        int j = num2.size() - 1;

        int sum = 0;
        string ans = "";

        while(i >= 0 || j >= 0 || sum != 0)
        {
            if (i >= 0)
            {
                sum += (num1[i] - '0');
                i--;
            }
            if (j >= 0)
            {
                sum += (num2[j] - '0');
                j--;
            }

            ans += char(sum % 10 + '0');
            sum /= 10;
        }

        return reverse(ans);
    }  
};

int main() 
{
    Solution solu;

    string num1 = "456";
    string num2 = "77";

    cout << solu.addNums(num1, num2);

    return 0;
}
