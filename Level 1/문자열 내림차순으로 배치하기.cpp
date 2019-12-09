#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(char a, char b) {
    if(a < 'A' && b < 'A') {
        return a > b;
    }
    else if(a < 'A' && b >= 'A') {
        return a < b;
    }
    else if(a >= 'A' && b < 'A') {
        return a > b;
    }
    else
        return a > b;
}

string solution(string s) {
    string answer = "";
    vector<char> STRING;
    for(int i = 0; i < s.length(); i++) {
        STRING.push_back(s[i]);
    }
    sort(STRING.begin(), STRING.end(), cmp);
    for(char ch :STRING) {
        answer += ch;
    }
    return answer;
}
