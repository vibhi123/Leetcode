class Solution {
public:
    string makeGood(string s) {
        for (int i = 0; i < s.size();) 
        {
            char c = s[i];
            cout << "s=" << s << endl;

            if ((i+1 < s.size()) &&
                (s[i + 1] == c + 32 || s[i + 1] == c - 32))
                {
                cout << "erase=" << s[i] << endl;
                s.erase(i, 2);
            } 
            else if(i>=1 && (s[i-1]==c + 32 || s[i-1] == c-32))
            {
                cout << "erase=" << s[i] << endl;
                s.erase(i - 1, 2);
                cout<<"i="<<i<<endl;
                 i = max(0, i - 2);

            }
            

            else
                i++;
        }
        return s;
    }
};