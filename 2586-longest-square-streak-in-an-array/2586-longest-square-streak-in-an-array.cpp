class Solution {
public:
    int longestSquareStreak(vector<int>& nums)
    {
     unordered_set<double>st;
     for (int i=0;i<nums.size();i++)
     {
         st.insert(nums[i]);
     }
     int ans=1;
     int cur=1;
     for (int i=0;i<nums.size();i++)
     { 
         cur=1;
         double val=(double)nums[i];
         val=sqrt(val);
         while(st.count(val))
         {
             
             cur++;
             val=sqrt(val);
             cout<<val<<" ";
         }
         ans=max(ans,cur);
     }
     if (ans==1) return -1;
     return ans;

    }
};