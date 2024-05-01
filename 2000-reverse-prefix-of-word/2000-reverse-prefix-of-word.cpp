class Solution {
public:
    string reversePrefix(string word, char ch) {

     int pos=-1;
      for (int i=0;i<word.size();i++)
      {
        if(word[i]==ch)
        {
            pos=i;
            break;

        }
      }
      int i=0,j=pos;
      for(; i<=j;i++,j--)
      swap(word[i],word[j]);

      return word;
        
    }
};