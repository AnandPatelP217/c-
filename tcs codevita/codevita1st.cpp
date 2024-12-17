#include <iostream>
#include<vector>
#include <string>   

#include <algorithm>
using namespace std;
int hatcost(int from, int to) {
    if (from == to) return 0;
    if (from == -1) return 1;  
    return 1;}
int main() {
    int  n;
    cin >>n;
    vector<string >  instructions(n);
    for (int i =0; i < n;++i) {
        cin>> instructions[i];
    }    vector<int> place;
    for (const string &instr : instructions) {
        if (instr == " up ") place.push_back(0);
        else if (instr == " down") place.push_back(1);
        else if (instr == " left") place.push_back(2);
        else if (instr == " right") place.push_back(3);
    }    const 
    int INF = 1e9;
    vector    <vector<int>> dp(n, vector<int>(4,          INF));
    dp[0]   [place[0]] = 0; 
    for (int  i = 1; i < n;   ++i) {
        for (int last = 0;    last < 4; ++last) {
            if (dp[i - 1][last] == INF   ) 
            continue; 
              for (int next = 0;    next < 4; ++next) {
                dp[i][next] =   min(dp[i][next  ],  
                dp[i - 1][last] +   hatcost(last, next));
            }        }    }    int 
    result = *min_element(dp[n - 1].begin(), dp[n - 1].end());
    cout <<result<<endl;
    return 0;
}
