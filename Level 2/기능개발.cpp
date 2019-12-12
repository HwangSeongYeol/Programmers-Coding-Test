#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int size = progresses.size();
    int i = 0;
    
    while(i < size) { //모든 기능을 배포할 때까지
        int num = 0;
        while(progresses[i] == 100) { //앞선 기능이 완료되면
            i++;
            num++;
        }
        if(num != 0) //후행 기능 수만큼 합해서 push_back
            answer.push_back(num);
        for(int j = 0; j < size; j++) {
            if(progresses[j] + speeds[j] > 100)
                progresses[j] = 100;
            else
                progresses[j] += speeds[j];
        }
    }
    return answer;
}
