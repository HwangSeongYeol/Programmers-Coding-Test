#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int site = 0;
    int small = arr[0];
    for(int i = 0; i < arr.size(); i++) {
        if(small > arr[i]) {
            small = arr[i];
            site = i;
        }
    }
    arr.erase(arr.begin()+site);
    if(arr.empty()) return {-1};
    return arr;
}
