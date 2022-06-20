long long Pow(int X, int N)
{
    if(N==0) return 1;
    
    while(X){
        if(N%2==0){
           return Pow(X,N/2)*Pow(X,N/2);
        }
        else{
            return X * Pow(X,N-1);
        }
    }
}