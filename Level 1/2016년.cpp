#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = 0;
    string day[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    for(int i = 0; i < a-1; i++) //a-1월 만큼 날짜에 덧셈
        days += month[i];
    days += b-1; //b-1일 만큼 날짜에 덧셈
    
    answer = day[days%7];
    
    return answer;
}
