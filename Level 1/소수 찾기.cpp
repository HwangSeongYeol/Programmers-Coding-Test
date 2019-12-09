#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> isPrime (n+1,true);
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i < n+1; i++) {
        if(isPrime[i] == true) {
            for(int j = 2; i * j < n+1; j++) {
                isPrime[i * j] = false;
            }
            answer++;
        }
    }
    return answer;
}
