#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, count = 0;
        cin >> N;
        string S;
        cin >> S;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == S[i + 1])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}
