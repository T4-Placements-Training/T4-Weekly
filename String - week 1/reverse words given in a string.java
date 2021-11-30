class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string output_s="";
        string res="";
        deque<string> output;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]!='.')
                res+=S[i];
            else
            {
                output.push_front(res);
                res="";
            }
        }
        output.push_front(res);
        int n=output.size();
        for(int i=0;i<n-1;i++)
        {
            output_s+=output[i];
            output_s+='.';
        }
        output_s+=output[n-1];
        return output_s; 
    } 
};