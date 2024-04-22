class Solution {
public:

    int isPossibleSol(vector<int> v, int m, int k, int day, int n){
        int nK = 0, nM = 0;
        for(int i=0; i<n; i++){
            if(v[i]<=day){
                nK++;
                if(nK==k){
                    nM++;
                    nK=0;
                    if(nM == m){
                        return true;
                    }
                }
            }
            else {
                nK = 0;
            }
        }
        return false;
    }



    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int start = 1;
        int ans = -1;
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        while (start<=end){
            int mid = start + (end-start)/2;
            if(isPossibleSol(bloomDay, m, k, mid, n)){
                ans = mid;
                end = mid-1;
            }
            else {
                start = mid+1;
            }
        }
        return ans;
    }