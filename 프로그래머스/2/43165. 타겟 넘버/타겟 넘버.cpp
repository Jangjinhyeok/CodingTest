#include <string>
#include <vector>

using namespace std;
int answer =0;
void dfs(vector<int>nums, int target, int cnt, int sum) ;

int solution(vector<int> numbers, int target) {
    int sum = 0;
    int cnt = 0;
    dfs(numbers,target,cnt,sum);
    return answer;
}
void dfs(vector<int>nums, int target, int cnt, int sum) 
{
	if (cnt == nums.size())
	{
		if(sum == target)
			answer++;
		return;
	}
	dfs(nums,target,cnt+1,sum + nums[cnt]);
	dfs(nums,target,cnt+1,sum - nums[cnt]);
	return;
}