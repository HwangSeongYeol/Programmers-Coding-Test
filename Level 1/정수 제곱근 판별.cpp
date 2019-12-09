#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long temp;
    temp = sqrt(n);
    if(temp * temp == n)
        return answer = (temp+1)*(temp+1);
    else
        return -1;
}
