#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    if(a == b) return a;
    
    if(a > b) std::swap(a,b);
    
    for(int i = a; i <= b; i++)
        answer += i;
    
    return answer;
}
