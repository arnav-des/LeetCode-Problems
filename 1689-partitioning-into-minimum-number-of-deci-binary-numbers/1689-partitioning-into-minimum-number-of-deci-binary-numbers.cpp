class Solution {
public:
    int minPartitions(string n) {
        vector<int> vec;
        for(int i=0; i<n.length(); i++) {
            vec.push_back(int(n[i]));
        }
        sort(vec.begin(), vec.end(), greater<int>());
        return (vec[0]-48);
    }
};