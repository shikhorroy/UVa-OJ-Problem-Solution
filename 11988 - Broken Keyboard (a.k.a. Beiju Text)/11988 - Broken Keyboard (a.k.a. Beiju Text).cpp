#include <cstdio>
#include <deque>
#include <string>
using namespace std;
#define pf printf
int main(void)
{
    char ch, line[100009];
    while(gets(line))
    {
        bool home = false;
        deque <string> deq;
        string str = "";
        for(int i = 0; ch = line[i]; i++)
        {
            switch(ch)
            {
            case '[':
                if(home && str != "")
                    deq.push_front(str);
                else if(str != "")
                    deq.push_back(str);
                str = "";
                home = true;
                break;
            case ']':
                if(home && str != "")
                    deq.push_front(str);
                else
                    deq.push_back(str);
                home = false;
                str = "";
                break;
            default:
                str.push_back(ch);
                break;
            }
        }
        if(home && str != "")
            deq.push_front(str);
        else if(str != "")
            deq.push_back(str);
        while(!deq.empty())
        {
            pf("%s",deq.front().c_str());
            deq.pop_front();
        }
        pf("\n");
    }
    return 0;
}
