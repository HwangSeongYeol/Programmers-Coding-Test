#include <string>
#include <vector>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> student(n, 1); // 학생이 갖고 있는 운동복 갯수
    
    for(int num : lost) { //도둑 맞은 학생
        student[num-1]--;
    }
    
    for(int num : reserve) { //여벌 체육복을 가져온 학생
        student[num-1]++;
    }
    
    for(int i = 0; i < n-1; i++) { // 뒷사람에게 얻어 입기
        if(student[i] == 0 && student[i+1] == 2) {
            student[i] = 1;
            student[i+1] = 1;
        }
    }
    
    for(int i = n-1; i > 0; i--) { // 앞사람에게 얻어 입기
        if(student[i-1] == 2 && student[i] == 0) {
            student[i-1] = 1;
            student[i] = 1;
        }
    }

    for(int num : student) {
        if(num > 0) answer++;
    }
    
    return answer;
}
