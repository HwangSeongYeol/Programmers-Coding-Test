#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int i = 0;
    for(string str : seoul) {
        if(str == "Kim") {
            answer += "김서방은 ";
            answer += std::to_string(i);
            answer += "에 있다";
        }
        i++;
    }
    return answer;
}
