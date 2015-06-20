#include "lengthOfLongestSubstring.h"

int Solution55::lengthOfLongestSubstring(string s) 
{
	//int length = s.size();
	//int ascii[256] = {0};
	//int start = 0, maxLen = 0;
	//for (int i = 0 ;i< length;i++)
	//{
	//	while (ascii[s[i]])
	//	{
	//		ascii[s[start]] = false;
	//		start++;
	//	}
	//	ascii[s[i]] = true;
	//	maxLen = max(maxLen , i - start +1);
	//}
	//return maxLen;

	//·½·¨2£º
	if (s[0] == 0) return 0;
	int start = 0;
	int end = 0;
	int ans = 0;
	int i = 0;
	int *hm = (int *)malloc(sizeof(int) * 128);
	while (s[i] != 0) {
		hm[s[i++]] = -1;
	}
	hm[s[start]] = start;
	while (true) {
		if (s[end + 1] == 0) {
			if (end - start + 1 > ans) ans = end - start + 1;
			break;
		}
		if (hm[s[end + 1]] >= start && hm[s[end + 1]] <= end) {
			if (end - start + 1 > ans) ans = end - start + 1;
			start = hm[s[end + 1]] + 1;
			end++;
			hm[s[end]] = end;
			continue;
		}
		end++;
		hm[s[end]] = end;
	}
	return ans;

}