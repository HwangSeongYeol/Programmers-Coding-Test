#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i = 0; i < arr1.size(); i++) {
        int temp = arr1[i] | arr2[i];
        string row = "";
        int k = 0;
        
        for(int j = 1; k < n; j*=2, k++)
            row = (j&temp) ? "#" + row : " " + row;
        
        answer.push_back(row);
    }
    
    return answer;
}
