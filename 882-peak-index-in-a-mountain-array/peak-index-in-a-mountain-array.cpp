class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
          int start = 0, end = arr.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            // Compare mid with its right neighbor
            if (arr[mid] < arr[mid + 1]) {
                // We are in the increasing part of mountain
                start = mid + 1;
            } else {
                // We are in the decreasing part of mountain
                end = mid;
            }
        }

        // At the end, start == end == peak index
        return start;
        
    }
};