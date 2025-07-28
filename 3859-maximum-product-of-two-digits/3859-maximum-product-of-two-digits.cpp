class Solution {
public:
    int maxProduct(int n) {
        int lstdigit ;
        int a=0,b=0;
        while ( n>0){
            lstdigit=n%10;
            if ( lstdigit>a){
                    b=a;
                    a=lstdigit;
            }
            else if ( lstdigit>b) 
            {
                b=lstdigit;
            }
            n=n/10;
        }
        return a*b;
    }
};