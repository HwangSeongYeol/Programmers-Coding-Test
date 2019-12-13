#include <vector>
#include <iostream>
using namespace std;

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
int glo_m = 0;
int glo_n = 0;

int splash(int color, int x, int y, vector<vector<int>> &picture) {
    int answer = 1;
    picture[x][y] = 0;
    if(x - 1 > 0 && picture[x - 1][y] == color) { //위
        answer += splash(color, x - 1, y, picture);
    }
    if(y + 1 < glo_n && picture[x][y + 1] == color) { //오른쪽
        answer += splash(color, x, y + 1, picture);
    }
    if(x + 1 < glo_m && picture[x + 1][y] == color) { // 아래쪽
        answer += splash(color, x + 1, y, picture);
    }
    if(y - 1 > 0 && picture[x][y - 1] == color) { // 왼쪽
        answer += splash(color, x, y - 1, picture);
    }
    return answer;
}

void print(vector<vector<int>> picture) {
    for(int i = 0; i < picture.size(); i++) {
        for(int j = 0; j < picture[0].size(); j++) {
            cout << picture[i][j] << " " ;
        }
        cout << endl;
    }
    cout << "!!!!!!!!" << endl;
}

vector<int> solution(int m, int n, vector<vector<int>> picture) {
    glo_m = m;
    glo_n = n;
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    int area_size = 0;
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(picture[i][j] != 0){
                area_size = splash(picture[i][j], i, j, picture);
                number_of_area++;
                //print(picture);
            }
                
            if(area_size > max_size_of_one_area) max_size_of_one_area = area_size;
        }
        
    }
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}
