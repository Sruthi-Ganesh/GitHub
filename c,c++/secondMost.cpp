// unordered_map::begin/end example
#include <iostream>
#include <unordered_map>
#include<vector>
#include<iomanip>
using namespace std;
string unordered(vector<string> words)

{
    int max=0;
     int second_max=0; 
     unordered_map <string,int>values;
     
     for(int j=0;j<words.size();j++)
     {
         values[words[j]]++;
         
     }
     
     
     for(auto j=values.begin();j!=values.end();j++)
     {
          cout<<setw(2)<<j->second;
         if(j->second>max)
         {
             second_max=max;
             max = j->second;
             
             
         }
         else if(j->second>second_max && j->second!=max)
         {
             second_max=j->second;
         }
     }
     
     for(auto j=values.begin();j!=values.end();j++)
     {
         if(j->second == second_max)
         {
             return j->first;
         }
     }
    
     

}


int main ()
{
 
  vector<string> words;
  string x;
  
  for( int i=0;cin.get()!='\n';i++)
  {
     cin>>x;
     words.push_back(x);
  }
  for(int j=0;j<words.size();j++)
  {
      cout<<words[j];
  }
  cout<<unordered(words);

  return 0;
}
