#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer;
    int length = number.length()-k;
    for(int i = 0; i < k; i++) {
        for(int j = 1; j < number.length(); j++) {
            if(number[j - 1] < number[j]) {
                number = number.substr(0, j - 1) + number.substr(j);
                break;
            }
        }
    }
    answer = number.substr(0, length);
    return answer;
}
