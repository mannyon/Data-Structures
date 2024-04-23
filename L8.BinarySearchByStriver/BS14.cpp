
int findingNum(vector<int> &arr, int mid){
    int days = 1;
    int tw = 0;
    for(int i=0; i<arr.size(); i++){
        if(tw + arr[i] > mid){
            days += 1;
            tw = arr[i];
        }
        else {
            tw+=arr[i];
        }
    }
    return days;
}


int leastWeightCapacity(vector<int> &arr, int d)
{       
        int start = *max_element(arr.begin(), arr.end());
        int end = accumulate(arr.begin(), arr.end(), 0);
        while (start<=end){
            int mid = start+(end-start)/2;
            int number1 = findingNum(arr, mid);
            if(number1<=d){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return start;
}