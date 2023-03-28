#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[],int val[],int W,int n ,int t[][100]){
    if(n==0 or W==0) return 0;
    if(t[n][W]!=-1) return t[n][W];
     
    if(wt[n-1]<=W) return t[n][W]=max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1,t),knapsack(wt,val,W,n-1,t));
    else return t[n][W]=knapsack(wt,val,W,n-1,t);
}
int main(){
    int static t[100][100]; 
    memset(t,-1,sizeof(t)); 
    int wt[]={1,3,4,5};
    int val[]={1,4,5,7};
    int n=sizeof(wt)/4;
    int W=7;
    cout<<knapsack(wt,val,W,n,t);
return 0;
}
