#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int rmd;
    
    while(n > 0) {
        rmd = n % 3;
        n /= 3;
        if(rmd == 0) { //나머지가 0이면 몫에서 1빼고 뒤를 4로 끝내면 됨!
            n -= 1;
            rmd = 4;
        }
        answer = to_string(rmd) + answer;
    }
    
    return answer;
}
