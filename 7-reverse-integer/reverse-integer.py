class Solution(object):
    def reverse(self, x):
        if x>0:
            x=str(x)[::-1]
            x=int(x)
        elif x<0:
            x=-x
            x=str(x)[::-1]
            x=-int(x)
        if -2147483648>x or x>2147483647:
            return 0
        return x  

        