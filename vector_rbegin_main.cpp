


#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int ari[]={1,2,3,4,5};
	//vector<int> vi(&ari[0],&ari[5]);


	vector<int> vi;
	vi.insert(vi.begin(), &ari[1],&ari[5]);

	
	vector<int>::reverse_iterator F=vi.rbegin();
	vector<int>::reverse_iterator L=vi.rend();

	for(; F != L; ++F)
	{
		printf("%d\n",*F);
	}
	
	
	return 0;
}

