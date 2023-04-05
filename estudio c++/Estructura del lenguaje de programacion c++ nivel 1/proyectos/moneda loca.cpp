#include <iostream>
#include  <iomanip>
#include <locale>

using namespace std;

struct group_facet: public std::numpunct<char> {
	protected:
	string do_grouping() const{ return "\003"; }
};

int main()
{
	cout.imbue(locale(cout.getloc(), new group_facet));
	cout<<fixed<<setprecision(2)<<100000<<'\n';
	cin.get();
}