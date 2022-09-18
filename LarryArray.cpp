#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
string larrysArray(vector<int> A)
{
    for ( int i = 0; i < A.size(); i++)
    {
        if (A[i] != (i + 1))
        {
            if (i == A.size() - 2)
            {
                return "NO";
            }
            while (A[i] != (i + 1))
            {
                for (int j = i + 1; j < A.size(); j++)
                {

                    if (A[j] == i + 1)
                    {
                        if (j < A.size() - 1)
                        {
                            swap(A[j], A[j - 1]);
                            swap(A[j], A[j + 1]);
                        }
                        else
                        {
                            swap(A[j], A[j - 2]);
                            swap(A[j], A[j - 1]);
                        }
                        break;
                    }
                }
            }
        }
        if (i == A.size() - 1)
        {
            return "YES";
        }
    }
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string ntemp;
        getline(cin, ntemp);

        int n = stoi(ltrim(rtrim(ntemp)));

        string A_temp_temp;
        getline(cin, A_temp_temp);

        vector<string> A_temp = split(rtrim(A_temp_temp));

        vector<int> A(n);

        for (int i = 0; i < n; i++) {
            int A_item = stoi(A_temp[i]);

            A[i] = A_item;
        }

        string result = larrysArray(A);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
