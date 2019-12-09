#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i = 0; i < s.length(); i++) {
        if('A' <= s[i] && s[i] <= 'Z'){
            answer += s[i]+n;
            if('Z' < answer[i]) 
                answer[i] -= 26;
        }
        else if('a' <= s[i] && s[i] <= 'z'){
            answer += s[i]+n;
            answer[i] -= 26;
            if('a' > answer[i]) 
                answer[i] += 26;
        }
        else if(s[i] == ' ') 
            answer += " ";
    }
    return answer;
}


