#include <iostream>
#include <stack>

using namespace std;

class Solution 
{
public:

	bool isValidParenthesis (string s)
	{
	    stack<char> storage;
	    int i;

	    for ( i = 0; i < s.size(); i++) 
	    {
	        if (s[i] == '(' || s[i] == '[' || s[i] == '{' ) 
	        {
	            storage.push(s[i]);
	        } 
	        else 
	        {
	            if (storage.empty()) 
	            {
	                break;
	            } 
	            else if (s[i] == ')' && storage.top() != '(')
	            {
	                break;
	            } 
	            else if (s[i] == ']' && storage.top() != '[') 
	            {
	                break;
	            }
	            else if (s[i] == '}' && storage.top() != '{') 
	            {
	                break;
	            } 
	            else 
	            {
	                storage.pop();
	            }
	        }

	    }

	    if(storage.empty() && i == s.size()) 
	    {
	        return true;
	    } 
	    else 
	    {
	        return false;
	    }
	}
};

int main() 
{
	Solution solu;
    string s = "()[]{}";

    cout << solu.isValidParenthesis(s);

    return 0;
}
