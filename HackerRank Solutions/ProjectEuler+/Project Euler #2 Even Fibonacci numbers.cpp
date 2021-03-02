#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

map<unsigned long long, unsigned long long> memo;
set<unsigned long long> S;

unsigned long long int Fibonacci(unsigned long long n, unsigned long long prev, unsigned long long val, unsigned long long sum){
    S.insert(val);
    memo[val] = sum;
    if(val > n){
        return sum;
    }
    unsigned long long next = val + prev;
    if(val % 2 == 0){
        sum += val;
    }
    return Fibonacci(n, val, next, sum);
}

int main() {
    int T;
    cin >> T;
    while(T--){
        unsigned long long N, highest;
        cin >> N;
        highest = N;
        for(auto i : S){
            if(i >= N){
                highest = i;
                break;
            }
        }
        if(memo.count(highest) != 0){
            cout << memo[highest] << endl;
        }
        else{
            unsigned long long ans = Fibonacci(N, 0, 1, 0);
            cout << ans << endl;
        }
    }
}