#include<iostream>
using namespace std;
int main()
{
	int *p,i,a=0,b=0;
	
	p = new int[20];
	for (i = 0; i < 20; i ++ )
	{
		cin >> p[i];
		if (p[i] > 0)
			a++;
		if (p[i]< 0)
			b++;
	}



	for(int j=0;j<20;j++)
	{
		for(int k=1;k<20-j;k++)
	
			if(p[j]>p[j+k])
			{
				int temp=p[j];
				p[j]=p[j+k];
				p[j+k]=temp;
			}
	}
	for(i=0;i<20;i++)
	{
		cout<<p[i]<<"  ";
	}














		cout << "����Ϊ" << a << endl;
		cout << "����Ϊ" << b<<endl;
		delete[]p;

	return 0;
}