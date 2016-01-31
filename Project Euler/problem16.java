public class problem16
{
    public static int m;    
    public static int [] a;
    //a=new int[100000];
    public static void main(String[] args)
        {
             long sum=0;
            a=new int[100000];
            // int[] a ;
            // int m;
             //void calculate(unsigned long long num);
                 int i,j,t;
                 m=1;
                 a[0]=1;
                 for(i=1;i<=1000;i++)
                 {
                    calculate(2);
                 }
                 for(j=m-1;j>=0;j--)
                     sum=sum+a[j];
                 System.out.println(sum);
        }
            public static void calculate(int n)
             {
                 int index;
                 int temp=0;
                 int x;
                 for(index=0;index<m;index++)  //m is the global vari
                 {
                     x=a[index]*n+temp;
                     a[index]=x%10;
                     temp=x/10;
                 }
                 if(temp!=0)
                 {     //Here we increase the size of the array every time, like if it is filled till a[2], to fill a[3] 
                     //we have to come over here......
                     while(temp!=0)
                     {
                         a[m]=temp%10;
                         temp=temp/10;
                         m++;
                     }
                 }
         //  return 0;
             }
            
        
        
        }

