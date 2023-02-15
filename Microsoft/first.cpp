class Solution {
public:
    void solve(vector<vector<int>> &ans, vector<int> &v, int sum, int ind, int k,int n){
        if(v.size() == k){
            if(sum == n){
                ans.push_back(v);
            }
            return;
        }
        for(int i=ind;i<=9;i++){
            //if(i>n) break;
            sum += i;
            v.push_back(i);
            solve(ans,v,sum,i+1,k,n);
            v.pop_back();
            sum -= i;
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int>yuhi;
        int sum = 0;
        solve(ans,yuhi,sum,1,k,n);
        return ans;
    }
};