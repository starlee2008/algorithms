//
// Created by starlee on 2018/5/14.
//
#include "../header/Frq.h"
void Frq::acm2812() {
    ifstream cin("../resources/acm2812.txt");
    char ch[256];
    int sum = 0;
    while (cin.getline(ch, 256)) {
        if (ch[0] == '#') break;
        for (int i = 0; ch[i] != '\0'; i++) {
            if (ch[i] != ' ') sum += (i + 1) * (ch[i] - 64);
        }
        cout << sum << endl;
        sum = 0;

    }
}
void Frq::acm1240() {
    ifstream cin("../resources/acm1240.txt");
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        cout << "String #" << i + 1 << endl;
        for (int j = 0; j < s.size(); j++) {
            cout << ((s[j] != 'Z') ? char(s[j] + 1) : 'A');
        }
        cout << endl;
        cout << endl;
    }
}
void Frq::acm1240x() {
    ifstream cin("../resources/acm1240.txt");
    const string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        cout << "String #" << i + 1 << endl;
        for (int j = 0; j < s.size(); j++) {
            int pos = str.find(s[j]);
            cout << str.substr((pos + 1) % 26, 1);
        }
        cout << endl;
        cout << endl;

    }
}
void Frq::amc1383() {
    ifstream cin("../resources/acm1383.txt");
    vector<int> v;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.clear();
        for (int j = a; j; j /= 2) {
            v.push_back(j % 2 ? 1 : 0);

        }
        int p = 0;
        for (int k = 0; k < v.size(); k++) {
            if (v[k] == 1) {
                if (p == 0)
                    cout << k;
                else
                    cout << " " << k;
                p = 1;
            }
        }
        cout << endl;

    }
}
void Frq::acm2478() {
    ifstream cin("../resources/acm2478.txt");
    string s, t;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        //int c=0;
        t = s[0];
        int count = 0;
        for (int j = 0; j < s.size(); j++) {

            if (s[j] == t[0]) {
                count++;
                if (j == s.size() - 1) {
                    if (count == 1) cout << t[0];
                    else cout << count << t[0];
                }
            } else {
                if (count == 1) cout << t[0];
                else cout << count << t[0];
                t[0] = s[j];
                count = 1;
                if (j == s.size() - 1) {
                    if (count == 1) cout << t[0];
                    else cout << count << t[0];
                }
            }

        }
        cout << endl;
        s = "";
    }
}
void Frq::acm2478x() {
    ifstream cin("../resources/acm2478.txt");
    int n;
    int count = 1;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == s[j + 1]) {
                count++;
            } else {
                if (count != 1)
                    cout << count << s[j];
                else
                    cout << s[j];
                count = 1;
            }
        }
        cout << endl;

    }

}
void Frq::acm2886() {
    ifstream cin("../resources/acm2886.txt");
    int n;
    int count = 1;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == s[j + 1]) {
                count++;
            } else {
                cout << count << s[j];
                count = 1;
            }
        }
        cout << endl;

    }
}
void Frq::acm2947() {
    ifstream cin("../resources/acm2947.txt");
    int n, count1, count2;
    string s1, s2;
    string ss1, ss2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> count1;
        for (int j = 0; j < count1; j++) {
            cin >> s1;
            ss1 += s1[0];
        }
        cin >> count2;
        for (int k = 0; k < count2; k++) {
            cin >> s2;
            ss2 += s2[0];
        }
        if (ss1.compare(ss2) == 0)
            printf("SAME\n");
        else
            printf("DIFFERENT\n");
        ss1 = "";
        ss2 = "";

    }
}
void Frq::acm2932() {
    ifstream cin("../resources/acm2932.txt");
    string s;
    char ss[100];
    while (cin.getline(ss, 100)) {
        if (ss[0] == '#') break;
        s = ss;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') printf("%%20");
            else if (s[i] == '!') printf("%%21");
            else if (s[i] == '$') printf("%%24");
            else if (s[i] == '%') printf("%%25");
            else if (s[i] == '(') printf("%%28");
            else if (s[i] == ')') printf("%%29");
            else if (s[i] == '*') printf("%%2a");
            else printf("%c", s[i]);
        }
        printf("\n");

    }

}
void Frq::acm1251() {
    ifstream cin("../resources/acm1251.txt");
    int n = 0, num, sum = 0, count = 0, move_count = 0;
    while (cin >> n) {
        int *arr = new int[n];
        if (n == 0) break;
        count++;
        sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> num;
            arr[i] = num;
            sum += num;
        }
        int average = sum / n;
        for (int j = 0; j < n; j++) {
            if (arr[j] > average) move_count += (arr[j] - average);
        }

        printf("Set #%d\n", count);
        printf("The minimum number of moves is %d.\n", move_count);
        printf("\n");
        delete[] arr;
        n = 0;
        move_count = 0;
    }

}
void Frq::acm1241() {
    ifstream cin("../resources/acm1241.txt");
    int a, b, c, n = 0;
    cout.precision(3);
    while (cin >> a >> b >> c) {
        if (a == 0 && b == 0 && c == 0) break;
        n++;
        if (a == -1) {
            if (c * c - b * b >= 0) {
                cout << "Triangle #" << n << endl;
                cout << "a = " << fixed << pow(c * c - b * b, 0.5) << endl;
                cout << endl;
            } else {
                cout << "Triangle #" << n << endl;
                cout << "Impossible." << endl;
                cout << endl;
            }

        } else if (b == -1) {
            if (c * c - a * a >= 0) {
                cout << "Triangle #" << n << endl;
                cout << "b = " << fixed << pow(c * c - a * a, 0.5) << endl;
                cout << endl;
            } else {
                cout << "Triangle #" << n << endl;
                cout << "Impossible." << endl;
                cout << endl;
            }

        } else if (c == -1) {

            cout << "Triangle #" << n << endl;
            cout << "c = " << fixed << pow(a * a + b * b, 0.5) << endl;
            cout << endl;


        }
    }
}
void Frq::acm1259() {
    ifstream cin("../src/aaa.txt");
    const int MAXN = 1000 + 10;
    int n, target[MAXN];
    while (cin >> n) {
        stack<int> s;
        int A = 1, B = 1;
        for (int i = 1; i <= n; i++)
            cin >> target[i];
        int ok = 1;
        while (B <= n) {
            if (A == target[B]) { A++, B++; }
            else if (!s.empty() && s.top() == target[B]) {
                s.pop();
                B++;
            } else if (A <= n) {
                s.push(A++);
            } else {
                ok = 0;
                break;
            }
            printf("%s\n", ok ? "Yes" : "No");
        }
    }

}
void Frq::testAcm() {
    ifstream cin("../src/aaa.txt");
    const int maxn=1000+5;
    int a[maxn];
    int n,i,k;
    while(cin>>n&&n)
    {
        stack<int>s;//设立一个栈储存按顺序进栈的序列 （一个空栈）
        while(cin>>a[0]&&a[0])
        {
            for(i=1;i<n;i++)
                cin>>a[i];//要进行判断出栈的序列
            for(i=1,k=0;i<=n;i++)
            {
                s.push(i);//进栈
                while(s.top()==a[k])//判断栈顶元素和a数组是否相等
                {
                    if(!s.empty()) s.pop();//栈不为空就出栈
                    k++;//判断下一个位置
                    if(s.empty()) break;//直到栈空就结束循环
                }
            }
            if(k==n) printf("Yes\n");//完全匹配就输出yes
            else printf("No\n");
        }
        printf("\n");
    }


}
void Frq::acm1295() {
    ifstream cin("../resources/acm1295.txt");
    int n;
    cin>>n;
    cin.get();
    char ss[80];
    string s;
    for(int i=0;i<n;i++){
        while (cin.getline(ss,80)){
            s=ss;
            reverse(s.begin(),s.end());
            cout<<s<<endl;
        }
    }

    /**
     * ifstream cin("../src/aaa.txt");
    char ss[100];
    string s;
    int n;
    cin>>n;
    char c=cin.get();
    while(n--){
        cin.getline(ss,100);
        s=ss;
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
    return 0;
     */
}
void Frq::acm1763() {
    ifstream cin("../resources/acm1763.txt");
    double a,b;
    cin>>a;
    while(true){
        cin>>b;
        if(b==999) break;
        printf("%.2f\n",(b-a));
        a=b;
    }
    printf("End of Output");

}
void Frq::acm2001() {
    ifstream cin("../resources/acm2001.txt");
    string sa,sb,st;
    vector<int> v;
    int a,b,sum;
    int p=0;
    int u=0;
    cin>>sa;
    while(cin>>sa>>sb){
        if(sa.size()<sb.size()){
            st=sa;
            sa=sb;
            sb=st;
        }
        for(int i=0;i<sa.size();i++){
            if(sa[i]=='0') a=0;
            else if(sa[i]=='1') a=1;
            else if(sa[i]=='2') a=2;
            else if(sa[i]=='3') a=3;
            else if(sa[i]=='4') a=4;
            else if(sa[i]=='5') a=5;
            else if(sa[i]=='6') a=6;
            else if(sa[i]=='7') a=7;
            else if(sa[i]=='8') a=8;
            else if(sa[i]=='9') a=9;
            if(i>=sb.size()) b=0;
            else if(sb[i]=='0') b=0;
            else if(sb[i]=='1') b=1;
            else if(sb[i]=='2') b=2;
            else if(sb[i]=='3') b=3;
            else if(sb[i]=='4') b=4;
            else if(sb[i]=='5') b=5;
            else if(sb[i]=='6') b=6;
            else if(sb[i]=='7') b=7;
            else if(sb[i]=='8') b=8;
            else if(sb[i]=='9') b=9;

            sum=a+b+p;
            p=sum/10;
            v.push_back(sum%10);
        }
        if(p==1) v.push_back(1);
        while(1){
            vector<int>:: iterator it=v.end()-1;
            if(*it==0) v.erase(it);
            else break;
        }
        for(int j=0;j<v.size();j++){
            if(u==0&&v[j]!=0) u=1;
            if(u==1) cout<<v[j];
        }
        cout<<endl;
        v.clear();
        u=0;
        p=0;
    }
}
void Frq::acm2001x() {
    ifstream cin("../resources/acm2001.txt");
    string sa,sb,st;
    char* s1,*s2;
    int a,b;
    vector<int> v;
    cin>>sa;
    while(cin>>sa>>sb){
        reverse(sa.begin(),sa.end());
        reverse(sb.begin(),sb.end());
        sprintf(strcpy(s1,sa.c_str()),"%d",a);
        sprintf(strcpy(s2,sb.c_str()),"%d",b);
    }
}
void Frq::acm2736() {
    ifstream cin("../resources/acm2736.txt");
    int n;
    int a,b,c;
    while(cin>>n){
        a=n/100;
        b=(n-a*100)/10;
        c=n%10;
        if(n==a*a*a+b*b*b+c*c*c){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}
bool cmpdna(const string &s1,const string &s2){
    int i,j,k,m,n;
    int c1=0,c2=0;
    for(int i=0;i<s1.size();i++){
        for(j=i+1;j<s1.size();j++){
            if(s1[i]>s1[j]){
                c1++;
            }
        }
    }
    for(int i=0;i<s2.size();i++){
        for(j=i+1;j<s2.size();j++){
            if(s2[i]>s2[j]){
                c2++;
            }
        }
    }
    return c1<c2;
}
void Frq::acm1188() {
    ifstream cin("../resources/acm1188.txt");
    int n,a,b;
    cin>>n;
    string s;
    vector<string> v;
    int p=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        v.clear();
        p++;
        for(int j=0;j<b;j++){
            cin>>s;
            v.push_back(s);
        }
        sort(v.begin(),v.end(),cmpdna);
        if(p!=1)
            printf("\n");
        for(int k=0;k<v.size();k++){
            cout<<v[k]<<endl;
        }
    }

}
void Frq::acm1949() {
    int matritx[100][100];
    int rowSum[100];
    int colSum[100];
    ifstream cin("../resources/acm1949.txt");
    int i,j,PL,PC,countL,countC;
    int n;
    while(cin>>n){
        if(n==0)
            break;
        PL=0;
        PC=0;
        countL=0;
        countC=0;
        for(i=0;i<n;i++){
            rowSum[i]=0;
            colSum[i]=0;
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>matritx[i][j];
                rowSum[i]=rowSum[i]+matritx[i][j];
                colSum[j]=colSum[j]+matritx[i][j];
            }
        }
        for(i=0;i<n;i++){
            if(rowSum[i]%2!=0){
                PL=i;
                countL++;
            }
            if(colSum[i]%2!=0){
                PC=i;
                countC++;
            }
        }
        if(countL==0 && countC==0)
            printf("OK\n");
        else if(countL==1 && countC==1)
            printf("Change bit ( %d %d)\n",PL+1,PC+1);
        else
            printf("Corrupt\n");
    }
}