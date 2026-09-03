class Solution(object):
    def uniformArray(self, nums1):
        """
        :type nums1: List[int]
        :rtype: bool
        """
        if min(nums1)%2==1:
            return True

        for num in nums1:
            if num%2==1:
                return False
        return True
