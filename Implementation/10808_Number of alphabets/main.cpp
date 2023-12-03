/**
 * BAEKJOON : 10808 알파벳 개수
 * https://www.acmicpc.net/problem/10808
 */

#include <bits/stdc++.h>
using namespace std;

#define A 97
#define TOTAL_NUM 26

string word_S;
vector<int> counting(TOTAL_NUM);

int main() {

    cin >> word_S;

    for(int word : word_S) counting[word - A]++;

    for(int coun : counting) cout << coun << " ";
    
    return 0;
}




    









