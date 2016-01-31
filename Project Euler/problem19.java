public class problem19
{
   public static void main(String[] args)
    {
             //here 1 jan 1901 is tuesday!!
              int x,s,i,day=2,count=0;
              
              int noleap=365,leap=366;
              for(i=1901;i<=1999;i++)
              {
                   if(i%4!=0) //1 9 1 0 1 0 1 1 0 1 0 1
                       for(s=1;s<=365;s++)
                      {   day++;
                           if(day==8)
                               day=1;
                           if((s==1||s==32||s==60||s==91||s==121||s==152||s==182||s==213||s==244||s==274||s==305||s==335) && day==1)
                             count++;
                      }
                   else
                       for(s=1;s<=366;s++)
                       {
                             day++;
                           if(day==8)
                               day=1;
                           if((s==1||s==32||s==61||s==92||s==122||s==153||s==183||s==214||s==245||s==275||s==306||s==336) && day==1)
                             count++;
                       }
              }
              System.out.println("count  : ");System.out.println(count);System.out.println("  Day :  ");System.out.println(day);
              for(s=335;s<=365;s++)
                       {
                             day++;
                           if(day==8)
                               day=1;
                        }  
                for(s=1;s<=366;s++)
                       {
                             day++;
                           if(day==8)
                               day=1;
                           if((s==1||s==32||s==61||s==92||s==122||s==153||s==183||s==214||s==245||s==275||s==306||s==336) && day==1)
                             count++;
                       }
               System.out.println("\n\n");
               System.out.println("count  : ");System.out.println(count);System.out.println("  Day :  ");System.out.println(day);
   }
   



}