/***********************************************
** Author : Sebastian Lindsay
** Program : hw5, q1
** Date Created : 12/11/2021
** Date Last Modified : 12/13/2021
** Usage
**
** Problem:
Make insertions to linked list
************************************************/

#include <iostream>
#include <fstream>
#include <sstream>
#include <queue>
#include <deque>
#include "listtoolshb.h"
#include "MyList.h"

using namespace std;

struct Profile
{
string fullname;
string state;
bool operator==( Profile rhs)
{if (fullname==rhs.fullname) return true; return false; }
bool operator!=(Profile rhs)
{if (fullname!=rhs.fullname) return true; return false; }
};
ostream& operator<< (ostream &out, Profile &user)
{
out << user.fullname<<"--" <<user.state;
return out;
}


int main()
{

    Profile temp;
    string line;

    ifstream file("presidentsWstates.txt");
    if (file.is_open())
    {
    while (getline(file, line))
    {
    stringstream ss(line);
    getline(ss, temp.fullname, '\t');
    getline(ss, temp.state, '\t');
    MyList.insertHead( temp);
    }
}


temp.fullname = "Gerald R. Ford";
if(searchDeque(pDeque, temp))
  cout<<"found:"<<temp<<endl;
else
  cout<<"not found: "<<temp<<endl;

return 0;
}
bool searchDeque( deque<Profile> &pq,   Profile &president)
{
}

    return 0;
}
