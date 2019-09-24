#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str ;
    cin>>str;
    if(str == "") return 0;
	int cnt = 1;
	int head = 0; 
	int end = -1;
	int left;
	int right;
	string res = "";
	for (int i = 0; i < str.length()-1; i++)
	{
		left = i;
		right = i + 1;
		if (str[left] + 1 == str[right])
		{
			cnt++;
		}
		else
		{
			if (cnt >= 4)
			{
				end = left;
				res += str[head];
				res += '-';
				res += str[end];
			}
			else
			{
				res.append(str,end+1,left-end);
				end = left;
			}
			cnt = 1;
			head = right;
		}
	}
    if(cnt>=4)
    {
        res+=str[head];
        res+='-';
        res+=str[right];
    }
    else 
    {
        res.append(str,end+1,right - end);
    }
	
	cout << res;
    return 0;
}