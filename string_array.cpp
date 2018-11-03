
#pragma warning(disable: 4786)

#include <vector>
#include <string>

#include <stdio.h>


template<int row=20, int col=20>
struct MyDgxString
{
	std::string	str[row][col];

	std::string& operator()(int i, int j, std::string s)// set the value of i, j array
	{
		str[i][j] = s;
		return str[i][j];
	}

	const char* const operator()(int i, int j) const	// get the value of i, j array
	{
		return str[i][j].c_str();
	}


	void SetString(int i, int j, std::string s)			// set the value of i, j array
	{
		str[i][j] = s;
	}


//	void operator[][](int m, int n)
//	{
//	}
};



int main(int argc, char** argv)
{
	printf("\nSimple String Table[][] ------------------------------------\n\n");


	MyDgxString<20,20>	st;


	// set
	st(10, 10, (char*)"Hello world");				// st.SetString(10, 10, (char*)"Hello world");

	// get
	const char* s = st(10, 10);

	printf("%s\n", s);


	printf("\n\n\n");


/*
	int i, j;

	typedef	char	MyString[160];

	MyString** pTalk;


	pTalk = new MyString*[4];
	for(i=0; i<4; ++i)
	{
		pTalk[i] = new MyString[3];
		memset(pTalk[i], 0, sizeof(MyString) );
	}



	for(i=0; i<4; ++i)
		delete [] pTalk[i];

	delete [] pTalk;




	std::vector< std::vector<std::string > >	vTalk;


	for(i=0; i<4; ++i)
	{
		std::vector<std::string > lst;
		for(j=0; j<3; ++j)
		{
			char sbuf[128]={0};

			sprintf(sbuf, "(%3d, %3d)" , i, j);

			std::string t(sbuf);

			lst.push_back(t);
		}

		vTalk.push_back(lst);
	}


	for(i=0; i<vTalk.size(); ++i)
	{
		std::vector<std::string >& str = vTalk[i];

		for(j=0; j<str.size(); ++j)
		{
			std::string& tt = str[j];

			printf("%s  ", tt.c_str());
		}

		printf("\n");

	}



	for(i=0; i<vTalk.size(); ++i)
	{
		std::vector<std::string >& str = vTalk[i];
		str.clear();
	}

	vTalk.clear();
*/
	return 0;
}