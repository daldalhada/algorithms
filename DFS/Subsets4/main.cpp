#include <string>
#include <vector>
#include <iostream>
using namespace std;
int answer = 0;

void dfs(int level, int sum, vector<int> numbers, int target){
    if(level == numbers.size()){
        if(target==sum) {
            answer++;
        }
    }
    else {
        dfs(level+1, sum+numbers[level], numbers, target);
        dfs(level+1, sum-numbers[level], numbers, target);
    }
}

int solution(vector<int> numbers, int target) {
    
    dfs(0, 0, numbers, target);
    
    return answer;
}