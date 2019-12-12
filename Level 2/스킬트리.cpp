#include <string>
#include <vector>

using namespace std;

bool isRight(string skill, string str) {
    char c;
    int i = 0;
    string tree; //선행 스킬 순서 2개씩
    while(i < skill.length()) {
        tree = skill.substr(i, 2);
        for(int j = 0; j < str.length(); j++) { //스킬트리에 후행스킬이 있는데 선행스킬이 없으면 false 반환
            if(str[j] == tree[1]) {
                bool flag = false;
                for(int k = 0; k < j; k++) 
                    if(str[k] == tree[0])
                        flag = true;
                if(flag == false)
                    return false;
            }
        }
        i++;
    }
    return true;
}

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    for(string skill_tree : skill_trees) {
        if(isRight(skill, skill_tree))
            answer++;
    }
    return answer;
}
