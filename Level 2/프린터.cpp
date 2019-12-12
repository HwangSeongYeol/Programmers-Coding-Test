#include <string>
#include <vector>

using namespace std;

class myClass{
  public:
    int priority;
    int location;
  myClass(int priority_, int location_){
      priority = priority_;
      location = location_;
  };
};

bool isPriority(vector<int> prioritiesArr, int now) {
    for(int i = now + 1; i < 10; i++) 
        if(prioritiesArr[i] > 0)
            return false;
    return true;
}

int solution(vector<int> priorities, int location) {
    int answer = 0;
    vector<myClass> myVect;
    vector<int> prioritiesArr(10, 0);
    vector<int> print; //실제 인쇄 순서
    for(int i = 0; i < priorities.size(); i++) {
        myVect.push_back(myClass(priorities[i], i));
        prioritiesArr[priorities[i]]++;
    }

    while(!myVect.empty()) {
        myClass temp = myVect.front();
        if(isPriority(prioritiesArr, temp.priority)) {
            print.push_back(temp.location);
            prioritiesArr[temp.priority]--;
        }
        else 
            myVect.push_back(temp);
        myVect.erase(myVect.begin());
    }
    
    for(int i = 0; i < print.size(); i++) 
        if(print[i] == location)
            return i+1;
    
    return answer;
}
