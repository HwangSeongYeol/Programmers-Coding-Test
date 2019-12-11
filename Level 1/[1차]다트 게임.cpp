#include <string>
#include <cmath>
#include <iostream>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int score[4];
    int index = 0;
    
    for(int i = 0; i < dartResult.length(); i++) {
        if('0' <= dartResult[i] && dartResult[i] <= '9') {
            if(dartResult[i] == '1' && dartResult[i+1] == '0') {
                i++;
                score[index] = 10;
            }
            else
                score[index] = dartResult[i] - '0';
        }
        
        if(dartResult[i] == 'S') score[index++] = pow(score[index],1);
        else if(dartResult[i] == 'D') score[index++] = pow(score[index],2);
        else if(dartResult[i] == 'T') score[index++] = pow(score[index],3);
        
        if(dartResult[i] == '*') {
            score[index-1] *= 2;
            if(index > 1) score[index-2] *= 2;
        }
        else if(dartResult[i] == '#') {
            score[index-1] *= -1;
        }
    }
    
    for(int i = 0; i < 3; i++) 
        answer += score[i];
    
    return answer;
}
