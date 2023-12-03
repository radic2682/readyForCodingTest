/**
 * BAEKJOON : 2309 일곱 난쟁이
 * https://www.acmicpc.net/problem/2309
 */

#include <bits/stdc++.h>
using namespace std;

array<int, 9> nanJ;
array<int, 2> finded;

int sum = 0;

/**
 *      순열 조합 => 인덱스로 활용
 *      i : 0       j : x
 *      i : 1       j : 0
 *      i : 2       j : 0 ~ 1
 *      i : 3       j : 0 ~ 2
 *      i : 4       j : 0 ~ 3
 *      i : 5       j : 0 ~ 4
 *      i : 6       j : 0 ~ 5
 *      i : 7       j : 0 ~ 6
 *      i : 8       j : 0 ~ 7
 */

void process(){
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < i; j++) {

            if((sum - nanJ[i] - nanJ[j]) == 100) {
                finded[0] = nanJ[i];
                finded[1] = nanJ[j];
                return;
            }

        }
    }
}

int main(){

    for (int &num : nanJ) {
        cin >> num;
        sum += num;
    }

    process();
    sort(nanJ.begin(), nanJ.end());
   
    for (int i = 0; i < 9; i++) {
        if(nanJ[i] == finded[0] || nanJ[i] == finded[1]) {

        } else {
            cout << nanJ[i] << "\n";
        }
    }

    return 0;
}




    









