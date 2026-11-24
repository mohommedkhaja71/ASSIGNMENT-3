int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        // Use integer arithmetic to find the midpoint safely
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;          // Target found
        } else if (nums[mid] < target) {
            left = mid + 1;      // Search in the right half
        } else {
            right = mid - 1;     // Search in the left half
        }
    }

    return -1;                   // Target not found
}