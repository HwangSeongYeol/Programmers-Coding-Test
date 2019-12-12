#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    for(int i = 0; i < prices.size()-1; i++) {
        int first = prices[i];
        int howlong = prices.size()-1-i;
        for(int j = i + 1; j < prices.size(); j++) {
            if(first > prices[j]) {
                howlong = j-i;
                break;
            }
        }
        answer.push_back(howlong);
    }
    answer.push_back(0); // 마지막
    return answer;
}
