#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int prev = arr[0];
    answer.push_back(prev);
    
    for(int i = 1; i < arr.size(); i++) {
        int now = arr[i];
        if(prev == now) {
            continue;
        }
        answer.push_back(now);
        prev = now;
    }

    return answer;
}
