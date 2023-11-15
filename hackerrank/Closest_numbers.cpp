vector<int> closestNumbers(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int diff = INT_MAX;
    vector<int> result;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] - arr[i-1] < diff){
            diff = arr[i] - arr[i-1];
            result = {arr[i-1], arr[i]};
        }
        else if(arr[i] - arr[i-1] == diff){
            result.insert(result.end(), {arr[i-1], arr[i]});
        }
    }
    return result;
}
