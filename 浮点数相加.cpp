#include <iostream>  
#include <cstring>  
#include <stdlib.h>  
using namespace std;
#define LEN 101  
   
int ia[LEN], fa[LEN], ib[LEN], fb[LEN], ic[LEN], fc[LEN];  
   
int main()  
{  
    char str1[LEN], str2[LEN];  
    int i, j, k, n, l1, l2, lai, laf, lbi, lbf, temp, flmax, ilmax;  
   
    while (cin>>n) {  
        while (n --) {  
            // ��ʼ��  
            memset(ia, 0, sizeof(ia));  
            memset(fa, 0, sizeof(fa));  
            memset(ib, 0, sizeof(ib));  
            memset(fb, 0, sizeof(fb));  
            memset(ic, 0, sizeof(ic));  
            memset(fc, 0, sizeof(fc));  
   
            // ���յ�һ��������  
            cin>>str1; 
            l1 = strlen(str1);  
   
            // ����������������  
            for (i = 0; i < l1 && str1[i] != '.'; i ++) {  
                ia[i] = str1[i] - '0';  
            }  
            lai = i;  
   
            // ��λ�滻  
            for (j = 0, k = lai - 1; j <= lai / 2 && j < k; j ++, k --) {  
                temp = ia[j];  
                ia[j] = ia[k];  
                ia[k] = temp;  
            }  
   
            // ����С����������  
            for (i += 1; i < l1; i ++) {  
                fa[i - 1 - lai] = str1[i] - '0';  
            }  
            laf = i - 1 - lai;  
   
   
            // ���յڶ���������  
            scanf("%s", str2);  
            l2 = strlen(str2);  
   
            // ����������������  
            for (i = 0; i < l2 && str2[i] != '.'; i ++) {  
                ib[i] = str2[i] - '0';  
            }  
            lbi = i;  
   
            // ��λ�滻  
            for (j = 0, k = lbi - 1; j <= lbi / 2 && j < k; j ++, k --) {  
                temp = ib[j];  
                ib[j] = ib[k];  
                ib[k] = temp;  
            }  
   
            // ����С����������  
            for (i += 1; i < l2; i ++) {  
                fb[i - 1 - lbi] = str2[i] - '0';  
            }  
            lbf = i - 1 - lbi;  
   
            // ˭��С��λ������  
            flmax = (laf >= lbf) ? laf : lbf;  
            int c = 0;  //С����λ  
            for (i = 0, j = flmax - 1; j >= 0; j --, i ++) {  
                fc[i] = fa[j] + fb[j] + c;  
                if (fc[i] >= 10) {  
                    c = fc[i] / 10;  
                    fc[i] %= 10;  
                }else {  
                    c = 0;  
                }  
            }  
   
            // �������  
            ilmax = (lai >= lbi) ? lai : lbi;  
            for (i = 0; i < ilmax; i ++) {  
                ic[i] = ia[i] + ib[i] + c;  
                if (ic[i] >= 10) {  
                    c = ic[i] / 10;  
                    ic[i] %= 10;  
                }else {  
                    c = 0;  
                }  
            }  
            while (c) {  
                ic[ilmax ++] = c % 10;  
                c /= 10;  
            }  
   
   
            // ��ӡ�����  
   
            // �ҵ���һ����Ϊ0������λ  
            for (j = ilmax - 1; j >= 0; j --) {  
                if (ic[j] != 0) {  
                    break;  
                }  
            }  
            if (j >= 0) {  
                for (i = j; i >= 0; i --) {  
                    cout<<ic[i];  
                }  
            }else {  
                cout<<"0"; 
            }  
            cout<<".";
   
            // �ҵ����һ����Ϊ0��С��λ  
            for (j = 0; j < flmax - 1; j ++) {  
                if (fc[j] != 0) {  
                    break;  
                }  
            }  
            for (i = flmax - 1; i >= j; i --) {  
               cout<<fc[i]; 
            }  
            cout<<endl ;
   
            // ���տ���  
            getchar();  
        }  
   
    }  
   
    return 0;  
}  
