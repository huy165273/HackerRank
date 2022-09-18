#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        stack<char> brackets;
        bool check = true;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '[' || s[i] == '(' || s[i] == '{')
            {
                brackets.push(s[i]);
            }
            else
            {
                if (brackets.empty() == false && ((s[i] == ']' && brackets.top() == '[') || (s[i] == ')' && brackets.top() == '(') || (s[i] == '}' && brackets.top() == '{')) )
                {
                    brackets.pop();
                }
                else
                {
                    check = false;
                    break;
                }
            }
        }
        if (check && brackets.empty())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}