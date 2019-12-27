#include <string>
#include <vector>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    for(int i = 0; i < phone_book.size(); i++) {
        for(int j = 0; j < phone_book.size(); j++) {
            if(i == j) continue;
            if(phone_book[i].substr(0, phone_book[j].length()) == phone_book[j])
                return false;
        }
    }
    return answer;
}
