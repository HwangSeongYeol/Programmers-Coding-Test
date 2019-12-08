#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> supoja[3]
        ={{1, 2, 3, 4, 5}, 
          {2, 1, 2, 3, 2, 4, 2, 5},
          {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}};
    int score[3] = {0, 0, 0};
    int highest = 0;
    
    for(int i = 0; i < answers.size(); i++) {
        int num = supoja[0][i % 5];
        if(num == answers[i]) score[0]++;
        num = supoja[1][i % 8];
        if(num == answers[i]) score[1]++;
        num = supoja[2][i % 10];
        if(num == answers[i]) score[2]++;
    }
    
    for(int i = 0; i < 3; i++) 
        if(highest < score[i]) highest = score[i];

    for(int i = 0; i < 3; i++) 
        if(highest == score[i]) answer.push_back(i+1);
    
    return answer;
}
