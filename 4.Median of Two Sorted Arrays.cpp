/**
 *There are two sorted arrays nums1 and nums2 of size m and n respectively. 
 *Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).
**/
class Solution {
public:
    double findKth(int *nums1,int m,int *nums2,int n,int k)
    {
        if(m < n)
        	return findKth(nums2,n,nums1,m,k);
        if(n==0)
        	return nums1[k-1];
        if(k==1)
        	return std::min(nums1[0],nums2[0]);
        int p2=std::min(k/2,n);
        int p1=k-p2;
        if(nums1[p1-1] < nums2[p2-1])
        	return findKth(nums1+p1,m-p1,nums2,n,k-p1);
        else if(nums1[p1-1] > nums2[p2-1])
        	return findKth(nums1,m,nums2+p2,n-p2,k-p2);
        else 
        	return nums1[p1-1];
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if( (nums1.size() + nums2.size() ) %2 != 0)
        	return findKth(&nums1[0],nums1.size(),&nums2[0],nums2.size(),(nums1.size()+nums2.size())/2+1);
        else 
        	return (findKth(&nums1[0],nums1.size(),&nums2[0],nums2.size(),(nums1.size()+nums2.size())/2) + 
					findKth(&nums1[0],nums1.size(),&nums2[0],nums2.size(),(nums1.size()+nums2.size())/2+1) )/2;
    }
};
