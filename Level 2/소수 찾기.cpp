#include <string>
#include <vector>

using namespace std;

bool isRight(int prime, vector<int> num_digit) {
    string temp = to_string(prime);
    for(int i = 0; i < temp.length(); i++) {
        if(--num_digit[temp[i] - '0'] < 0)
            return false;
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    vector<int> num_digit(10,0); //numbers의 숫자 갯수
    
    for(int i = 0; i < numbers.length(); i++) 
        num_digit[numbers[i] - '0']++;
    
    vector<bool> isPrime(10000000, true); //8자리까지의 소수 확인
    isPrime[0] = false;
    isPrime[1] = false;
    
    for(int i = 2; i < 10000000; i++) {
        if(isPrime[i] == true) {
            if(isRight(i, num_digit)) //소수 중에 numbers로 만들 수 있으면 answer++
                answer++;
            for(int j = 1; j * i < 10000000; j++) 
                isPrime[j * i] = false;
        }
    }
    
    return answer;
}
