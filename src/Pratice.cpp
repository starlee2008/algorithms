//
// Created by starlee on 2018/6/6.
//
#include "../header/Pratice.h"

template<class T>
int length(T& data)
{
    return sizeof(data)/sizeof(data[0]);
}
void Pratice::test1() {
    ifstream cin("../src/1.txt");
    int n,num,m;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){

        cin>>num;
        a[i]=num;
    }
    cin>>m;
    for(int k1=0;k1<n;k1++){
        for(int k2=0;k2<n;k2++)
            for(int k3=0;k3<n;k3++)
                for(int k4=0;k4<n;k4++)
                    if(a[k1]+a[k2]+a[k3]+a[k4]==m)
                        cout<<a[k1]<<a[k2]<<a[k3]<<a[k4]<<endl;
    }
}
void Pratice::hashTest() {
    ifstream cin("../resources/hash1.txt");
    char sa[100],sb[100];
    bool HashTable[128];
    cin.getline(sa,100);
    cin.getline(sb,100);

    for(int i=0;i<strlen(sb);i++){
        HashTable[sb[i]]=true;
    }
    for(int j=0;j<strlen(sa);j++){
        if(HashTable[sa[j]]==false){
            cout<<sa[j]<<" ";
        }
    }
}
void Pratice::bubbleSort() {
    int a[5]={3,1,4,5,2};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }
    for(int i=0;i<5;i++){
        cout<<a[i];
    }

}
int isLeap(int year){
    if((year%4==0&&year%100!=0)||(year%400==0))
        return 1;
    else
        return 0;
}
void Pratice::C1928() {
    ifstream cin("../resources/C1928.txt");
    int month[13][2]={{0,0},
                      {31,31},
                      {28,29} ,
                      {31,31},
                      {30,30},
                      {31,31},
                      {30,30},
                      {31,31},
                      {31,31},
                      {30,30},
                      {31,31},
                      {30,30},
                      {31,31}};
    int time1,y1,m1,d1;
    int time2,y2,m2,d2;
    cin>>time1>>time2;
    if(time1>time2){
        int temp=time1;
        time1=time2;
        time2=temp;
    }
    y1=time1/10000,m1=time1%10000/100,d1=time1%100;
    y2=time2/10000,m2=time2%10000/100,d2=time2%100;
    int ans=1;
    while(!(y1==y2&&m1==m2&&d1==d2)){
        d1++;
        int lastDay=month[m1][isLeap(y1)];

        if(d1==lastDay){
            m1++;
            d1=1;
        }
        if(m1==13){
            y1++;
            m1=1;
        }
        ans++;
    }
    cout<<ans;
}
void Pratice::C5901() {
    ifstream cin("../resources/C5901.txt");
    string str;
    cin>>str;
    int len=str.size();

    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
void Pratice::B1009() {
    const  int MAX=10;
    ifstream cin("../resources/B1009.txt");
    string string1[MAX];
    for(int i=0;i<MAX;i++){
        cin>>string1[i];
    }
    for(int i=MAX-1;i>0;i--){
        if(string1[i]!="")cout<<string1[i]<<" ";
    }
}
int Pratice::binarySearch(int arr[],int x) {
    //此处的问题如何计算数组的长度
    int high=length(arr)-1;
    //int high=9;
    int low=0;

    while(low<=high){
        int mid=(high+low)/2;
        if(arr[mid]==x) return mid;
        else if(arr[mid]>x){
            high=mid-1;
        }else{
            low=mid+1;
        }

    }
    return -1;


}
int f(double x){
    return x*x-2;
}
void Pratice::sloveRoot() {
    const double eps=1e-5;
    double left=1,right=2,mid;
    while(right-left>eps){
        mid=(left+right)/2;
        if(f(mid)>0){
            right=mid;
        }else{
            left=mid;
        }
    }
    cout<<mid<<endl;

}
void Pratice::B1040() {
    //const N=10;
    ifstream cin("../resources/B1040.txt");
    int leftNumP[10];
    string str;
    cin>>str;
    memset(leftNumP,0, sizeof(leftNumP));
    int len=str.length();
    for(int i=0;i<len;i++){
        if(i>0) leftNumP[i]=leftNumP[i-1];
        if(str[i]=='P') {
            leftNumP[i]++;
        }
    }
    int ans=0,rightNumT=0;
    for(int i=len-1;i>=0;i--){
        if(str[i]=='T'){
            rightNumT++;
        }else if(str[i]=='A'){
            ans=(ans+leftNumP[i]*rightNumT);
        }
    }
    cout<<ans<<endl;

}
void Pratice::binaryPow(long a, long b, long m) {
    long ans=1;
    while(b>0){
        int flag=b&1;
        if(flag){
            ans=ans*a%m;
        }
        a=a*a%m;
        b>>=1;
    }
    cout<<ans;
}
void Pratice::searchNormal() {
    int a[]={1,2,3,4,5,6};
    int M=8;
    int len= sizeof(a)/ sizeof(a[0]);
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(a[i]+a[j]==M){
                cout<<a[i]<<" "<<a[j]<<endl;
            }
        }

    }
}
void Pratice::search2Points() {
    int a[]={1,2,3,4,5,6};
    int M=8;
    int len= sizeof(a)/ sizeof(a[0]);
    int j=len-1;
    int i=0;
    while(i<j){
        if(a[i]+a[j]==M){
            cout<<a[i]<<" "<<a[j]<<endl;
            i++;
            j--;
        }else if(a[i]+a[j]<M){
            i++;
        }else{
            j--;
        }
    }
}
int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
void Pratice::C1818() {
    //page 155
    ifstream cin("../resources/C1818.txt");
    int m,n;
    cin>>m>>n;
    printf("%d\n",gcd(m,n));
}

void Pratice::A1032() {
    const int maxn=100010;
    ifstream cin("../resources/A1032.txt");
    SNode node[maxn];
    for(int i=0;i<maxn;i++){
        node[i].flag= false;
    }
    int s1,s2,n;
    cin>>s1>>s2>>n;
    int address,next;
    char data;
    for(int i=0;i<n;i++){
        cin>>address>>data>>next;
        node[address].data=data;
        node[address].next=next;
    }
    int p;
    for(p=s1;p!=-1;p=node[p].next){
        //cout<<p<<endl;
        node[p].flag=true;
    }
    for(p=s2;p!=-1;p=node[p].next){
        if(node[p].flag==true) break;
    }
    if(p!=-1)
        printf("%05d\n",p);
    else
        printf("-1\n");

}
bool cmpSNode(SSNode a,SSNode b){
    if(a.flag== false||b.flag==false){
        return a.flag>b.flag;
    }else{
        return a.data<b.data;
    }
}

void Pratice::A1052() {
    ifstream cin("../resources/A1052.txt");
    const int maxn=100005;
    SSNode node[maxn];
    for(int i=0;i<maxn;i++){
        node[i].flag= false;
    }
    int n,begin,address;
    cin>>n>>begin;
    for(int i=0;i<n;i++){
        cin>>address;
        cin>>node[address].data>>node[address].next;
        node[address].address=address;
    }
    int count=0,p=begin;
    while (p!=-1){
        node[p].flag=true;
        count++;
        p=node[p].next;
    }
    if(count==0)
        cout<<"0  -1";
    else
        sort(node,node+maxn,cmpSNode);

    printf("%d %05d\n",count,node[0].address);
    for(int i=0;i<count;i++){
        if(i!=count-1)
            printf("%05d %d %05d\n",node[i].address,node[i].data,node[i+1].address);
        else
            printf("%05d %d -1\n",node[i].address,node[i].data);

    }
}
void Pratice::A1025() {
    //not
}
int hashFunc(char S[],int len){
    int id=0;
    for(int i=0;i<len;i++){
        id=id*26+(S[i]-'A');
    }
    return id;
}
void Pratice::hashTest1() {
    //not page 110
    ifstream cin("../resources/hash2.txt");
    const int maxn=100;
    char S[maxn][5],temp[5];
    int hashTable[26*26*26+10];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>S[i];
        int id=hashFunc(S[i],3);
        hashTable[id]++;
    }
    for(int i=0;i<m;i++){
        cin>>temp;
        int id=hashFunc(temp,3);
        printf("%d\n",hashTable[id]);
    }
}
void Pratice::factorial() {
    //page 112
}
void Pratice::mergeSort() {
    //page 140
}
void Pratice::randSelect() {
    //page 150
}
void Pratice::vectorTest() {
    //page 195
}
void Pratice::setTest() {
    //page 200
}
void Pratice::stringTest() {
    //page 205
}
void Pratice::mapTest() {
    //page 214
}
void Pratice::queueTest() {
    //page 220
}
void Pratice::A1053() {
    //page 305
}