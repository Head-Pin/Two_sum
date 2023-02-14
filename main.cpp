#include <iostream>
#include <vector>

auto two_sum(std::vector<int> nums,int target){
    for(int i{};i<nums.size();++i){
        for(int j {i+1};j<nums.size();++j){
            if(nums[i] + nums[j] == target){
                std::vector<int> ans = {i,j};
                return ans;
            }
        }
    }
    return std::vector<int>();
}

auto main() ->int {
    std::vector<int> ans = two_sum({2,7,11,15},9);
    std::vector<int> ans1 = two_sum({4,2,1,0,9},9);
    for(size_t i {};i<ans.size();++i){
        std::cout<< ans1[i] << std::endl;
    }
    return 0;
}