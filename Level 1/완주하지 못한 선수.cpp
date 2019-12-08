#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    map <string,int> m;
    
    for(int i = 0; i < participant.size(); i++) {
        ++m[participant[i]];
    }
    

    for(int j = 0; j < completion.size(); j++) {
        --m[completion[j]];
    }
    
    for(int i = 0; i < participant.size(); i++) {
        if(m[participant[i]] > 0)
            return participant[i];
    }
}
