//
// Created by starlee on 2018/5/3.
//
#include "../header/Test.h"
#include "../Header/common.h"

void Test::firstRun() {
    {
        int i=1;
        cout<<"»¶Ó­»¶Ó­Äú"<<endl;
        cout<<'a'<<endl;
        cout<<"i="<<i<<endl;
        cout<<'\n';
    }
}
int Test::add(int a, int b) {
    return a+b;
}
void Test::testVector() {
    vector<int> v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<accumulate(v.begin(),v.end(),0);

}
void Test::testVector1() {
    vector<int> v(3);
    v[0]=1;
    v[1]=2;
    v[2]=3;
    v.insert(v.begin(),5);
    v.insert(v.begin()+2,9);
    v.insert(v.end(),10);
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    reverse(v.begin(),v.end());

    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end());

    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }


}
void Test::testString() {
    /*
    string str;
    str="hello stl";
    cout<<str<<endl;
     */
    string str;
    char *s;
    scanf("%s",s);
    str=s;
    str.append(" app string");
    string::iterator it;
    it=str.begin();
    str.insert(it+1,'p');
    it=str.begin();
    str.erase(it,it+4);

    cout<<str<<endl;
}
void Test::stringNum(string strNum) {
    int sum=0;
    for(int i=0;i<strNum.length();i++){
        if(strNum[i]=='0')
            sum+=0;
        else if(strNum[i]=='1')
            sum+=1;
        else if(strNum[i]=='2')
            sum+=2;
        else if(strNum[i]=='3')
            sum+=3;
        else if(strNum[i]=='4')
            sum+=4;
        else if(strNum[i]=='5')
            sum+=5;
        else if(strNum[i]=='6')
            sum+=6;
        else if(strNum[i]=='7')
            sum+=7;
        else if(strNum[i]=='8')
            sum+=8;
        else if(strNum[i]=='9')
            sum+=9;


    }
    cout<<"sum="<<sum;
}
string Test::convert2String(double x) {
    ostringstream o;
    if(o<<x){
        return o.str();
    }else
        return "conversion error";

}
double Test::convertFromString(const string &str) {
    istringstream i(str);
    double x;
    if(i>>x){
        return x;
    } else
        return 0.0;

}
void Test::testDqueue() {
    deque<int> deque1;
    deque1.push_back(1);
    deque1.push_back(2);
    deque1.push_back(3);
    deque1.push_front(10);
    deque1.push_front(20);
    for(int i=0;i<deque1.size();i++){
        cout<<deque1[i]<<" ";
    }
    cout<<endl;

}
void Test::testAcm1167() {
    ifstream cin("../resources/acm1167.txt");
    int n;
    while(cin>>n){
        cout<<n*n<<endl;
    }
}
void Test::testAcm1166() {
    ifstream cin("../resources/acm1166.txt");
    int a,b;
    while(cin>>a>>b){
        cout<<a-b<<endl;
    }
}
void Test::testAcm1174() {
    ifstream cin("../resources/acm1174.txt");
    int n;
    while(cin>>n){
        int sum=0,p=1;
        for(int i=1;i<=n;i++){
            p*=i;
            sum+=p;
        }
        cout<<sum<<endl;
    }
}
void Test::testAcm1176() {
    int n;
    ifstream cin("../resources/acm1176.txt");
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    for(int i=2;i<46;i++){
        v.push_back(v[i-1]+v[i-2]);
    }
    while(cin>>n){
        cout<<v[n]<<endl;
    }

}
void Test::testAcm1177() {
    int x,y;
    ifstream cin("../resources/acm1177.txt");
    while(cin>>x>>y){
        cout<<gcd(x,y)<<endl;
    }
}
int Test::gcd(int x,int y){
    while(x!=y){
        if(x>y)
            x=x-y;
        else
            y=y-x;
    }
    return x;
}
void Test::testAcm1178() {
    int x,y;
    ifstream cin("../resources/acm1178.txt");
    while(cin>>x>>y){
        cout<<x/gcd(x,y)*y<<endl;
    }
}
void Test::testAcm1179() {
    int n,sum=0;
    ifstream cin("../resources/acm1179.txt");
    while(cin>>n){
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            sum+=x;
        }
        cout<<sum<<endl;
    }

}
bool Test::isPrime(int n) {
    int sq=sqrt(n*1.0);
    for(int i=2;i<sq;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
void Test::testAcm1181() {
    ifstream cin("../resources/acm1181.txt");
    int n=0;
    while(cin>>n){
        cout<<(n>100&&n<1000&&n/100==n%10&&isPrime(n)?"Yes\n":"No\n");
    }
}
void Test::testAcm1185() {
    ifstream cin("../resources/acm1185.txt");
    int n=0;
    string s="";
    while(cin>>n){
        if(n==0){
            cout<<"     0-->0"<<endl;
        }
        if(n<0){
            cout<<"     -->     "<<endl;
        }
        for(int a=n;a;a=a/2){
            s=s+(a%2?'1':'0');
        }
        reverse(s.begin(),s.end());
        const char *ss=s.c_str();
        cout.width(11);
        cout<<ss<<endl;
        s="";//ÖØÖÃ


    }
}
void Test::testAcm1190() {
    ifstream cin("../resources/acm1190.txt");
    vector<int> a;
    for(int i=2;i<10000;i++){
        int sum=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0)
                sum+=j;
        }
        if(sum==i)
            a.push_back(sum);
    }
    int n;
    while(cin>>n){
        cout<<"n:";
        for(int i=0;i<a.size();i++){
            if(a[i]<n)
                cout<<a[i]<<" ";
        }
        cout<<endl;

    }


}
void Test::testAcm1191() {
    ifstream cin("../resources/acm1191.txt");
    int num=0;
    int f12=479001600;
    multiset<unsigned int> s;
    int n;
    while(cin>>n){
        if(f12%n==0){
            multiset<unsigned int>::iterator it=s.find(f12/n);
            if(it!=s.end()){
                num++;
                s.erase(it);
            }else{
                s.insert(n);
            }
        }
    }
    cout<<num<<endl;

}
void Test::testAcm1204() {
    multiset<string,Comp> ms;
    ifstream cin("../resources/acm1204.txt");
    string s;
    while(cin>>s){
        ms.insert(s);
    }
    for(multiset<string,Comp>::iterator it=ms.begin();it!=ms.end();it++){
        cout<<*it<<endl;
    }

}
bool Comp1(const string &s1, const string &s2) {
    if(s1.length()!=s2.length())
        return s1.length()<s2.length();
    else
        return s1<s2;

}
void Test::testAcm1208() {
    ifstream cin("../resources/acm1208.txt");
    vector<string> v;
    string s,t;
    while (cin>>s){
        t=s;
        reverse(t.begin(),t.end());
        if(s==t){
            v.push_back(s);
        }

    }
    sort(v.begin(),v.end(),Comp1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

}