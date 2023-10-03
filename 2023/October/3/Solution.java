// Column name from a given column number
// October 3, 2023
// Java Code

class Solution
{
    String colName (long n)
    {
        StringBuilder ans = new StringBuilder(); // to store the result
    
    	while (n > 0){
    	    n--;
    		ans.append((char)('A' + n%26));
    		n /= 26;
    	}
    	return ans.reverse().toString();
}
}
