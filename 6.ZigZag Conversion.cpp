/**
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this
pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"
Write the code that will take a string and make this conversion given a number of rows:

string convert(string text, int nRows);
convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".
**/

/**
这个锯齿状定义很奇怪，("ABCDEFGHI",4)是这样的
A   G
B F H
C E I
D
**/
class Solution {
public:
    string convert(string s, int numRows) {
    	if(numRows==1)
    		return s;
        int nSize=numRows+numRows-2;
        auto result=new string[numRows];
        for(int i=0;i<s.size();++i){
        	int index=i%nSize;
        	if(index < numRows)
        		result[index].push_back(s[i]);
        	else
        		result[numRows-(index+1-numRows)-1].push_back(s[i]);
		}
		string returnstring;
		for(int i=0;i<numRows;++i){
			returnstring+=result[i];
		}
		return returnstring;
    }
};
