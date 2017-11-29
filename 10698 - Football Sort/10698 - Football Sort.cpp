/**
     Programmer: S. Roy(CSE'12).
     ----------- HSTU, Dinajpur.
     Online Judge:
     Problem name: 10698 - Football Sort
     Imp. Algorithm: , Complexity:
**/
using namespace std;
#include<bits/stdc++.h>

#define sf scanf
#define pf printf

#define DEBUG1(x) pf("> %s: %d\n", #x, x)
#define DEBUG2(x, y) pf("> %s: %d > %s: %d\n", #x, x, #y, y)
#define DEBUG3(x, y, z) pf("> %s: %d > %s: %d > %s: %d\n", #x, x, #y, y, #z, z)

/**--------------- Direction Arrays ------------------*/
//int dx[]={1,0,-1,0}; int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1}; int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2}; int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
/**--------------- Direction Arrays ------------------**/
#define EPS 1E4
struct TEAM
{
    double percentage;
    string name, lowName;
    int game_points, game_played, scored_goals, suff_goals, goal_diff;

    TEAM()
    {
        name = "";
        lowName = "";
        percentage = 0.0;
        game_points = game_played = scored_goals = suff_goals = goal_diff = 0;
    }

    //Conditions: points scored, followed by goal difference, and then scored goals
    bool operator < (const TEAM& t) const
    {
        if(game_points != t.game_points) return (game_points > t.game_points);
        if(goal_diff != t.goal_diff) return (goal_diff > t.goal_diff);
        if(scored_goals != t.scored_goals) return (scored_goals > t.scored_goals);
        return (lowName < t.lowName);
    }
};
string convert2lower(string str)
{
    string ret = "";
    int l = str.length();
    for(int i = 0; i < l; i++)
        ret += tolower(str[i]);
    return ret;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D.txt", "r", stdin);
#endif // ONLINE_JUDGE

    int T, G;
    bool newLn = false;
    while(sf("%d %d", &T, &G))
    {
        if(!T && !G) return 0;

        if(newLn) pf("\n"); newLn = true;

        TEAM team[30];
        map<string, int> mapp;
        for(int i = 0; i < T; i++)
        {
            string str;
            cin >> str;

            mapp[str] = i;
            team[i].name = str;
            team[i].lowName = convert2lower(str);
        }

        char hyphen;
        int score1, score2;
        string team1, team2;
        for(int i = 0; i < G; i++)
        {
            cin >> team1 >> score1 >> hyphen >> score2 >> team2;

            team[mapp[team1]].game_points += (score1 > score2 ? 3 : score1 == score2 ? 1 : 0);
            team[mapp[team1]].game_played++;
            team[mapp[team1]].scored_goals += score1;
            team[mapp[team1]].suff_goals += score2;
            team[mapp[team1]].goal_diff += score1 - score2;//(goals scored minus goals suffered)

            team[mapp[team2]].game_points += (score2 > score1 ? 3 : score1 == score2 ? 1 : 0);
            team[mapp[team2]].game_played++;
            team[mapp[team2]].scored_goals += score2;
            team[mapp[team2]].suff_goals += score1;
            team[mapp[team2]].goal_diff += score2 - score1;//(goals scored minus goals suffered)
        }

        sort(team, team + T);

        for(int i = 0; i < T; i++)
        {
            if(team[i].game_played == 0) continue;
            team[i].percentage = (team[i].game_points * 100.0) / (team[i].game_played * 3);
        }

        int rank = 1;
        //pos   name  point   NO   SCO   SUF   DIF   %
        pf("%2d.%16s%4d%4d%4d%4d%4d", rank, team[0].name.c_str(), team[0].game_points,
           team[0].game_played, team[0].scored_goals, team[0].suff_goals, team[0].goal_diff);
        if(team[0].game_played == 0)
            pf("%7s\n","N/A");
        else
            printf("%7.2f\n",team[0].percentage);

        rank = rank + 1;
        for(int i = 1; i < T; i++, rank++)
        {
            //pos    name  point   NO   SCO   SUF   DIF   %
            if(team[i].game_points != team[i - 1].game_points ||
                    team[i].goal_diff != team[i - 1].goal_diff || team[i].scored_goals != team[i-1].scored_goals)
                pf("%2d.", rank);
            else
                pf("   ");

            pf("%16s%4d%4d%4d%4d%4d", team[i].name.c_str(), team[i].game_points,
               team[i].game_played, team[i].scored_goals, team[i].suff_goals, team[i].goal_diff);
            if(team[i].game_played == 0)
                pf("%7s\n","N/A");
            else
                printf("%7.2f\n",team[i].percentage);
        }
    }
    return 0;
}
