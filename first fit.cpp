#include <iostream>
using namespace std;
int main()
{
    int np,nb,b[10],p[10],ans[10],i,copy[10],j;
    cout<<"Enter the no of processess=";
    cin>>np;
    cout<<"Enter the size of each processess=";
    for(int i=0;i<np;i++)
        cin>>p[i];
    cout<<"Enter the no of Blocks=";
    cin>>nb;
    cout<<"Enter the size of each blocks=";
    for(int i=0;i<nb;i++)
        cin>>b[i];
    
    cout<<"Block for First fit";
    for(int i=0;i<nb;i++)
        cout<<"\t\t"<<b[i];
    
    //First fit algo
    int flag[np];
    for(int i=0;i<10;i++)
        {
            flag[i]=0;
            ans[i]=-1;
        }
    
    for(int i=0;i<np;i++)
        for(int k=0;k<nb;k++)
            if(flag[k]==0 && b[k]>=p[i])
                {
                    b[k]-=p[i];
                    ans[k]=i;
                    flag[k]=1;
                    break;
                }

    cout<<"\nBlock no.\tRemainig size\t\tprocess no.\t\tsize";
	for(i=0;i<nb;i++)
	{
		cout<<"\n"<< i+1<<"\t\t"<<b[i]<<"\t\t";
		if(flag[i]== 1)
		   cout<<"\t\t"<<ans[i]+1<<"\t\t\t"<<p[ans[i]];
		else
			cout<<"Not allocated";
	}
      
      
  return 0;
}



