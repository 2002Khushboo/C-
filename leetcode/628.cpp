#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maximumProduct(vector<int>& nums)
{
    unsigned int n=nums.size();
    //cout<<n<<endl;
    vector<long int> ans;
    int l=0;
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            for(int k=j+1;k<n;++k)
                ans[l++]=nums[i]*nums[j]*nums[k];
        }
    }
    int max=*max_element(ans.begin(),ans.end());
    return max;
}
int main()
{
    vector<int>nums ={-100,-98,-1,2,3,4};
    int ans=maximumProduct(nums);
    cout<<ans;
    return 0;
}
