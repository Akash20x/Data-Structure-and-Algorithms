// https://www.hackerrank.com/challenges/sparse-arrays/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the matchingStrings function below.
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> vRet;  // for storing the result as a vector
    for(auto it : queries) {
        int iCount = count_if(strings.begin(), strings.end(), [&](string s) {
            return it == s;
        });
        vRet.push_back(iCount);
    }
    return vRet;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int strings_count;
    cin >> strings_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> strings(strings_count);  // for storing the result as a vector

    for (int i = 0; i < strings_count; i++) {  //Loop 1st as described above
        string strings_item;
        getline(cin, strings_item);

        strings[i] = strings_item;
    }

    int queries_count;
    cin >> queries_count; // if same increment the value of count
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> queries(queries_count); // if same increment the value of count

    for (int i = 0; i < queries_count; i++) {  
        string queries_item;
        getline(cin, queries_item);

        queries[i] = queries_item;
    }

    vector<int> res = matchingStrings(strings, queries);

    for (int i = 0; i < res.size(); i++) {  //Loop 2nd as described above
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
