#include<iostream>
using namespace std;

int dig_sum(long unsigned int x);


int main()
{
    long unsigned int x,y;
	int t,i;
	
    cin>>t;//scanf("%d",&t);
	for(i=0;i<t;i++){
		cin>>x>>y;//scanf("%lu%lu",&x,&y);
		long unsigned sum=0;
		while(x<y && x%10!=0)
        {
			sum+=dig_sum(x);
			x++;
		}
		while(x<y && y%10!=0)
        {
			sum+=dig_sum(y);
			y--;
		}
		sum+=45*((y-x)/10);
		sum+=dig_sum(y);		
		cout<<sum;//printf("%lu\n",sum);
	}
	system("pause");
	return 0;
}	
 
int dig_sum(long unsigned int x){
	int sum=0;
	int last_digit[10]={0,1,4,3,8,5,2,7,6,9};
	while(x){
		sum+=last_digit[x%10];
		x/=10;
	}
	return sum%10;
}		
