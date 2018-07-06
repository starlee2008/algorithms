//
// Created by starlee on 2018/5/3.
//

#include "../header/Test.h"
#include "../Header/common.h"

void Test::firstRun() {
    {
        int i = 1;
        cout << "欢迎欢迎您" << endl;
        cout << 'a' << endl;
        cout << "i=" << i << endl;
        cout << '\n';
    }
}

int Test::add(int a, int b) {
    return a + b;
}

void Test::testVector() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    cout << accumulate(v.begin(), v.end(), 0);

}

void Test::testVector1() {
    vector<int> v(3);
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    v.insert(v.begin(), 5);
    v.insert(v.begin() + 2, 9);
    v.insert(v.end(), 10);
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    reverse(v.begin(), v.end());

    for (it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());

    for (it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
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
    scanf("%s", s);
    str = s;
    str.append(" app string");
    string::iterator it;
    it = str.begin();
    str.insert(it + 1, 'p');
    it = str.begin();
    str.erase(it, it + 4);

    cout << str << endl;
}

void Test::stringNum(string strNum) {
    int sum = 0;
    for (int i = 0; i < strNum.length(); i++) {
        if (strNum[i] == '0')
            sum += 0;
        else if (strNum[i] == '1')
            sum += 1;
        else if (strNum[i] == '2')
            sum += 2;
        else if (strNum[i] == '3')
            sum += 3;
        else if (strNum[i] == '4')
            sum += 4;
        else if (strNum[i] == '5')
            sum += 5;
        else if (strNum[i] == '6')
            sum += 6;
        else if (strNum[i] == '7')
            sum += 7;
        else if (strNum[i] == '8')
            sum += 8;
        else if (strNum[i] == '9')
            sum += 9;


    }
    cout << "sum=" << sum;
}

string Test::convert2String(double x) {
    ostringstream o;
    if (o << x) {
        return o.str();
    } else
        return "conversion error";

}

double Test::convertFromString(const string &str) {
    istringstream i(str);
    double x;
    if (i >> x) {
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
    for (int i = 0; i < deque1.size(); i++) {
        cout << deque1[i] << " ";
    }
    cout << endl;

}

void Test::acm1167() {
    ifstream cin("../resources/acm1167.txt");
    int n;
    while (cin >> n) {
        cout << n * n << endl;
    }
}

void Test::acm1166() {
    ifstream cin("../resources/acm1166.txt");
    int a, b;
    while (cin >> a >> b) {
        cout << a - b << endl;
    }
}

void Test::acm1174() {
    ifstream cin("../resources/acm1174.txt");
    int n;
    while (cin >> n) {
        int sum = 0, p = 1;
        for (int i = 1; i <= n; i++) {
            p *= i;
            sum += p;
        }
        cout << sum << endl;
    }
}

void Test::acm1176() {
    int n;
    ifstream cin("../resources/acm1176.txt");
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    for (int i = 2; i < 46; i++) {
        v.push_back(v[i - 1] + v[i - 2]);
    }
    while (cin >> n) {
        cout << v[n] << endl;
    }

}

void Test::acm1177() {
    int x, y;
    ifstream cin("../resources/acm1177.txt");
    while (cin >> x >> y) {
        cout << gcd(x, y) << endl;
    }
}

int Test::gcd(int x, int y) {
    while (x != y) {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }
    return x;
}

void Test::acm1178() {
    int x, y;
    ifstream cin("../resources/acm1178.txt");
    while (cin >> x >> y) {
        cout << x / gcd(x, y) * y << endl;
    }
}

void Test::acm1179() {
    int n, sum = 0;
    ifstream cin("../resources/acm1179.txt");
    while (cin >> n) {
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
    }

}

bool Test::isPrime(int n) {
    int sq = sqrt(n * 1.0);
    for (int i = 2; i < sq; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void Test::acm1181() {
    ifstream cin("../resources/acm1181.txt");
    int n = 0;
    while (cin >> n) {
        cout << (n > 100 && n < 1000 && n / 100 == n % 10 && isPrime(n) ? "Yes\n" : "No\n");
    }
}

void Test::acm1185() {
    ifstream cin("../resources/acm1185.txt");
    int n = 0;
    string s = "";
    while (cin >> n) {
        if (n == 0) {
            cout << "     0-->0" << endl;
        }
        if (n < 0) {
            cout << "     -->     " << endl;
        }
        for (int a = n; a; a = a / 2) {
            s = s + (a % 2 ? '1' : '0');
        }
        reverse(s.begin(), s.end());
        const char *ss = s.c_str();
        cout.width(11);
        cout << ss << endl;
        s = "";//重置


    }
}

void Test::acm1190() {
    ifstream cin("../resources/acm1190.txt");
    vector<int> a;
    for (int i = 2; i < 10000; i++) {
        int sum = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0)
                sum += j;
        }
        if (sum == i)
            a.push_back(sum);
    }
    int n;
    while (cin >> n) {
        cout << "n:";
        for (int i = 0; i < a.size(); i++) {
            if (a[i] < n)
                cout << a[i] << " ";
        }
        cout << endl;

    }


}

void Test::acm1191() {
    ifstream cin("../resources/acm1191.txt");
    int num = 0;
    int f12 = 479001600;
    multiset<unsigned int> s;
    int n;
    while (cin >> n) {
        if (f12 % n == 0) {
            multiset<unsigned int>::iterator it = s.find(f12 / n);
            if (it != s.end()) {
                num++;
                s.erase(it);
            } else {
                s.insert(n);
            }
        }
    }
    cout << num << endl;

}

void Test::acm1204() {
    multiset<string, Comp> ms;
    ifstream cin("../resources/acm1204.txt");
    string s;
    while (cin >> s) {
        ms.insert(s);
    }
    for (multiset<string, Comp>::iterator it = ms.begin(); it != ms.end(); it++) {
        cout << *it << endl;
    }

}

bool Comp1(const string &s1, const string &s2) {
    if (s1.length() != s2.length())
        return s1.length() < s2.length();
    else
        return s1 < s2;

}

void Test::acm1208() {
    ifstream cin("../resources/acm1208.txt");
    vector<string> v;
    string s, t;
    while (cin >> s) {
        t = s;
        reverse(t.begin(), t.end());
        if (s == t) {
            v.push_back(s);
        }

    }
    sort(v.begin(), v.end(), Comp1);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

}

void Test::acm2812() {
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

void Test::acm1240() {
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

void Test::acm1240x() {
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

void Test::amc1383() {
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

void Test::acm2478() {
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

void Test::acm2478x() {
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

void Test::acm2886() {
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

void Test::acm2947() {
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

void Test::acm2932() {
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

void Test::acm1251() {
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

void Test::acm1241() {
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

void Test::acm1259() {
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

void Test::testAcm() {
    ifstream cin("../src/aaa.txt");
    const int maxn = 1000 + 5;
    int a[maxn];
    int n, i, k;
    while (cin >> n && n) {
        stack<int> s;//设立一个栈储存按顺序进栈的序列 （一个空栈）
        while (cin >> a[0] && a[0]) {
            for (i = 1; i < n; i++)
                cin >> a[i];//要进行判断出栈的序列
            for (i = 1, k = 0; i <= n; i++) {
                s.push(i);//进栈
                while (s.top() == a[k])//判断栈顶元素和a数组是否相等
                {
                    if (!s.empty()) s.pop();//栈不为空就出栈
                    k++;//判断下一个位置
                    if (s.empty()) break;//直到栈空就结束循环
                }
            }
            if (k == n) printf("Yes\n");//完全匹配就输出yes
            else printf("No\n");
        }
        printf("\n");
    }


}

void Test::acm1295() {
    ifstream cin("../resources/acm1295.txt");
    int n;
    cin >> n;
    cin.get();
    char ss[80];
    string s;
    for (int i = 0; i < n; i++) {
        while (cin.getline(ss, 80)) {
            s = ss;
            reverse(s.begin(), s.end());
            cout << s << endl;
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

void Test::acm1763() {
    ifstream cin("../resources/acm1763.txt");
    double a, b;
    cin >> a;
    while (true) {
        cin >> b;
        if (b == 999) break;
        printf("%.2f\n", (b - a));
        a = b;
    }
    printf("End of Output");

}

void Test::acm2001() {
    ifstream cin("../resources/acm2001.txt");
    string sa, sb, st;
    vector<int> v;
    int a, b, sum;
    int p = 0;
    int u = 0;
    cin >> sa;
    while (cin >> sa >> sb) {
        if (sa.size() < sb.size()) {
            st = sa;
            sa = sb;
            sb = st;
        }
        for (int i = 0; i < sa.size(); i++) {
            if (sa[i] == '0') a = 0;
            else if (sa[i] == '1') a = 1;
            else if (sa[i] == '2') a = 2;
            else if (sa[i] == '3') a = 3;
            else if (sa[i] == '4') a = 4;
            else if (sa[i] == '5') a = 5;
            else if (sa[i] == '6') a = 6;
            else if (sa[i] == '7') a = 7;
            else if (sa[i] == '8') a = 8;
            else if (sa[i] == '9') a = 9;
            if (i >= sb.size()) b = 0;
            else if (sb[i] == '0') b = 0;
            else if (sb[i] == '1') b = 1;
            else if (sb[i] == '2') b = 2;
            else if (sb[i] == '3') b = 3;
            else if (sb[i] == '4') b = 4;
            else if (sb[i] == '5') b = 5;
            else if (sb[i] == '6') b = 6;
            else if (sb[i] == '7') b = 7;
            else if (sb[i] == '8') b = 8;
            else if (sb[i] == '9') b = 9;

            sum = a + b + p;
            p = sum / 10;
            v.push_back(sum % 10);
        }
        if (p == 1) v.push_back(1);
        while (1) {
            vector<int>::iterator it = v.end() - 1;
            if (*it == 0) v.erase(it);
            else break;
        }
        for (int j = 0; j < v.size(); j++) {
            if (u == 0 && v[j] != 0) u = 1;
            if (u == 1) cout << v[j];
        }
        cout << endl;
        v.clear();
        u = 0;
        p = 0;
    }
}

void Test::acm2001x() {
    ifstream cin("../resources/acm2001.txt");
    string sa, sb, st;
    char *s1, *s2;
    int a, b;
    vector<int> v;
    cin >> sa;
    while (cin >> sa >> sb) {
        reverse(sa.begin(), sa.end());
        reverse(sb.begin(), sb.end());
        sprintf(strcpy(s1, sa.c_str()), "%d", a);
        sprintf(strcpy(s2, sb.c_str()), "%d", b);
    }
}

void Test::acm2736() {
    ifstream cin("../resources/acm2736.txt");
    int n;
    int a, b, c;
    while (cin >> n) {
        a = n / 100;
        b = (n - a * 100) / 10;
        c = n % 10;
        if (n == a * a * a + b * b * b + c * c * c) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}

bool cmpdna(const string &s1, const string &s2) {
    int i, j, k, m, n;
    int c1 = 0, c2 = 0;
    for (int i = 0; i < s1.size(); i++) {
        for (j = i + 1; j < s1.size(); j++) {
            if (s1[i] > s1[j]) {
                c1++;
            }
        }
    }
    for (int i = 0; i < s2.size(); i++) {
        for (j = i + 1; j < s2.size(); j++) {
            if (s2[i] > s2[j]) {
                c2++;
            }
        }
    }
    return c1 < c2;
}

void Test::acm1188() {
    ifstream cin("../resources/acm1188.txt");
    int n, a, b;
    cin >> n;
    string s;
    vector<string> v;
    int p = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v.clear();
        p++;
        for (int j = 0; j < b; j++) {
            cin >> s;
            v.push_back(s);
        }
        sort(v.begin(), v.end(), cmpdna);
        if (p != 1)
            printf("\n");
        for (int k = 0; k < v.size(); k++) {
            cout << v[k] << endl;
        }
    }

}

void Test::acm1949() {
    int matritx[100][100];
    int rowSum[100];
    int colSum[100];
    ifstream cin("../resources/acm1949.txt");
    int i, j, PL, PC, countL, countC;
    int n;
    while (cin >> n) {
        if (n == 0)
            break;
        PL = 0;
        PC = 0;
        countL = 0;
        countC = 0;
        for (i = 0; i < n; i++) {
            rowSum[i] = 0;
            colSum[i] = 0;
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                cin >> matritx[i][j];
                rowSum[i] = rowSum[i] + matritx[i][j];
                colSum[j] = colSum[j] + matritx[i][j];
            }
        }
        for (i = 0; i < n; i++) {
            if (rowSum[i] % 2 != 0) {
                PL = i;
                countL++;
            }
            if (colSum[i] % 2 != 0) {
                PC = i;
                countC++;
            }
        }
        if (countL == 0 && countC == 0)
            printf("OK\n");
        else if (countL == 1 && countC == 1)
            printf("Change bit ( %d %d)\n", PL + 1, PC + 1);
        else
            printf("Corrupt\n");
    }
}

void Test::acm1205() {
    ifstream cin("../resources/acm1205.txt");
    string sa, sb, t;
    vector<int> v;

    int a, b, sum;
    int flag;
    while (cin >> sa >> sb) {
        flag = 0;
        v.clear();
        sum = 0;
        reverse(sa.begin(), sa.end());
        reverse(sb.begin(), sb.end());
        if (sa.size() < sb.size()) {
            t = sa;
            sa = sb;
            sb = t;
        }
        for (int i = 0; i < sa.size(); i++) {
            if (sa[i] == '0') a = 0;
            else if (sa[i] == '1') a = 1;
            else if (sa[i] == '2') a = 2;
            else if (sa[i] == '3') a = 3;
            else if (sa[i] == '4') a = 4;
            else if (sa[i] == '5') a = 5;
            else if (sa[i] == '6') a = 6;
            else if (sa[i] == '7') a = 7;
            else if (sa[i] == '8') a = 8;
            else if (sa[i] == '9') a = 9;
            else if (sa[i] == 'a') a = 10;
            else if (sa[i] == 'a') a = 10;
            else if (sa[i] == 'a') a = 10;
            else if (sa[i] == 'b') a = 11;
            else if (sa[i] == 'c') a = 12;
            else if (sa[i] == 'd') a = 13;
            else if (sa[i] == 'e') a = 14;
            else if (sa[i] == 'f') a = 15;
            else if (sa[i] == 'g') a = 16;
            else if (sa[i] == 'h') a = 17;
            else if (sa[i] == 'i') a = 18;
            else if (sa[i] == 'j') a = 19;

            if (i >= sb.size()) b = 0;
            else {
                if (sb[i] == '0') b = 0;
                else if (sb[i] == '1') b = 1;
                else if (sb[i] == '2') b = 2;
                else if (sb[i] == '3') b = 3;
                else if (sb[i] == '4') b = 4;
                else if (sb[i] == '5') b = 5;
                else if (sb[i] == '6') b = 6;
                else if (sb[i] == '7') b = 7;
                else if (sb[i] == '8') b = 8;
                else if (sb[i] == '9') b = 9;
                else if (sb[i] == 'a') b = 10;
                else if (sb[i] == 'b') b = 11;
                else if (sb[i] == 'c') b = 12;
                else if (sb[i] == 'd') b = 13;
                else if (sb[i] == 'e') b = 14;
                else if (sb[i] == 'f') b = 15;
                else if (sb[i] == 'g') b = 16;
                else if (sb[i] == 'h') b = 17;
                else if (sb[i] == 'i') b = 18;
                else if (sb[i] == 'j') b = 19;
            }
            sum = a + b + flag;
            if (sum > 19) {
                flag = 1;
                sum = sum - 20;
            } else {
                flag = 0;
            }
            v.push_back(sum);

        }

        if (flag == 1)
            v.push_back(1);

        for (int i = v.size(); i >= 0; i--) {
            if (v[i] < 10) cout << v[i];
            else if (v[i] == 10) cout << "a";
            else if (v[i] == 11) cout << "b";
            else if (v[i] == 12) cout << "c";
            else if (v[i] == 13) cout << "d";
            else if (v[i] == 14) cout << "e";
            else if (v[i] == 15) cout << "f";
            else if (v[i] == 16) cout << "g";
            else if (v[i] == 17) cout << "h";
            else if (v[i] == 18) cout << "i";
            else if (v[i] == 19) cout << "j";
        }
        cout << endl;
    }

}

void Test::acm2722() {
    ifstream cin("../resources/acm2722.txt");
    double i, n, count;
    while (cin >> n) {
        if (n == 0) break;
        count = 0;
        for (i = 0; i < 32; i++) {
            if (pow(2, i) >= n) {
                count = i;
                break;
            }
        }
        cout << count << endl;
    }
}

bool compName(Book b1, Book b2) {
    if (b1.Name != b2.Name)
        return b1.Name < b2.Name;
    else if (b1.Year != b2.Year)
        return b1.Year < b2.Year;
    else
        return b1.Price < b2.Price;

}

bool compYear(Book b1, Book b2) {
    if (b1.Year != b2.Year)
        return b1.Year < b2.Year;
    else if (b1.Name != b2.Name)
        return b1.Name < b2.Name;
    else
        return b1.Price < b2.Price;

}

bool compPrice(Book b1, Book b2) {
    if (b1.Price != b2.Price)
        return b1.Price < b2.Price;
    else if (b1.Name != b2.Name)
        return b1.Name < b2.Name;
    else
        return b1.Year < b2.Year;

}

void Test::acm2727() {
    ifstream cin("../resources/acm2727.txt");
    vector<Book> v;
    Book book;
    string sorting;
    int n, i, line = 0;
    while (cin >> n) {
        if (n == 0)
            break;
        line++;
        v.clear();
        for (int i = 0; i < n; i++) {
            cin >> book.Name >> book.Year >> book.Price;
            v.push_back(book);
        }
        cin >> sorting;
        if (sorting == "Name")
            sort(v.begin(), v.end(), compName);
        else if (sorting == "Year")
            sort(v.begin(), v.end(), compYear);
        else if (sorting == "Price")
            sort(v.begin(), v.end(), compPrice);
        if (line != 1)
            cout << endl;
        for (i = 0; i < v.size(); i++) {
            cout << v[i].Name << " " << v[i].Year << " " << v[i].Price << endl;
        }
    }

}

void Test::acm2724() {
    ifstream cin("../resources/acm2724.txt");
    priority_queue<Message> v;
    char command[100];
    Message message;

    while (cin >> command) {
        if (strcmp(command, "GET") == 0) {
            if (v.size() == 0) {
                printf("EMPTY QUEUE!\n");
            } else {
                printf("%s %d\n", v.top().Name, v.top().Data);
                v.pop();
            }
        } else if (strcmp(command, "PUT") == 0) {
            cin >> message.Name >> message.Data >> message.Priority;
            v.push(message);
        }
    }

}

void Test::acm1109() {
    ifstream cin("../resources/acm1109.txt");
    string s;
    char ss[100], s1[100], s2[100];
    int x, y;
    map<string, string> m;
    map<string, string>::iterator p;
    while (cin.getline(ss, 100)) {
        s = ss;
        if (s == "") break;
        else {
            sscanf(s.c_str(), "%s %s", s1, s2);
            m[s2] = s1;
        }
    }
    while (cin.getline(ss, 100)) {
        s = ss;
        p = m.find(s);
        if (p != m.end())
            cout << m[s] << endl;
        else
            cout << "eh" << endl;
    }

}

void Test::acm2818() {
    ifstream cin("../resources/acm2818.txt");
    double B, N;
    int A;
    while (cin >> B >> N) {
        if (B == 0 && N == 0)
            break;
        A = pow(B, 1 / N);
        if (B - pow(A, N) < pow(A + 1, N) - B)
            printf("%d\n", A);
        else
            printf("%d\n", A + 1);
    }

}

void Test::acm2829() {
    map<int, int> m;
    ifstream cin("../resources/acm2829.txt");
    int i = 0;
    int p = 0;
    while (1) {
        i++;
        if (i % 3 == 0 || i % 5 == 0) {
            p++;
            if (p > 100000)
                break;
            m[p] = i;
        }
    }
    int n;
    map<int, int>::iterator it;
    while (cin >> n) {
        cout << m[n] << endl;
    }

}

void Test::acm2876() {
    ifstream cin("../resources/acm2876.txt");
    vector<string> v;
    string s;
    int n;
    cin >> n;
    int i;
    bool outFlag;
    while (cin >> n) {
        v.clear();
        for (i = 0; i < n; i++) {
            cin >> s;
            v.push_back(s);
        }
        sort(v.begin(), v.end());
        for (i = 0; i < n - 1; i++) {
            if (v[i + 1].find(v[i]) == 0) {
                cout << "NO" << endl;
                outFlag = false;
                break;
            }
        }

        if (outFlag) {
            cout << "YES" << endl;
        }
        outFlag = true;

    }

}

void Test::acm2201() {
    ifstream cin("../resources/acm2201.txt");
    int a, b;
    cin >> a;
    while (cin >> a >> b) {
        if (a < b) cout << "NO BRAINS" << endl;
        else cout << "MMM BRAINS" << endl;
    }
}

void Test::acm2772() {
    ifstream cin("../resources/acm2772.txt");
    int q, d, n, p;
    int m;
    int i = 0;
    cin >> m;
    while (cin >> m) {
        q = m / 25;
        m = m % 25;

        d = m / 10;
        m = m % 10;

        n = m / 5;
        m = m % 5;

        p = m;
        i++;
        cout << i << " " << q << " QUARTERS(S) ," << d << " DIME(S), " << n << " NICKEL(S), " << p << " PENNY(S)"
             << endl;
    }
}

void Test::acm2176() {
    ifstream cin("../resources/acm2176.txt");
    int n, a, b, bb, sum, i;
    while (cin >> n) {
        if (n == -1) break;
        sum = 0;
        bb = 0;
        for (i = 0; i < n; i++) {
            cin >> a >> b;
            if (i == 0) {
                bb = b;
                sum = sum + a * bb;
            } else {
                sum = sum + a * (b - bb);
                bb = b;
            }
        }
        cout << sum << " miles" << endl;
    }

}