#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class MyClass{
    public:
    string name;
    string n;
    MyClass(string name, string n):name(name),n(n){}
};

bool cmp(MyClass a, MyClass b){
    if(a.n < b.n)
        return true;
    else if(a.n == b.n) {
        if(a.name < b.name) return true;
        return false;
    }
    else if(a.n > b.n)
        return false;
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    vector<MyClass> mystr;
    
    for(string str : strings) 
        mystr.push_back(MyClass(str, str.substr(n,1)));
    
    sort(mystr.begin(), mystr.end(), cmp);

    for(MyClass myClass : mystr) 
        answer.push_back(myClass.name);
    
    return answer;
}
