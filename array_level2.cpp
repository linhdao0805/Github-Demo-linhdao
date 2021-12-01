#include<iostream>
using namespace std;
void inputArray_level2(int a[100][100],int &dong,int &cot)
{
    printf("nhap so dong: ");
    scanf("%d",&dong);
    printf("nhap so cot: ");
    scanf("%d",&cot);
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            printf("a[%d][%d]= ",i,j);
          scanf("%d",&a[i][j]);
        }
    }
    
}
void outputArray_level2(int a[100][100],int dong,int cot)
{
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
           printf("%d",a[i][j]);cout<<" ";
        }
           cout<<endl;
    }
    
}
void tinhtongchan(int a[100][100],int dong,int cot)
{
    int sum=0;
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            if(a[i][j]%2==0)
            sum+=a[i][j];
        }
    }
    cout<<"sum= "<<sum;
}
bool KTSNT(int n)
{
    if(n<2) return false;
    else if(n>=2)
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)return false;
        }
    }
    return true;
}
int demsntmatran(int a[100][100],int dong,int cot)
{
    int count=0;
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            if(KTSNT(a[i][j])==true) count++;
        }
    }
    return count;
}
int maxSNT(int a[100][100],int dong,int cot)
{
    int max=0;
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            if(KTSNT(a[i][j])==true) 
            {
                if(max<a[i][j]) max=a[i][j];
            }
        }
    }
    return max;
}
void KTMTKO(int a[100][100],int dong,int cot)
{
     for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            if(a[i][j]!=0) 
            {
                cout<<"khong phai la ma tran khong";
                return;
            }
        }
    }
    cout<<"ma tran khong";
}
int KTMT(int a[100][100],int dong,int cot)
{
    int dem=0;
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            if(a[i][j]<a[i][j+1])
            { 
                dem++;
                if(dem==(cot-1))return 1;
            }

        }
    }
    return 0;    
}
int main()
{
    int a[100][100];
    int dong,cot;
    inputArray_level2(a,dong,cot);
    outputArray_level2(a,dong,cot);
    // tinhtongchan(a,dong,cot);
    // cout<<"co "<<demsntmatran(a,dong,cot)<<" so nguyen to trong ma tran";
    // cout<<"max= "<<maxSNT(a,dong,cot);
    // KTMTKO(a,dong,cot);
    cout<<KTMT(a,dong,cot);
}