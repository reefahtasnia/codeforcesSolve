#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int i,j,c=0;
    string x;
    cin>>x;
    int l=x.size();

    for(i=0, j=l-1; i<j; i++, j--)
        if(x[i]!=x[j]) c++;       // Count the number of characters that are different
    //c==1 means there is ONE mismatched pair, so it can be made a palindrome 
    //c==0 means there is NO mismatched pair and string length is odd means the string is already a pallindrome
    if(c==1 || (c==0 && l%2==1))
        cout<<"YES"<<endl;     
    else
        cout<<"NO"<<endl;
    return 0;
}