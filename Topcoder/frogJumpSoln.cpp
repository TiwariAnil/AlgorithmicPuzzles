#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
class ThreeTeleports {
public:
  int shortestDistance(int, int, int, int, vector <string>);
};
 
int ThreeTeleports::shortestDistance(int xM, int yM, int xH, int yH, vector <string> tel) {
  int link[110][110],xyt[55][4],x[110],y[110],l=tel.size();
  for (int i=0;i<tel.size();i++){
        int xx=0,yy=0;
      for (int j=0;j<tel[i].size();j++){
          if (tel[i][j]==' ') {
                 xyt[i][yy++]=xx;
                 xx=0;
            }
          else xx=xx*10+tel[i][j]-'0';
            if (j==tel[i].size()-1) xyt[i][yy++]=xx;
         }          
     }
     x[0]=xM; y[0]=yM;
     int gs=1;
     memset(link,-1,sizeof(link));
     for (int i=0;i<l;i++){
         x[gs]=xyt[i][0];
         y[gs++]=xyt[i][1];
         x[gs]=xyt[i][2];
         y[gs++]=xyt[i][3];
         link[gs-2][gs-1]=link[gs-1][gs-2]=10;
         
     }
     x[gs]=xH;
     y[gs++]=yH;
     for (int i=0;i<gs;i++)
         for (int j=0;j<gs;j++)
             if (link[i][j]==-1 || (abs(x[i]-x[j])+abs(y[i]-y[j])<link[i][j]))
                link[i][j]=link[j][i]=abs(x[i]-x[j])+abs(y[i]-y[j]);
     
     for (int k=0;k<gs;k++)
         for (int i=0;i<gs;i++)
             if (i!=k && link[i][k]!=-1)
             for (int j=0;j<gs;j++)
               if (j!=k && j!=i && link[k][j]!=-1)
                  if (link[i][k]<link[i][j]-link[k][j] || link[i][j]==-1)
                     link[i][j]=link[i][k]+link[k][j];
     return link[0][gs-1];
}
