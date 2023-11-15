vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    int n = arr.size(), m = brr.size();
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    int i = 0, j = 0;
    vector<int> res;        
    while(i < n && j < m) {
        if(arr[i] > brr[j] ) {
            if(res.size() == 0 || res.back() != brr[j])
                res.push_back(brr[j]);
            ++j;
        }
        else {
            ++i, ++j;
        }
    }
    while(j < m) {
        if(res.size() == 0 || res.back() != brr[j])
            res.push_back(brr[j]);
        ++j;
    }
    return res;
}
