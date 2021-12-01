#include<iostream>
using namespace std;
void inputArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }    
}
void outputArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }    
}
void InputArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
       printf("a[%d]=",i);
        scanf("%5d",&a[i]);
    }    
}
void OutputArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);printf(" ");
    }    
}
int sumArray(int a[],int n)
{
    int sum=a[0];
    for(int i=1;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}
float TBC(int a[],int n)
{
    float sum=a[0];
    for(int i=1;i<n;i++)
    {
        sum+=a[i];
    }
    return sum/n;
}
// void SumArray(int a[],int n)
// {
//     int sum=a[0];
//     for(int i=1;i<n;i++)
//     {
//         sum+=a[i];
//     }
//     cout<<sum/n;
// }
int maxArray(int a[],int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}
void swap(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(a[j]>a[j-1])
            {
                int t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
        }
    }
}
// void max2(int a[],int n)
// {
//      for(int i=0;i<n;i++)
//      {
//          if(a[n-1]==a[n-i])
//          i--;
//          else break;
//      }
// }
int main()
{
    int n;
    cout<<"so phan tu trong mang: ";cin>>n;
    int a[n];
    // inputArray(a,n);
    // outputArray(a,n);
    InputArray(a,n);
     cout<<"max= "<<TBC(a,n);
    // swap(a,n);
    // max2(a,n);
    //  OutputArray(a,n);
}