#include<iostream>
using namespace std;

class Matrix
{

	int row,col;
	int mat1[10][10], mat2[10][10],sum[10][10],mul[10][10];

	public:

	int no_rows()
	{
		cout<<"\nEnter no.of rows: ";
		cin>>row;
		return row;
	}

	int no_cols()
	{
		cout<<"Enter no. of columns: ";
		cin>>col;
		return col;
	}


	void SetElement(int r1, int c1, int r2, int c2)
	{
		int i,j;
		cout<<"\nEnter elements for first matrix:\n";
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
			cin>>mat1[i][j];
			}
		}

		cout<<"\nEnter elements for second matrix:\n";
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
			cin>>mat2[i][j];
			}
		}

	}



	void display(int r1, int c1, int r2, int c2)
	{
		int i,j;
		cout<<"\nFirst matrix is:\n";
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
			cout<<mat1[i][j]<<" ";
			}
		cout<<"\n";
		}

		cout<<"\nSecond matrix is:\n";
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
			cout<<mat2[i][j]<<" ";
			}
		cout<<"\n";
		}

	}

	void AddMatrices(int r1, int r2)
	{
		int i,j; 
		for(i=0;i<r1;i++)
		{
		    for(j=0;j<r2;j++)
		    {
		     sum[i][j] = mat1[i][j]+mat2[i][j];
		    }
		}

		cout<<"\nThe sum of two matrices is:\n";
		for(i=0;i<r1;i++)
		{
		    for(j=0;j<r2;j++)
		    {
		     cout<<sum[i][j]<<" ";
		    }
		cout<<"\n";
		}
	}


void MultiplyMatrices(int r1, int c1)
{

int i,j,k; 
for(i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
	{
		mul[i][j]=0;
		for(k=0;k<c1;k++)
		{
			mul[i][j]+= mat1[i][k]*mat2[k][j];

		}
	}
}


cout<<"\nThe Multiplication of two matrices is:\n";
		for(i=0;i<r1;i++)
		{
		    for(j=0;j<c1;j++)
		    {
		     cout<<mul[i][j]<<" ";
		    }
		cout<<"\n";
		}

}

};


int main()
{
int r1,c1,r2,c2,e;
Matrix M1,M2,M3;
cout<<"The Matrices should be NxN type!!\n";
cout<<"For the First matrix:-";
r1 = M1.no_rows();
c1 = M1.no_cols();
cout<<"\nFor the second matrix:-";
r2 = M2.no_rows();
c2 = M2.no_cols();

cout<<"\nEnter elements for matrix\n";
M1.SetElement(r1,c1,r2,c2);

//cout<<"\nEnter elements for second matrix\n";
//M2.SetElement(r2,c2);

//cout<<"First matrix is\n";
M1.display(r1,c1,r2,c2);

//cout<<"\nSecond matrix is\n";
//M2.display(r2,c2);

M1.AddMatrices(r1,r2);
M1.MultiplyMatrices(r2,c1);
}