#include <string>

using namespace std;

bool solution(string s)
{
    int num_p = 0;
    int num_y = 0;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'p' || s[i] == 'P') num_p++;
        if(s[i] == 'y' || s[i] == 'Y') num_y++;
    }
    
    return (num_p == num_y) ? true : false;
}
