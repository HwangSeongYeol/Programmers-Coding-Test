#include <string>
#include <vector>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> student(n, 1); // �л��� ���� �ִ� ��� ����
    
    for(int num : lost) { //���� ���� �л�
        student[num-1]--;
    }
    
    for(int num : reserve) { //���� ü������ ������ �л�
        student[num-1]++;
    }
    
    for(int i = 0; i < n-1; i++) { // �޻������ ��� �Ա�
        if(student[i] == 0 && student[i+1] == 2) {
            student[i] = 1;
            student[i+1] = 1;
        }
    }
    
    for(int i = n-1; i > 0; i--) { // �ջ������ ��� �Ա�
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
