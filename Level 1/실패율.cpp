#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class myClass{
  public:
    int stage;
    float fail_rate; //실패율
    int clear; //깬 사람
    int stay; //머무르고 있는 사람
    myClass(int _stage){
        stage = _stage; 
        fail_rate = 0;
        clear = 0;
        stay = 0;
    }
    
    void getFailrate(){
        fail_rate = (float)(stay-clear)/(float)stay;
        if(stay == 0 && clear == 0)
            fail_rate = 0;
    }
};

bool cmp(myClass A, myClass B){
    return (A.fail_rate == B.fail_rate) ? A.stage < B.stage : A.fail_rate > B.fail_rate;
}

vector<int> solution(int N, vector<int> stages) {

