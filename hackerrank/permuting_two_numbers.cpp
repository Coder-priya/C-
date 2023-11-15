string twoArrays(int k, vector<int> A, vector<int> B) {
    sort(A.begin() , A.end()) ;
    sort(B.begin() , B.end() , greater<int>()) ;
    int len = A.size() ;
    for(int i = 0 ; i < len ; i++ ){
        if(A[i] + B[i] < k) {
            return "NO" ;
        }
    }
    return  "YES" ;
}
