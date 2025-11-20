class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;

        int carry = 0;
        string result = "";

        while(i >= 0 || j >= 0 || carry > 0)
        {   
            int digitA = (i >= 0) ? a[i] - '0' : 0;
            int digitB = (j >= 0) ? b[j] - '0' : 0;

            int total = digitA + digitB + carry;
            carry = total/2;
            total = total%2;

            result += to_string(total);
            i--;
            j--;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};