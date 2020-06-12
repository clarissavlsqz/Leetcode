class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int maximum = 0;
        sort(satisfaction.begin(), satisfaction.end());
        int arr[1000];
        for (int i = 0; i < satisfaction.size(); i++) {
            arr[i] = getLikeTime(satisfaction,i);
        }
        
        maximum = arr[0];
        for (int i = 1; i < satisfaction.size(); i++) {
            if (arr[i] > maximum) {
                maximum = arr[i];
            } 
        }
        if (maximum < 0) {
            return 0;
        }
        return maximum;
    }
    
    int getLikeTime(vector<int>& vector, int index) {
        int sum = 0;
        for (int i = index, j=1; i < vector.size(); i++, j++) {
            sum += vector[i] * j;
        }
        return sum;
    }
    
};
