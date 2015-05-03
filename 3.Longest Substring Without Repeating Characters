/**
 *Given a string, find the length of the longest substring without repeating characters. For example, the longest substring without 
 *repeating letters for "abcabcbb" is "abc", which the length is 3. For "bbbbb" the longest substring is "b", with the length of 1.
**/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    	map<char,int> m;
    	int maxLength=0;
    	int bashIndex=0;
    	int buf_max=0;
    	for(int i=0;i<s.size();++i){
    		if( m.find(s[i]) == m.end() || m[s[i]] < bashIndex){
    			++buf_max;
			}
			else{
				bashIndex=m[s[i]];
				if(buf_max > maxLength)
					maxLength = buf_max;
				buf_max=i-m[s[i]];
			}
			m[s[i]]=i;
		}
		if(buf_max > maxLength)
			maxLength = buf_max;
		return maxLength;
	}
};
