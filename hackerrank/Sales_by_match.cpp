/* 
There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.
Example,
n = 7
ar = [1,2,1,2,1,3,2]
There is one pair of color 1 and one of color 2. There are three odd socks left, one of each color. The number of pairs is 2.

Function Description:
Complete the sockMerchant function in the editor below.
sockMerchant has the following parameter(s):
--> int n: the number of socks in the pile
--> int ar[n]: the colors of each sock
*/
int sockMerchant(int n, vector<int> ar) {
    unordered_map<int, int> hashMap;
    for(int i = 0; i < n; i++){
        if (hashMap.find(ar[i]) != hashMap.end()) {
            hashMap[ar[i]] = hashMap[ar[i]]+1;
        }
        else{
            hashMap.insert({ar[i], 1});
        }
    }
    
    int sum = 0;
    
    for(const auto& entry: hashMap){
        int pair  = entry.second / 2;
        sum = sum + pair;
    }
    return sum;
}
