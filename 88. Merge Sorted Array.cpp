class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = nums2.size()-1;
        int i;
        if(m>0)
            i = nums1.size()-nums2.size()-1;
        else 
            i = -1;
        int ind = nums1.size()-1;
        while(ind>=0&&i>=0&&j>=0){
            if(nums1[i]>=nums2[j]){
                nums1[ind--] = nums1[i--];
            }else
                nums1[ind--] = nums2[j--];
        }
        while(j>=0)
            nums1[ind--] = nums2[j--];
        while(i>=0)
            nums1[ind--] = nums1[i--];
    }
};
