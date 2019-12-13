#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    queue<int> truck_on_bridge;
    for(int i = 0; i < bridge_length; i++)
        truck_on_bridge.push(0);
    int answer = 0;
    int weight_on_bridge = 0;
    int truck_now = truck_weights.front();
    truck_weights.erase(truck_weights.begin());
    do{
        int weight_of_exiting_truck = truck_on_bridge.front();
        truck_on_bridge.pop();
        weight_on_bridge -= weight_of_exiting_truck;
        
        if(weight_on_bridge + truck_now <= weight) {
            weight_on_bridge += truck_now;
            truck_on_bridge.push(truck_now);
            if(!truck_weights.empty()) {
                truck_now = truck_weights.front(); //truck_now 갱신
                truck_weights.erase(truck_weights.begin());
            }
            else
                break;
        }
        else {
            truck_on_bridge.push(0);
        }
        answer++;
    } while(1);
    
    if(weight_on_bridge)
        answer += bridge_length+1;
    
    return answer;
}
