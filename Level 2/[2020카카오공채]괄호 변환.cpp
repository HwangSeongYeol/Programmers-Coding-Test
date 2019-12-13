#include <string>
#include <vector>
#include <iostream>
using namespace std;

string reverse(string p) { // (()) -> ))(( 
    for(int i = 0; i < p.length(); i++) {
        if(p[i] == '(')
            p[i] = ')';
        else 
            p[i] = '(';
    }
    return p;
}

string cut(string p) { // 앞뒤 자르기
    return p.substr(1,p.length()-2);
}

string solving(string p) {
    if (p == "") return "";
    int num_left = 0;
    int num_right = 0;
    int i = 0;
    bool wrong = false;
    do {
        if(p[i] == '(')
            num_left++;
        else if (p[i] == ')') {
            if(i == 0) wrong = true;
            num_right++;
        }
        i++;
    }while(num_left != num_right);
    
    string u = p.substr(0,i);
    string v = p.substr(i);
    
    if(wrong) {
        string temp = "(" + solving(v) + ")";
        return temp + reverse(cut(u));
    }
    else { 
        return u + solving(v);
    }
    
    return p;
}

string solution(string p) {
    string answer = "";
    answer = solving(p);
    return answer;
}
