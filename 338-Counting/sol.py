class Solution(object):
    def countBits(self, num):
        """
        :type num: int
        :rtype: List[int]
        """
        bit_cnt_list = [0, 1]
        power_of_2 = 1
        while 2 ** power_of_2 <= num:
            bit_cnt_list = bit_cnt_list + [x+1 for x in bit_cnt_list]
            power_of_2 += 1
        return bit_cnt_list[:num+1]

