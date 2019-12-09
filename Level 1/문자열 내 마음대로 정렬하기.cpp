#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int i;

bool cmp(string a, string b){
    return (a[i] == b[i]) ? a < b : a[i] < b[i]; 
}

vector<string> solution(vector<string> strings, int n) {
    i = n;
    
    sort(strings.begin(), strings.end(), cmp);

    return strings;
}
