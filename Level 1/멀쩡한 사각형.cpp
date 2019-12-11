#include <algorithm>

using namespace std;

long long solution(int w,int h)
{
	long long answer = (long long)w * (long long)h; 
    int floor = 0; //y의 정수값
    if(w < h) swap(w,h); //큰 숫자가 w가 되도록
    double slope = (double)h / (double)w ;// 0보다 작음
    
    for(int i = 1; i <= w; i++) {
        answer -= 1; //항상 1을 뺀다.
        if((double)(slope*i) == (int)(slope*i)) floor = (int)(slope*i);
        else {
            if((int)(slope*i) != floor) { //floor가 올라갈 때마다 1을 뺀다.
                floor = (int)(slope*i);
                answer -= 1;
            }
        }
    }
	return answer;
}
