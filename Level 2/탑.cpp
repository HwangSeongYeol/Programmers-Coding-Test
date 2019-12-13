#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    for(int i = 0; i < heights.size(); i++) {
        bool flag = true;
        for(int j = i - 1; j >= 0; j--) {
            if(heights[j] > heights[i]){
                answer.push_back(j+1);
                flag = false;
                break;
            }
        }
        if(flag) answer.push_back(0); 
    }
    return answer;
}
