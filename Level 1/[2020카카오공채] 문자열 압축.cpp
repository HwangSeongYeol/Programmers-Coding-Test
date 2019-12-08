#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = s.length();
    
    for(int i = 1; i <= s.length()/2; i++) {
        string compress = "";
        int count = 1;
        string prev = s.substr(0, i);
        
        for(int j = i; j <= s.length(); j+=i) {
            string now = s.substr(j,i);
            if(now == prev) {
                count++;
            }
            else {
                if(count != 1) {
                    compress += to_string(count) + prev;
                    count = 1;
                }
                else 
                    compress += prev;
            }
            if(now.length() < i)
                compress += now;
            prev = now;
        }
        if(compress != "" && compress.length() < answer) answer = compress.length();
    }
    
    return answer;
}
