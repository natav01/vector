#include <iostream>
#include <vector>
#include <string>
using namespace std;

const string cExitValue {"exit"};
int main() {
vector <string> studentsList;
string nextStudent;
do {
cin>>nextStudent;
if (nextStudent != cExitValue)
{
studentsList.push_back(nextStudent);
}
}
while (nextStudent != cExitValue);
for (int index = 0; index<studentsList.size(); ++index) {
cout<<index<<" : "<<studentsList.at(index)<<endl;}
}
