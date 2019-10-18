#include<bits/stdc++.h>
using namespace std;
#define MAX 100002
int arr[MAX];
int tree[MAX*4];

void built(int node,int beginn,int endd){
    if(beginn==endd){
        tree[node]=arr[endd];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(beginn+endd)/2;
    built(left,beginn,mid);
    built(right,mid+1,endd);
    tree[node]=min(tree[left],tree[right]);
}
int query(int node,int beginn,int endd,int begrange,int endrange){

    if(beginn>endrange||endd<begrange){
        return 10000000;
    }

    if(beginn>=begrange&&endd<=endrange){
        return tree[node];
    }

    int left=node*2;
    int right=node*2+1;
    int mid=(beginn+endd)/2;
    int qleft=query(left,beginn,mid,begrange,endrange);
    int qright=query(right,mid+1,endd,begrange,endrange);
    return min(qleft,qright);
}


int main(){
    int numberof_case;scanf("%d",&numberof_case);
    for(int cs=1;cs<=numberof_case;cs++){
    printf("Case %d:\n",cs);
    int array_size,number_of_query;
    scanf("%d%d",&array_size,&number_of_query);
    for(int i=1;i<=array_size;i++){
        scanf("%d",&arr[i]);
    }
   built(1,1,array_size);
   int begrange,endrange;
   for(int qry=1;qry<=number_of_query;qry++){
   scanf("%d%d",&begrange,&endrange);
   int x=query(1,1,array_size,begrange,endrange);
   printf("%d\n",x);
   }
    }

}
