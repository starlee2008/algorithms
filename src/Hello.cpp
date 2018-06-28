//
// Created by starlee on 2018/5/21.
//
#include <set>
#include <map>
#include "../header/Hello.h"
#include "../header/Poly.h"
void Hello::test1() {
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
void Hello::test2() {
    ifstream cin("../src/1.txt");
    int n,num,m;
    cin>>n;
    int a[n];

}
void Hello::greedy1() {
    string result;
    ifstream cin("../src/1.txt");
    int count[10];
    for(int i=0;i<10;i++){
        cin>>count[i];
    }
    for(int i=1;i<10;i++){
        if(count[i]>0){
            cout<<i;
            count[i]--;
            break;
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<count[i];j++){
           cout<<i;
        }
    }

}
void Hello::hash1() {
    ifstream cin("../src/1.txt");
    char sa[100],sb[100];
    bool HashTable[128];
    cin.getline(sa,100);
    cin.getline(sb,100);

    for(int i=0;i<strlen(sb);i++){
        HashTable[sb[i]]=true;
    }
    for(int j=0;j<strlen(sa);j++){
        if(HashTable[sa[j]]==false){
            cout<<sa[j];
        }
    }
}
void Hello::B1001() {
    ifstream cin("../src/1.txt");
    int n,count=0;
    cin>>n;
    while(n!=1){
        if(n%2==0) n/=2;
        else n=(3*n+1)/2;
        count++;
    }
    cout<<count<<endl;
}
void Hello::B1011() {
    ifstream cin("../src/1.txt");
    int n;
    int a,b,c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a+b>c) cout<<"Case#"<<i+1<<":true"<<endl;
        else cout<<"Case#"<<i+1<<":false"<<endl;
    }
}
void Hello::B1016() {
    ifstream cin("../src/1.txt");
    long long a,b,da,db;
    long long pa=0,pb=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>da>>b>>db;
        while(a!=0){
            if(a%10==da) pa=pa*10+da;
            a/=10;
        }
        while(b!=0){
            if(b%10==db) pb=pb*10+db;
            b/=10;
        }
        cout<<pa+pb<<endl;

    }
}
void Hello::B1046() {
    ifstream cin("../src/1.txt");
    int a1,a2,b1,b2;
    int failA=0,failB=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a1>>a2>>b1>>b2;
        if(a1+b1==a2&&a1+b1!=b2) failB++;
        else if(a1+b1!=a2&&a1+b1==b2) failA++;

    }
    cout<<failA<<" "<<failB<<endl;
}
void Hello::B1008() {
    ifstream cin("../src/1.txt");
    int n,m;
    char s1[100];
    cin>>n>>m;
    cin.get();
    cin.getline(s1,100);
    for(int i=n-m;i<strlen(s1);i++){
        cout<<s1[i]<<" ";
    }
    for(int i=0;i<n-m;i++){
        cout<<s1[i]<<" ";
    }

}
int change(char c){
    if(c=='B') return 0;
    if(c=='C') return 1;
    if(c=='J') return 2;
}
void Hello::B1018() {
    ifstream cin("../src/1.txt");
    char mp[3]={'B','C','J'};
    int times_A[3]={0};
    int times_B[3]={0};
    int hand_A[3]={0};
    int hand_B[3]={0};
    int n;
    cin>>n;
    char a,b;
    int k1,k2;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        k1=change(a);
        k2=change(b);
        if((k1+1)%3==k2){
            times_A[0]++;
            times_B[2]++;
            hand_A[k1]++;

        }else if(k1==k2){
            times_A[1]++;
            times_B[1]++;
        }else{
            times_A[2]++;
            times_B[0]++;
            hand_B[k2]++;
        }
    }
    cout<<times_A[0]<<times_A[1]<<times_A[2]<<endl;
    cout<<times_B[0]<<times_B[1]<<times_B[2]<<endl;
    int id1=0,id2=0;
    for(int i=0;i<3;i++){
        if(hand_A[i]>hand_A[id1]) id1=i;
        if(hand_B[i]>hand_B[id2]) id2=i;
    }
    cout<<mp[id1]<<mp[id2]<<endl;
}
void Hello::A1042() {
    ifstream cin("../src/1.txt");
    const int N=54;
    char mp[5]={'S','H','C','D','J'};
    int start[N+1],end[N+1],next[N+1];
    int n;
    cin>>n;
    for(int i=1;i<=N;i++){
        start[i]=i;
        int num;
        cin>>num;
        next[i]=num;
    }
    for(int k=0;k<n;k++){
        for(int i=1;i<=N;i++){
            end[next[i]]=start[i];
        }
        for(int i=1;i<=N;i++){
            start[i]=end[i];
        }


    }
    for(int i=1;i<=N;i++){
        if(i!=1) cout<<" ";
        start[i]--;
        cout<<mp[start[i]/13]<<start[i]%13+1;
    }

}
void Hello::A1046() {
    ifstream cin("../src/1.txt");
    const int MAXN=100005;
    int dis[MAXN],A[MAXN];
    int sum=0,query,n,left,right;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>A[i];
        sum+=A[i];
        dis[i]=sum;
    }
    cin>>query;
    for(int i=0;i<query;i++){
        cin>>left>>right;
        if(left>right) swap(left,right);
        int temp=dis[right-1]-dis[left-1];
        cout<<min(temp,sum-temp)<<endl;
    }
}
void Hello::B1010() {
    ifstream cin("../src/1.txt");
    int a[10]={0};
    int k,e,count=0;
    while(cin>>k>>e){
        a[e]=k;
    }
    a[0]=0;
    for(int i=1;i<=10;i++){
        a[i-1]=a[i]*i;
        a[i]=0;
        if(a[i-1]!=0) count++;
    }
    if(count==0) cout<<"0 0";
    else{
        for(int i=10;i>=0;i--){
            if(a[i]!=0){
                cout<<a[i]<<i;
                count--;
                if(count!=0) cout<<" ";
            }
        }
    }


}
void Hello::A1002() {
    ifstream cin("../src/1.txt");
    const int max_n=1111;
    double p[max_n]={};
    int k,n,count=0;
    double a;
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>n>>a;
        p[n]+=a;
    }
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>n>>a;
        p[n]+=a;
    }
    for(int i=0;i<max_n;i++){
        if(p[i]!=0) count++;
    }
    cout<<count<<endl;
    for(int i=max_n-1;i>=0;i--){
        if(p[i]!=0) printf("%d %.1f ",i,p[i]);
    }

}
void Hello::A1009() {
    Poly poly[1001];
    ifstream cin("../src/1.txt");
    double ans[2001];
    int n,m,number=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>poly[i].exp>>poly[i].cof;
    }
    cin>>m;
    for(int i=0;i<m;i++) {
        int exp;
        double cof;
        cin >> exp >> cof;

        for (int j = 0; j < n; j++) {
            ans[exp + poly[j].exp] += (cof*poly[j].cof);
        }
    }
    for(int i=0;i<=2000;i++){
        if(ans[i]!=0) number++;
    }
    cout<<number<<endl;
    for(int i=2000;i>=0;i--){
        if(ans[i]!=0.0){
            printf(" %d %.1f ",i,ans[i]);
        }
    }

}
void Hello::B1041() {
    Stu testSeat[1010];
    ifstream cin("../src/1.txt");
    int n,m,seat,examSeat;
    long long id;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>id>>seat>>examSeat;
        testSeat[seat].id=id;
        testSeat[seat].examSeat=examSeat;
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>seat;
        printf("%lld %d\n",testSeat[seat].id,testSeat[seat].examSeat);
    }

}
void Hello::B1004() {
    Stu1 temp,max_stu,min_stu;
    max_stu.score=-1;
    min_stu.score=101;
    ifstream cin("../src/1.txt");
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp.name>>temp.id>>temp.score;
        if(temp.score>max_stu.score) max_stu=temp;
        if(temp.score<min_stu.score) min_stu=temp;
    }
    printf("%s %s\n",max_stu.name,max_stu.id);
    printf("%s %s\n",min_stu.name,min_stu.id);

}
bool lessEqu(Person a,Person b){
    if(a.yy!=b.yy)
        return a.yy<=b.yy;
    else if(a.mm!=b.mm)
        return a.mm<=b.mm;
    else
        return a.dd<=b.dd;

}
bool moreEqu(Person a,Person b){
    if(a.yy!=b.yy)
        return a.yy>=b.yy;
    else if(a.mm!=b.mm)
        return a.mm>=b.mm;
    else
        return a.dd>=b.dd;
}
void Hello::B1028() {
    ifstream cin("../src/1.txt");
    Person oldest,yongest,temp,left,right;
    yongest.yy=left.yy=1814;
    oldest.yy=right.yy=2014;
    yongest.mm=oldest.mm=left.mm=right.mm=9;
    yongest.dd=oldest.dd=left.dd=right.dd=6;
    int num=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char ch;
        cin>>temp.name>>temp.yy>>ch>>temp.mm>>ch>>temp.dd;
        if(moreEqu(temp,left)&&lessEqu(temp,right)){
            num++;
            if(lessEqu(temp,yongest)) oldest=temp;
            if(moreEqu(temp,oldest)) yongest=temp;
        }

    }
    if(num==0) printf("0\n");
    printf("%d %s %s\n",num,oldest.name,yongest.name);


}
void Hello::B1032() {
    ifstream cin("../resources/B1032.txt");
    const int maxn=100010;
    int scholl[maxn]={0};
    int n,schId,score;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>schId>>score;
        scholl[schId]+=score;
    }
    int k=1,MAX=-1;
    for(int i=1;i<=n;i++){
        if(scholl[i]>MAX){
            MAX=scholl[i];
            k=i;
        }
    }
    cout<<k<<" "<<MAX;

}
void Hello::A1011(){
    char s[3]={'W','T','L'};
    ifstream cin("../resources/A1011.txt");
    double ans=1.0,temp,a;
    int index;
    for(int i=0;i<3;i++){
        temp=0.0;
        for(int j=0;j<3;j++){
            cin>>a;
            if(a>temp){
                temp=a;
                index=j;
            }
        }
        ans*=temp;
        cout<<s[index];

    }
    cout<<" "<<(ans*0.65-1)*2;

}
bool great(pNode pNode1,pNode pNode2){
    if(pNode1.hh!=pNode2.hh) return pNode1.hh>pNode2.hh;
    if(pNode1.mm!=pNode2.mm) return pNode1.mm>pNode2.mm;
    return pNode1.ss>pNode2.ss;
}
void Hello::A1006() {
    ifstream cin("../resources/A1006.txt");
    pNode ans1,ans2,temp;
    ans1.hh=24;ans1.mm=60;ans1.ss=60;
    ans2.hh=0;ans2.mm=0;ans2.ss=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char ch;
        cin>>temp.name>>temp.hh>>ch>>temp.mm>>ch>>temp.ss;
        if(great(temp,ans1)==false) ans1=temp;
        cin>>temp.hh>>ch>>temp.mm>>ch>>temp.ss;
        if(great(temp,ans2)==true) ans2=temp;
    }
    cout<<ans1.name<<" "<<ans2.name;
}
void Hello::A1036(){
    ifstream cin("../resources/A1036.txt");
    PScore m,f,temp;
    m.score=101;
    f.score=-1;
    int n;
    char gender;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp.name>>gender>>temp.id>>temp.score;
        if(gender=='M'&&temp.score<m.score){
            m=temp;
        }
        if(gender=='F'&&temp.score>m.score){
            f=temp;
        }


    }
    if(f.score==-1) cout<<"Absent\n";
    else cout<<f.name<<" "<<f.id<<endl;
    if(m.score==101) cout<<"Absent\n";
    else cout<<m.name<<" "<<m.id<<endl;
    if(f.score==-1||m.score==101) cout<<"NA\n";
    else cout<<f.score-m.score;

}
void Hello::B1022() {
    ifstream cin("../resources/B1022.txt");
    int a,b,d;
    cin>>a>>b>>d;
    int sum=a+b;
    int ans[31],num=0;
    while(sum!=0){
        ans[num++]=sum%d;
        sum/=d;
    }
    for(int i=num-1;i>=0;i--){
        cout<<ans[i];
    }

}
void Hello::B1037() {
    const int Galleon=17*29;
    const int Sickle=29;
    ifstream cin("../resources/B1037.txt");

    int a1,b1,c1;
    int a2,b2,c2;
    char ch;
    cin>>a1>>ch>>b1>>ch>>c1>>a2>>ch>>b2>>ch>>c2;
    int price=a1*Galleon+b1*Sickle+c1;
    int money=a2*Galleon+b2*Sickle+c2;
    int change=money-price;
    if(change<0){
        cout<<"-";
        change=-change;
    }
    cout<<change/Galleon<<"."<<change%Galleon/Sickle<<"."<<change%Galleon%Sickle;
}
bool Judge(int z[], int num){
    for(int i=0;i<=num/2;i++){
        if(z[i]!=z[num-i-1])
            return false;
    }
    return true;

}
void Hello::A1019() {
    ifstream cin("../resources/A1019.txt");
    int n,b,z[40],num=0;
    cin>>n>>b;
    do{
        z[num++]=n%b;
        n/=b;
    }while(n!=0);
    bool flag=Judge(z,num);
    if(flag==true) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    for(int i=num-1;i>=0;i--){
        cout<<z[i];
        if(i!=0) cout<<" ";
    }
}
void Hello::B1029() {
    ifstream cin("../resources/B1029.txt");
    string str1,str2;
    bool HashTable[128]={false};
    cin>>str1>>str2;
    for(int i=0;i<str1.size();i++){
        int j;
        char c1,c2;
        for(j=0;j<str2.size();j++){
            c1=str1[i];
            c2=str2[j];
            if(c1>='a'&&c1<='z') c1-=32;
            if(c2>='a'&&c2<='z') c2-=32;
            if(c1==c2) break;
        }
        if(j==str2.size()&&HashTable[c1]==false){
            cout<<c1;
            HashTable[c1]= true;
        }
    }

}
void Hello::B1033() {
    ifstream cin("../resources/B1033.txt");
    bool hashTable[256];
    memset(hashTable,true, sizeof(hashTable));
    char str1[100],str2[100];
    cin.getline(str1,100);
    cin.getline(str2,100);
    int len=strlen(str1);
    for(int i=0;i<len;i++){
        if(str1[i]>='A'&&str1[i]<='Z'){
            str1[i]=str1[i]-'A'+'a';
        }
        hashTable[str1[i]]=false;
    }
    len=strlen(str2);
    for(int i=0;i<len;i++){
        char ch=str2[i];
        if(ch>='A'&&ch<='Z'){

            int low=ch-'A'+'a';
            if(hashTable[low]==true&&hashTable['+']==true){
                cout<<str2[i];
            }

        }else if(hashTable[str2[i]]==true){
            cout<<str2[i];
        }
    }
}
void Hello::B1038(){
    ifstream cin("../resources/B1038.txt");
    int hashTable[110]={0};
    memset(hashTable,0, sizeof(hashTable));
    int n;
    cin>>n;
    int score[n];

    for(int i=0;i<n;i++){
        cin>>score[i];
        hashTable[score[i]]++;
    }
    int m;
    cin>>m;
    int check[m];
    for(int j=0;j<m;j++){
        cin>>check[j];
        cout<<hashTable[check[j]]<<" ";
    }

}
int change2Num(char c){
    if(c>='0'&&c<='9') return c-'0';
    if(c>='a'&&c<='z') return c-'a'+10;
    if(c>='A'&&c<='Z') return c-'A'+36;
}
void Hello::B1039() {
    ifstream cin("../resources/B1039.txt");
    const  int MAXN=1010;
    int hashTable[80]={0},miss=0;
    char whole[MAXN],target[MAXN];
    cin.getline(whole,MAXN);
    cin.getline(target,MAXN);
    int len1=strlen(whole);
    int len2=strlen(target);
    for(int i=0;i<len1;i++){
        int id=change2Num(whole[i]);
        hashTable[id]++;
    }
    for(int i=0;i<len2;i++){
        int id=change2Num(target[i]);
        hashTable[id]--;
        if(hashTable[id]<0) miss++;
    }
    if(miss>0) cout<<"No"<<miss<<endl;
    else cout<<"Yes"<<" "<<len1-len2<<endl;


}
void Hello::B1042() {
    ifstream cin("../resources/B1042.txt");
    const int maxn=1010;
    char str[maxn];
    int hashTable[30]={0};
    cin.getline(str,maxn);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]>='a'&&str[i]<='z'){
            hashTable[str[i]-'a']++;
        }else if(str[i]>='A'&&str[i]<='Z'){
            hashTable[str[i]-'A']++;
        }
    }
    int k=0;
    for(int i=0;i<26;i++){
        if(hashTable[i]>hashTable[k])
            k=i;
    }
    printf("%c %d",'a'+k,hashTable[k]);

}
void Hello::B1043() {
    ifstream cin("../resources/B1043.txt");
    const int maxn=10010;
    char str[maxn],dict[6]={'P','A','T','e','s','t'};
    int hashTable[6]={0};
    cin.getline(str,maxn);
    int len=strlen(str);
    int sum=0;
    for(int i=0;i<len;i++){
        for(int j=0;j<6;j++){
            if(str[i]==dict[j]){
                hashTable[j]++;
                sum++;
            }
        }
    }
    while (sum>0){
        for(int i=0;i<6;i++){
            if(hashTable[i]>0){
                printf("%c",dict[i]);
                hashTable[i]--;
                sum--;
            }
        }
    }
}
void Hello::B1047() {
    ifstream cin("../resources/B1047.txt");
    const int maxn=1010;
    int hashTable[maxn]={0};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int team,member,score;
        char ch;
        cin>>team>>ch>>member>>score;
        hashTable[team]+=score;
    }
    int k,MAX=-1;
    for(int i=0;i<maxn;i++){
        if(hashTable[i]>MAX){
            k=i;
            MAX=hashTable[i];
        }
    }
    cout<<k<<" "<<MAX;
}
void Hello::A1041() {
    int a[10001], hashTable[10001]={0};
    ifstream cin("../resources/A1041.txt");
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        hashTable[a[i]]++;
    }
    int ans=-1;
    for(int i=0;i<n;i++){
        if(hashTable[a[i]]==1){
            ans=a[i];
            break;
        }
    }
    if(ans==-1)cout<<"None";
    else cout<<ans;
}
void Hello::A1050() {
    ifstream cin("../resources/A1050.txt");
    const int MAX_LEN=10005;
    char a[MAX_LEN],b[MAX_LEN];
    bool  hashTable[128];
    cin.getline(a,MAX_LEN);
    cin.getline(b,MAX_LEN);
    int lenA=strlen(a);
    int lenB=strlen(b);
    for(int i=0;i<lenB;i++){
        hashTable[b[i]]=true;
    }
    for(int i=0;i<lenA;i++){
        if(hashTable[a[i]]== false){
            printf("%c",a[i]);
        }
    }

}
void Hello::A1048() {
    const int N=1005;
    int  hashTable[N];
    memset(hashTable,0, sizeof(hashTable));
    ifstream cin("../resources/A1048.txt");
    int n,m,a;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a;
        ++hashTable[a];
    }

    for(int i=0;i<N;i++){
        if(hashTable[i]&&hashTable[m-i]){
            if(i==m-i&&hashTable[i]<=1){
                continue;
            }
            cout<<i<<" "<<m-i<<endl;
            return;
        }
    }
    cout<<"No Solution\n";

}
void Hello::A1048x() {

}
void Hello::B1023() {
    ifstream cin("../resources/B1023.txt");
    int count[10];
    for(int i=0;i<10;i++){
        cin>>count[i];

    }

}
bool cmpmooncake(Mooncake a,Mooncake b){
    return a.price>b.price;
}
void Hello::B1020() {
    ifstream cin("../resources/B1020.txt");
    Mooncake mooncake[1010];
    int n;
    double D;
    cin>>n>>D;
    for(int i=0;i<n;i++)
        cin>>mooncake[i].store;
    for(int i=0;i<n;i++){
        cin>>mooncake[i].sell;
        mooncake[i].price=mooncake[i].sell/mooncake[i].store;
    }
    double ans=0;
    sort(mooncake,mooncake+n,cmpmooncake);
    for(int i=0;i<n;i++){
        if(mooncake[i].store<=D){
            D-=mooncake[i].store;
            ans+=mooncake[i].sell;
        }else{
            ans+=mooncake[i].price*D;
            break;
        }

    }
    cout<<ans<<endl;
}
void Hello::B1003() {
    ifstream cin("../resources/B1003.txt");
    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        int num_p=0,num_t=0,other=0;
        int loc_p=0,loc_t=0;
        int len=str.size();
        for(int i=0;i<len;i++){
            if(str[i]=='P'){
                num_p++;
                loc_p=i;
            }else if(str[i]=='T'){
                num_t++;
                loc_t=i;
            }else if(str[i]!='A'){
                other++;
            }
        }
        if((num_p!=1)||(num_t!=1)||(other!=0)||loc_t-loc_p<=1){
            cout<<"NO"<<endl;
            continue;
        }
        int x=loc_p,y=loc_t-loc_p-1,z=len-loc_t-1;
        if(z-x*(y-1)==x){
            printf("YES\n");
        }else{
            cout<<"NO"<<endl;
        }
    }
}
void Hello::A1029() {
    ifstream cin("../resources/A1029.txt");
    int a[]={4,11,12,13,14};
    int b[]={5,9,10,15,16,17};
    int n= sizeof(a)/ sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    int mid=(n+m-1)/2;
    int c[n+m];
    int i=0,j=0,index=0;

    while(i<n&&j<m){
        if(a[i]<=b[j]){
            c[index++]=a[i++];
        }else{
            c[index++]=b[j++];
        }

    }
    while(i<n) c[index++]=a[i++];
    while (j<m) c[index++]=b[j++];
    cout<<c[mid]<<endl;


}
void to_arry(int n,int num[]){
    for(int i=0;i<4;i++){
        num[i]=n%10;
        n/=10;
    }
}
bool cmp(int a,int b){
    return a>b;
}
int to_number(int num[]){
    int sum=0;
    for(int i=0;i<4;i++){
        sum=sum*10+num[i];
    }
    return sum;
}
void Hello::B1019() {
    ifstream cin("../resources/B1019.txt");
    int n,MIN,MAX;
    cin>>n;
    int num[5];
    while(1){
        to_arry(n,num);
        sort(num,num+4);
        MIN=to_number(num);
        sort(num,num+4,cmp);
        MAX=to_number(num);
        n=MAX-MIN;
        printf("%04d-%04d=%04d\n",MAX,MIN,n);
        if(n==0||n==6174) break;

    }

}
void Hello::B1049() {
    ifstream cin("../resources/B1049.txt");
    int n;
    double v,ans;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v;
        ans+=v*i*(n+1-i);
    }
    cout<<ans<<endl;

}
void Hello::A1008() {
    ifstream cin("../resources/A1008.txt");
    int n, total = 0, now = 0, to;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> to;
        if (to > now) {
            total += ((to - now) * 6);
        } else {
            total += ((now - to) * 4);
        }
        total += 5;
        now = to;
     }

    cout<<total<<endl;
}
void Hello::A1049() {
    ifstream cin("../resources/A1049.txt");
    int n,a=1,ans=0;
    int left,now,right;
    cin>>n;
    while(n/a!=0){
        left=n/(a*10);
        now=n/a%10;
        right=n%a;
        if(now==0){
            ans+=left*a;
        }
        else if(now==1){
            ans+=left*a+right+1;
        } else{
            ans+=(left+1)*a;
        }
        a*=10;
    }
    cout<<ans<<endl;
}
void Hello::A1051() {
    ifstream cin("../resources/A1051.txt");
    const int maxn=1010;
    int arr[maxn];
    stack<int> st;
    int m,n,T;
    cin>>m>>n>>T;
    while(T--){
        while (!st.empty()){
            st.pop();
        }
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        int current=1;
        bool flag=true;
        for(int i=1;i<=n;i++){
            st.push(i);
            if(st.size()>m){
                flag=false;
                break;
            }
            while(!st.empty()&&st.top()==arr[current]){
                st.pop();
                current++;
            }
        }
        if(st.empty()==true&&flag==true){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}
void Hello::A1056() {
    ifstream cin("../resources/A1056.txt");
    const int maxn=1010;
    Mouse mouse[maxn];
    int np,ng,order;
    cin>>np>>ng;
    for(int i=0;i<np;i++){
        cin>>mouse[i].weight;
    }
    queue<int> q;
    for(int i=0;i<np;i++){
        cin>>order;
        q.push(order);
    }
    int temp=np,group;
    while(q.size()!=1){
        if(temp%ng==0)
            group=temp/ng;
        else
            group=temp/ng+1;
        for(int i=0;i<group;i++){
            int k=q.front();
            for(int j=0;j<ng;j++){
                if(i*ng+j>=temp) break;
                int front=q.front();
                int w1=mouse[front].weight;
                int w2=mouse[k].weight;
                if(w1>w2){
                    k=front;
                }
                mouse[front].R=group+1;
                q.pop();
            }
            q.push(k);
        }
        temp=group;
    }
    mouse[q.front()].R=1;
    for(int i=0;i<np;i++){
        printf("%d",mouse[i].R);
        if(i<np-1) printf("  ");
    }
}
bool cmpANode(ANode a,ANode b){
    return a.order<b.order;
}
void Hello::A1097() {
    ifstream cin("../resources/A1097.txt");
    const int maxn=100005;
    const int TABLE=1000010;
    ANode node[maxn];
    for(int i=0;i<maxn;i++){
        node[i].order=maxn;
    }
    int begin,n,K,address;
    cin>>begin>>n>>K;
    for(int i=0;i<n;i++){
        cin>>address;
        cin>>node[address].data;
        cin>>node[address].next;
        node[address].address=address;
    }
    int p=begin,count=0;
    while(p!=-1){
        node[p].order=count++;
        p=node[p].next;
    }
    sort(node,node+maxn,cmpANode);
    n=count;
    for(int i=0;i<n/K;i++){
        for(int j=(i+1)*K-1;j>i*K;j--){
            printf("%05d %d",node[i*K].address,node[i*K].data);
            if(i<n/K-1){
                printf("%05d\n",node[(i+2)*K-1].address);
            }
        }
    }



}
void Hello::A1081() {
    ifstream cin("../resources/A1081.txt");
    int n;
    cin>>n;
    Fraction sum,temp;
    sum.up=0;
    sum.down=1;
    for(int i=0;i<n;i++){
        char ch;
        cin>>temp.up>>ch>>temp.down;
        sum=sum.add(sum,temp);
    }
    sum.ShowResult(sum);

}
void compare(set<int> st[],int x,int y){
    int totalNum=st[y].size(),same=0;
    for(set<int>::iterator it=st[x].begin();it!=st[x].end();it++){
        if(st[y].find(*it)!=st[y].end())
            same++;
        else
            totalNum++;
    }
    printf("%0.1f\n",same*100.0/totalNum);


}
void Hello::A1063() {
    const int N=51;
    ifstream cin("../resources/A1063.txt");
    set<int> st[N];
    int n,k,q,v,st1,st2;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>k;
        for(int j=0;j<k;j++){
            cin>>v;
            st[i].insert(v);
        }
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>st1>>st2;
        compare(st,st1,st2);
    }
}
void Hello::A1060() {

}
void Hello::A1100() {

}
void Hello::A1054() {
    ifstream cin("../resources/A1054.txt");
    int n,m,col;
    cin>>n>>m;
    map<int,int> count;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>col;
            if(count.find(col)!=count.end())
                count[col]++;
            else
                count[col]=1;
        }

    }
    int k=0,MAX=0;
    for(map<int,int>::iterator it=count.begin();it!=count.end();it++){
        if(it->second>MAX){
            k=it->first;
            MAX=it->second;
        }
    }
    printf("%d\n",k);
}
bool check(char c){
    if(c>='0'&&c<='9') return true;
    if(c>='A'&&c<='Z') return true;
    if(c>='a'&&c<='z') return true;
    return false;
}
void Hello::A1071() {
    ifstream cin("../resources/A1071.txt");
    map<string,int> count;
    char str[1000];
    cin.getline(str,1000);
    int len=strlen(str);


    int i=0;
    while(i<len){
        string word;
        while(i<len&&check(str[i])==true){
            if(str[i]>='A'&&str[i]<='Z'){
                str[i]+=32;
            }
            word+=str[i];
            i++;
        }
        if(word!=""){
            if(count.find(word)==count.end())
                count[word]=1;
            else
                count[word]++;
        }
        while(i<len&&check(str[i])==false){
            i++;
        }
    }
    string ans;
    int MAX=0;
    for(map<string,int>::iterator it=count.begin();it!=count.end();it++){
        if(it->second>MAX){
            MAX=it->second;
            ans=it->first;
        }
    }
   cout<<ans<<" "<<MAX<<endl;
}
bool isPrime(int n){
    if(n<=1) return false;
    int sqr=(int)sqrt(1.0*n);
    for(int i=2;i<=sqr;i++){
        if(n%i==0) return false;
    }
    return true;
}
void Hello::B1007() {
    ifstream cin("../resources/B1007.txt");
    int n,count=0;
    cin>>n;
    for(int i=3;i+2<=n;i+=2){
        if(isPrime(i)== true && isPrime(i+2)==true){
            count++;
        }
    }
    printf("%d\n",count);

}
void Hello::B1013() {
    const int maxn=10001;
    ifstream cin("../resources/B1013.txt");
    int m,n,count=0;

    int prime[maxn],num=0;
    bool p[maxn]={0};

    cin>>m>>n;
    for(int i=1;i<maxn;i++){
        if(isPrime(i)==true){
            prime[num++]=i;
            p[i]=true;
            if(num>=n) break;
        }

    }
    for(int i=m;i<=n;i++){
        printf("%d",prime[i-1]);
        count++;
        if(count%10!=0 && i<n)
            printf(" ");
        else
            printf("\n");
    }
}
void Hello::A1015() {
    ifstream cin("../resources/A1015.txt");
    int n,radix;
    int d[1111];
    do{
        cin>>n;
        if(n<0) break;
        cin>>radix;
        if(isPrime(n)==false){
            printf("No\n");
        }else{
            int len=0;
            do{
                d[len++]=n%radix;
                n/=radix;
            }while (n!=0);

            for(int i=0;i<len;i++){
                n=n*radix+d[i];
            }
            if(isPrime(n)==true)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }while (n!=EOF);
}