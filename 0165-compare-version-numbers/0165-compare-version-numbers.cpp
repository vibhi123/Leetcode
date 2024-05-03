class Solution {
public:
    int compareVersion(string version1, string version2) {


        vector<int>v1;
        vector<int>v2;
        int start=0;

        
        // for version 1

        for(int i=0;i<=version1.size();i++)
        {
            if(version1[i]=='.')
            {
                string s= version1.substr(start,i-start);
                cout<<"\n v1="<<s;
                v1.push_back(stoi(s));
                start=i+1;
            }

           else if(i==version1.size())
           {
                string s= version1.substr(start,i-start);
                 cout<<"\n v1="<<s;
                 v1.push_back(stoi(s));
                break;
           }
        }

        // for version 2 
        start=0;
        for(int i=0;i<=version2.size();i++)
        {
            if(version2[i]=='.')
            {
                string s= version2.substr(start,i-start);
                 cout<<"\n v2="<<s;
                 v2.push_back(stoi(s));
                start=i+1;
            }

           else if(i==version2.size())
           {
                string s= version2.substr(start,i-start);
                 cout<<"\n v2="<<s;
                 v2.push_back(stoi(s));
                break;
           }
        }


        // cout<<"\nv1="<<v1.size();
        // cout<<"\n v2="<<v2.size();
        while(v1.size()>v2.size())
        {   
            v2.push_back(0);
        }
       while(v1.size() < v2.size())
        {   
            v1.push_back(0);
        }


    for(int i=0;i<v1.size();i++)
    {   
       cout<<endl<<v1[i]<<" "<<v2[i];
        if(v1[i]>v2[i])
        return 1;

        else if(v1[i]<v2[i])
        return -1;
    } 


        return 0;
    }
};