// Substring is contiguous.
// In ABCDGH and ACDGHRX longest common substring is CDGH and therefore answer is 4.
// Time complexity of brute force is O((n1*n1)* (n2*n2)) 

int dp[X+1][Y+1];
	    int lcs = 0;
	    int x1,y1;
	    for(int i=0;i<=X;++i)
	        dp[i][0]=0;
	    for(int i=0;i<=Y;++i)
	        dp[0][i]=0;
	    
	    //Fill dp[][]
	    for(int i=1;i<=X;++i)
	    {
	        for(int j=1;j<=Y;++j)
	        {
	            if(s1[i-1]==s2[j-1])
	            {
	                dp[i][j] = 1 + dp[i-1][j-1];
	                if(lcs < dp[i][j])
	                {
	                    lcs = dp[i][j];
	                    x1 = i;
	                    y1 = j;
	                }
	            }
	            else
	                dp[i][j]=0;
	        }
	    }
	   cout<<lcs<<"\n";

// Time-complexity of DP solution is O(n*n)       