#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            answer += " ";
            count = 0;
        }
        else if(count % 2 == 0) { //대문자로
            if('a' <= s[i] && s[i] <= 'z') {
                answer += s[i] - 32;
            }
            else
                answer += s[i];
            count++;
        }
        else if(count % 2 == 1) { //소문자로
            if('A' <= s[i] && s[i] <= 'Z') 
                answer += s[i] + 32;
            else 
                answer += s[i];
            count++;
        }
    }
    return answer;
}
