#include <iostream>
#include <stdlib.h>
using namespace std;

long long unsigned countNums(short,short,short array[][15],short,bool,bool);

int main(int argc,char **argv) {

    long long unsigned max = 0;
    long long unsigned sum;


    short piramide[][15] = {                     {75,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                                                {95,64,0,0,0,0,0,0,0,0,0,0,0,0,0},
                                              {17,47,82,0,0,0,0,0,0,0,0,0,0,0,0},
                                             {18,35,87,10,0,0,0,0,0,0,0,0,0,0,0},
                                            {20,04,82,47,65,0,0,0,0,0,0,0,0,0,0},
                                           {19,01,23,75,03,34,0,0,0,0,0,0,0,0,0},
                                          {88,02,77,73,07,63,67,0,0,0,0,0,0,0,0},
                                         {99,65,04,28,06,16,70,92,0,0,0,0,0,0,0},
                                        {41,41,26,56,83,40,80,70,33,0,0,0,0,0,0},
                                       {41,48,72,33,47,32,37,16,94,29,0,0,0,0,0},
                                      {53,71,44,65,25,43,91,52,97,51,14,0,0,0,0},
                                     {70,11,33,28,77,73,17,78,39,68,17,57,0,0,0},
                                    {91,71,52,38,17,14,91,43,58,50,27,29,48,0,0},
                                   {63,66,04,68,89,53,67,30,73,16,69,87,40,31,0},//8,73
                                  {04,62,98,27,23,09,70,98,73,93,38,53,60,04,23}};//9,93
//75+64+82+87+82+75+73+28+83+47+43+73+91+67+98 =1068
                         // 32+91+78+58+73+93... better= 1074
//75+95+47+87+82+75+73+28+83+++++++
    for (short i = 0;i<15;i++)
     {
        for (short m=0;m<15;m++) 
        {
            if (piramide[i][m] == 0)
                break;
            sum = countNums(i,m,piramide,15,true,true);
            if (sum > max)
                max = sum;
            sum = countNums(i,m,piramide,15,true,false);
            if (sum > max)
                max = sum;
            sum = countNums(i,m,piramide,15,false,true);
            if (sum > max)
                max = sum;
            sum = countNums(i,m,piramide,15,false,false);
            if (sum > max)
               max = sum;

        }

    }
    cout << max;
    system("pause");
    return 0;
}


long long unsigned countNums(short start_x,short start_y,short array[][15],short size, bool goright,bool goright2)
 {
    long long unsigned currentSum;

    currentSum = array[start_x][start_y];

    if (goright) { //go right
        if ((start_x + 1) < size)
            start_x++;
        if ((start_y + 1) < size)
            start_y++;
    }
    else //go down
        if ((start_x + 1) < size)
            start_x++;

    if (goright2) 
    { //still going right
        for (short i = start_x, m = start_y;i< size && m < size;i++,m++) 
        {
            currentSum += array[i][m];         
        }
    }
    else
    { //still going down
        for (short i = start_x;i<size;i++) 
        {
            currentSum += array[i][start_y];            
        }
    }

    return currentSum;
    
}
