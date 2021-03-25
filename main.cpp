#include <bits/stdc++.h>

using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s)
{
    int numA = 0, numB = 0;
    int total = 0;
    char prev = s[0];
    for(int i = 1; i<s.length(); i++)
    {    
        if(s[i] == prev)
        {
            total++;
        }
        prev = s[i];
        
    }
    return total;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
