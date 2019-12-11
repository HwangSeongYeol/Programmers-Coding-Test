#include <string>
#include <vector>

using namespace std;

int sumDigit(int num) {
    int sum = 0;
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool solution(int x) {
    return (x%sumDigit(x))? false : true;
}
