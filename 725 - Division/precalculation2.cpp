/******************Joy Krishna****************
*    Online Judge: UVa Oj
*    Problem Name: 725 - Division
*Problem Category: Precalculation, Ad Hoc
*Submitted Time Limit: 0.076s
*Coder: Shikhor Roy(CSE - 2012, HSTU).
*********************************************/
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<cstring>
#include<climits>
#include<ctime>

#include<iostream>
#include<iomanip>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<string>
#include<utility>
#include<sstream>
#include<bitset>
#include<algorithm>
using namespace std;

#define EPS 1E-4
#define MAX 1000
#define PI acos(-1.0)
typedef long long ll;
typedef unsigned long long llu;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii > vpii;
typedef map<string, int> msi;
#define REP(i, b, e)\
    for(int i = int(b); i <= int(e); i++)
#define TRvi(c, it)\
    for(vi::iterator it = (c).begin(); it != (c).end(); ++it )
#define TRvii(c, it)\
    for(vii::iterator it = (c).begin(); it != (c).end(); ++it )
#define sf scanf
#define pf printf
#define si(x) sf("%d",&x)
#define in(x) cin>>x
#define out(x) cout<< (x) << endl
#define out2(x, y) cout<< (x) << " " << (y) << endl
#define out3(x, y, z) cout<< (x) << " " << (y) << " " << (z) << endl
#define ln length()
#define sz size()
#define clr clear()
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define TEST int cnum; sf("%d", &cnum); REP(cs, 1, cnum)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a * (b / gcd(a,b)))
//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

vector<pair<int, int> > store[80];

void pre_assign()
{
    store[2].pb(mp(13458, 6729));
    store[2].pb(mp(13584, 6792));
    store[2].pb(mp(13854, 6927));
    store[2].pb(mp(14538, 7269));
    store[2].pb(mp(14586, 7293));
    store[2].pb(mp(14658, 7329));
    store[2].pb(mp(15384, 7692));
    store[2].pb(mp(15846, 7923));
    store[2].pb(mp(15864, 7932));
    store[2].pb(mp(18534, 9267));
    store[2].pb(mp(18546, 9273));
    store[2].pb(mp(18654, 9327));
    store[2].pb(mp(26970, 13485));
    store[2].pb(mp(27096, 13548));
    store[2].pb(mp(27690, 13845));
    store[2].pb(mp(29076, 14538));
    store[2].pb(mp(29370, 14685));
    store[2].pb(mp(29670, 14835));
    store[2].pb(mp(29706, 14853));
    store[2].pb(mp(29730, 14865));
    store[2].pb(mp(30972, 15486));
    store[2].pb(mp(32970, 16485));
    store[2].pb(mp(37092, 18546));
    store[2].pb(mp(37290, 18645));
    store[2].pb(mp(41358, 20679));
    store[2].pb(mp(41538, 20769));
    store[2].pb(mp(41586, 20793));
    store[2].pb(mp(46158, 23079));
    store[2].pb(mp(53418, 26709));
    store[2].pb(mp(53814, 26907));
    store[2].pb(mp(54138, 27069));
    store[2].pb(mp(54186, 27093));
    store[2].pb(mp(54618, 27309));
    store[2].pb(mp(58134, 29067));
    store[2].pb(mp(58146, 29073));
    store[2].pb(mp(58614, 29307));
    store[2].pb(mp(61458, 30729));
    store[2].pb(mp(61584, 30792));
    store[2].pb(mp(61854, 30927));
    store[2].pb(mp(62970, 31485));
    store[2].pb(mp(64158, 32079));
    store[2].pb(mp(65418, 32709));
    store[2].pb(mp(65814, 32907));
    store[2].pb(mp(69702, 34851));
    store[2].pb(mp(70296, 35148));
    store[2].pb(mp(70962, 35481));
    store[2].pb(mp(76290, 38145));
    store[2].pb(mp(76902, 38451));
    store[2].pb(mp(90276, 45138));
    store[2].pb(mp(90372, 45186));
    store[2].pb(mp(90762, 45381));
    store[2].pb(mp(92370, 46185));
    store[2].pb(mp(93702, 46851));
    store[2].pb(mp(96270, 48135));
    store[2].pb(mp(96702, 48351));
    store[2].pb(mp(97026, 48513));
    store[2].pb(mp(97032, 48516));
    store[2].pb(mp(97062, 48531));
    store[2].pb(mp(97230, 48615));
    store[2].pb(mp(97302, 48651));
    store[3].pb(mp(17469, 5823));
    store[3].pb(mp(17496, 5832));
    store[3].pb(mp(50382, 16794));
    store[3].pb(mp(53082, 17694));
    store[3].pb(mp(61749, 20583));
    store[3].pb(mp(69174, 23058));
    store[3].pb(mp(91746, 30582));
    store[3].pb(mp(96174, 32058));
    store[4].pb(mp(15768, 3942));
    store[4].pb(mp(17568, 4392));
    store[4].pb(mp(23184, 5796));
    store[4].pb(mp(31824, 7956));
    store[4].pb(mp(60948, 15237));
    store[4].pb(mp(68940, 17235));
    store[4].pb(mp(69408, 17352));
    store[4].pb(mp(81576, 20394));
    store[4].pb(mp(81756, 20439));
    store[4].pb(mp(86940, 21735));
    store[4].pb(mp(94068, 23517));
    store[4].pb(mp(94860, 23715));
    store[5].pb(mp(13485, 2697));
    store[5].pb(mp(13845, 2769));
    store[5].pb(mp(14685, 2937));
    store[5].pb(mp(14835, 2967));
    store[5].pb(mp(14865, 2973));
    store[5].pb(mp(16485, 3297));
    store[5].pb(mp(18645, 3729));
    store[5].pb(mp(31485, 6297));
    store[5].pb(mp(38145, 7629));
    store[5].pb(mp(46185, 9237));
    store[5].pb(mp(48135, 9627));
    store[5].pb(mp(48615, 9723));
    store[5].pb(mp(67290, 13458));
    store[5].pb(mp(67920, 13584));
    store[5].pb(mp(69270, 13854));
    store[5].pb(mp(72690, 14538));
    store[5].pb(mp(72930, 14586));
    store[5].pb(mp(73290, 14658));
    store[5].pb(mp(76920, 15384));
    store[5].pb(mp(79230, 15846));
    store[5].pb(mp(79320, 15864));
    store[5].pb(mp(92670, 18534));
    store[5].pb(mp(92730, 18546));
    store[5].pb(mp(93270, 18654));
    store[6].pb(mp(17658, 2943));
    store[6].pb(mp(27918, 4653));
    store[6].pb(mp(34182, 5697));
    store[7].pb(mp(16758, 2394));
    store[7].pb(mp(18459, 2637));
    store[7].pb(mp(31689, 4527));
    store[7].pb(mp(36918, 5274));
    store[7].pb(mp(37926, 5418));
    store[7].pb(mp(41832, 5976));
    store[7].pb(mp(53298, 7614));
    store[7].pb(mp(98532, 14076));
    store[8].pb(mp(25496, 3187));
    store[8].pb(mp(36712, 4589));
    store[8].pb(mp(36728, 4591));
    store[8].pb(mp(37512, 4689));
    store[8].pb(mp(37528, 4691));
    store[8].pb(mp(38152, 4769));
    store[8].pb(mp(41896, 5237));
    store[8].pb(mp(42968, 5371));
    store[8].pb(mp(46312, 5789));
    store[8].pb(mp(46328, 5791));
    store[8].pb(mp(46712, 5839));
    store[8].pb(mp(47136, 5892));
    store[8].pb(mp(47328, 5916));
    store[8].pb(mp(47368, 5921));
    store[8].pb(mp(51832, 6479));
    store[8].pb(mp(53928, 6741));
    store[8].pb(mp(54312, 6789));
    store[8].pb(mp(54328, 6791));
    store[8].pb(mp(54712, 6839));
    store[8].pb(mp(56984, 7123));
    store[8].pb(mp(58496, 7312));
    store[8].pb(mp(58912, 7364));
    store[8].pb(mp(59328, 7416));
    store[8].pb(mp(59368, 7421));
    store[8].pb(mp(63152, 7894));
    store[8].pb(mp(63528, 7941));
    store[8].pb(mp(65392, 8174));
    store[8].pb(mp(65432, 8179));
    store[8].pb(mp(67152, 8394));
    store[8].pb(mp(67352, 8419));
    store[8].pb(mp(67512, 8439));
    store[8].pb(mp(71456, 8932));
    store[8].pb(mp(71536, 8942));
    store[8].pb(mp(71624, 8953));
    store[8].pb(mp(71632, 8954));
    store[8].pb(mp(73248, 9156));
    store[8].pb(mp(73264, 9158));
    store[8].pb(mp(73456, 9182));
    store[8].pb(mp(74528, 9316));
    store[8].pb(mp(74568, 9321));
    store[8].pb(mp(74816, 9352));
    store[8].pb(mp(75328, 9416));
    store[8].pb(mp(75368, 9421));
    store[8].pb(mp(76184, 9523));
    store[8].pb(mp(76248, 9531));
    store[8].pb(mp(76328, 9541));
    store[8].pb(mp(83672, 10459));
    store[8].pb(mp(83752, 10469));
    store[8].pb(mp(84296, 10537));
    store[8].pb(mp(84632, 10579));
    store[8].pb(mp(84736, 10592));
    store[8].pb(mp(85392, 10674));
    store[8].pb(mp(85432, 10679));
    store[8].pb(mp(85936, 10742));
    store[8].pb(mp(86352, 10794));
    store[8].pb(mp(87456, 10932));
    store[8].pb(mp(87536, 10942));
    store[8].pb(mp(87624, 10953));
    store[8].pb(mp(87632, 10954));
    store[8].pb(mp(96584, 12073));
    store[8].pb(mp(98456, 12307));
    store[8].pb(mp(98760, 12345));
    store[9].pb(mp(57429, 6381));
    store[9].pb(mp(58239, 6471));
    store[9].pb(mp(75249, 8361));
    store[9].pb(mp(95742, 10638));
    store[9].pb(mp(95823, 10647));
    store[9].pb(mp(97524, 10836));
    store[12].pb(mp(45792, 3816));
    store[12].pb(mp(73548, 6129));
    store[12].pb(mp(89532, 7461));
    store[12].pb(mp(91584, 7632));
    store[13].pb(mp(67392, 5184));
    store[13].pb(mp(81549, 6273));
    store[13].pb(mp(94653, 7281));
    store[14].pb(mp(25746, 1839));
    store[14].pb(mp(27384, 1956));
    store[14].pb(mp(41538, 2967));
    store[14].pb(mp(46158, 3297));
    store[14].pb(mp(51492, 3678));
    store[14].pb(mp(54768, 3912));
    store[14].pb(mp(61572, 4398));
    store[14].pb(mp(65982, 4713));
    store[15].pb(mp(27945, 1863));
    store[15].pb(mp(92745, 6183));
    store[16].pb(mp(45936, 2871));
    store[16].pb(mp(73296, 4581));
    store[16].pb(mp(98352, 6147));
    store[17].pb(mp(26843, 1579));
    store[17].pb(mp(28543, 1679));
    store[17].pb(mp(29546, 1738));
    store[17].pb(mp(36958, 2174));
    store[17].pb(mp(45713, 2689));
    store[17].pb(mp(45781, 2693));
    store[17].pb(mp(54689, 3217));
    store[17].pb(mp(59126, 3478));
    store[17].pb(mp(64957, 3821));
    store[17].pb(mp(65297, 3841));
    store[17].pb(mp(67184, 3952));
    store[17].pb(mp(67218, 3954));
    store[17].pb(mp(76823, 4519));
    store[17].pb(mp(76891, 4523));
    store[17].pb(mp(78132, 4596));
    store[17].pb(mp(78523, 4619));
    store[17].pb(mp(78591, 4623));
    store[17].pb(mp(81532, 4796));
    store[17].pb(mp(83572, 4916));
    store[17].pb(mp(83657, 4921));
    store[17].pb(mp(89437, 5261));
    store[17].pb(mp(89471, 5263));
    store[17].pb(mp(89641, 5273));
    store[17].pb(mp(91426, 5378));
    store[17].pb(mp(92837, 5461));
    store[17].pb(mp(92871, 5463));
    store[17].pb(mp(93126, 5478));
    store[18].pb(mp(28674, 1593));
    store[19].pb(mp(51984, 2736));
    store[19].pb(mp(81567, 4293));
    store[26].pb(mp(42978, 1653));
    store[26].pb(mp(56498, 2173));
    store[26].pb(mp(61854, 2379));
    store[26].pb(mp(67314, 2589));
    store[26].pb(mp(67418, 2593));
    store[26].pb(mp(76518, 2943));
    store[26].pb(mp(82654, 3179));
    store[26].pb(mp(89726, 3451));
    store[26].pb(mp(92846, 3571));
    store[27].pb(mp(39852, 1476));
    store[27].pb(mp(49572, 1836));
    store[27].pb(mp(69741, 2583));
    store[27].pb(mp(96714, 3582));

    store[22].pb(mp(51678, 2349));

    store[23].pb(mp(36294, 1578));
    store[23].pb(mp(81627, 3549));
    store[23].pb(mp(81972, 3564));

    store[24].pb(mp(39528, 1647));
    store[24].pb(mp(46872, 1953));

    store[28].pb(mp(75348, 2691));

    store[29].pb(mp(37584, 1296));
    store[29].pb(mp(73689, 2541));

    store[32].pb(mp(75168, 2349));

    store[35].pb(mp(48265, 1379));
    store[35].pb(mp(63945, 1827));
    store[35].pb(mp(64295, 1837));
    store[35].pb(mp(74865, 2139));
    store[35].pb(mp(93485, 2671));

    store[37].pb(mp(65934, 1782));

    store[38].pb(mp(65892, 1734));
    store[38].pb(mp(74328, 1956));

    store[43].pb(mp(93654, 2178));

    store[44].pb(mp(58476, 1329));
    store[44].pb(mp(59268, 1347));
    store[44].pb(mp(67892, 1543));
    store[44].pb(mp(69432, 1578));
    store[44].pb(mp(95348, 2167));

    store[46].pb(mp(58374, 1269));

    store[52].pb(mp(95472, 1836));

    store[53].pb(mp(65879, 1243));
    store[53].pb(mp(75896, 1432));
    store[53].pb(mp(84376, 1592));
    store[53].pb(mp(92538, 1746));

    store[59].pb(mp(73986, 1254));

    store[62].pb(mp(79546, 1283));
    store[62].pb(mp(94736, 1528));

    store[66].pb(mp(83754, 1269));

    store[68].pb(mp(98736, 1452));
}
int main()
{
//    READ("in.in");
//    WRITE("gen.out");
//    double cl = clock();
    int n;
    bool newLine = false;
    pre_assign();
    while(sf("%d", &n), n)
    {
        if(newLine) pf("\n"); newLine = true;

        int l = store[n].sz;
        if(l == 0) pf("There are no solutions for %d.\n", n);
        else
        {
            REP(i, 0, l - 1)
            pf("%05d / %05d = %d\n", store[n][i].x, store[n][i].y, n);
        }
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
