#include<iostream>
#include<vector>
using namespace std;

// 1
int search(vector<int>& nums, int target) {
		int l = 0, r = nums.size() - 1;
		while(l <= r){
			int mid = l + (r-l)/2;
			if(nums[mid] == target) return mid;
			else if(nums[l]<=nums[mid]){ // debugged >=
				if(nums[l]<=target && target<nums[mid]) r = mid-1;
				else l = mid+1;
			}
			else{
				if(nums[mid]<target && target<=nums[r]) l = mid+1;
				else r = mid-1;
			}
		}
		return -1; // No need to debug this line.
	}

// 2
int mySqrt(int x) {
        if (x == 0)
            return x;
        int first = 1, last = x;
        while (first <= last) {
        int mid = first + (last - first) / 2; // debugged mid was declared inside while loop
            if (mid  == x / mid)
                return mid;
            else if (mid > x / mid) {
                last = mid;
            }
            else {
                first = mid;
            }
        }
        return last;
    }

// 3 
int findMin(vector<int>& nums) {
        int start = 0, end = nums.size()-1, ans = start;
        while(nums[start] > nums[end]) {  
            int mid = (start + end) >> 1;
            if(nums[mid] <= nums[start] && nums[mid] <= nums[end]) 
                end = mid;
            else if(nums[mid] >= nums[start] && nums[mid] >= nums[end])
                start = mid+1;          
            else return nums[mid];
            ans = start;
        }
        return nums[ans];
    }

// 4 
int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low < high){
            int mid = (low + high) >> 1;
            if(nums[mid] > nums[mid+1]){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }

// 5 
int lengthOfLIS(vector<int>& nums) 
    {
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]>ans.back())
            {
                ans.push_back(nums[i]);
            }
            else
            {
                int index=lower_bound(ans.begin(), ans.end(), nums[i])-ans.begin(); // Before solving get acquainted with lower_bound()
                ans[index]=nums[i];
            }
        }    
        return ans.size();
    }

// 6
void selectionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    //printing array
    for(int i=0; i<size; i++){
      cout << arr[i]<<" ";
    }cout << endl;
}

// 7  
int binarySearch(vector<int>& nums, int target) {
        int left = 0, right = int(nums.size());
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target) {
                left = mid+1;
            } else {
                right = mid;
            }
        }
        
        if (left > 0 and nums[left-1] == target) {
            return left-1;
        } else {
            return -1;
        }
    }

int main(){

  // vector<int>nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // int target = 1;
  // int ans = binarySearch(nums, target);
  // cout << ans << endl;

  // int arr[] = {5, 4, 3, 2, 1};
  // int size = 5;
  // selectionSort(arr, size);

  // vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // {1, 2, 2, 2, 3, 3, 4, 6, 6};
  // int ans = lengthOfLIS(nums);
  // cout << ans << endl;  


  // vector<int>nums = {4, 5, 6, 7, 8, 9, 3, 2, 1}; 
  // int ans = findPeakElement(nums);
  // cout << ans << endl;

  // vector<int>nums = {4, 5, 6, 7, 8, 9}; 
  // int ans = findMin(nums);
  // cout << ans << endl;

  // int ans = mySqrt(64);
  // cout << ans << endl;  

  // vector<int>nums = {4, 5, 6, 7, 0, 1, 2}; 
  // int target = 2;
  // int ans = search(nums, target);
  // cout << ans << endl;

  return 0;
}