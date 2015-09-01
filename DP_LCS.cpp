#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

#define M 100
#define N 100
using namespace std;

int main()
{
	string x;
	string y;
	cin >> x >> y;

	int ii = x.size();
	int jj = y.size();
	
	int C[M][N]={0};
	char B[M][N]={' '};

	for (int i = 0; i < ii; i++)
	{
		for (int j = 0; j < jj; j++)
		{
			if (i == 0 | j == 0)
			{
				C[i][j] = 1;
				if (x[i]==y[j])
				{
					B[i][j]='O';
				}
			}
			else if (x[i]==y[j] && i>0 && j>0)
			{
				C[i][j]=C[i-1][j-1]+1;
				B[i][j]='O';
			}
			else if (x[i]!=y[j] && i>0 && j>0)
			{
				//C[i][j]=max(C[i-1][j],C[i][j-1]);
				if (C[i-1][j]>=C[i][j-1])
				{
					C[i][j] = C[i-1][j];
					B[i][j] = 'U';
				}
				else
				{
					C[i][j] = C[i][j-1];
					B[i][j] = 'L';
				}
			}
			else
			{

			}
		}
	}

	cout << C[ii-1][jj-1] << endl;

	vector<char> out;
	int len = 0;

	int i = ii-1;
	int j = jj-1;
	while(i>=0 && j>=0)
	{
		if (B[i][j]=='O')
		{
			out.insert(out.begin(),x[i]);
			i--;
			j--;
		}
		else if (B[i][j] == 'U')
		{
			i--;
		}
		else
		{
			j--;
		}
		
	}

	for (int i = 0; i < out.size(); i++)
	{
		cout << out[i];
	}
	cout << endl;

	while(1);
	return 0;
}