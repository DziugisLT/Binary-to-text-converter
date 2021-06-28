#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

const char u1[] = "U1.txt";
const char u1rez[] = "U1rez.txt";

int main(){

    ifstream fd(u1);
    ofstream fr(u1rez);

    int n, temp = 0;
    string pass;

    fd >> n;

    string arr[n];

    for(int i=0; i<n; i++){
        fd >> pass;
        arr[i] = pass;
    }

    char alphaD[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char alphaM[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char numb[10] = {'0','1','2','3','4','5','6','7','8','9'};

    string arrpass[n];

    for(int j=0; j<n; j++){
        //cout << arr[j] << endl;
        if(arr[j][0] == '0' && arr[j][1] == '1' && arr[j][2] == '1'){
            temp = 0;
            //cout << "Mazoji raide" << endl;
            for(int t=3; t<=n; t++){
                //16
                if(t == 3 && arr[j][t] == '1'){
                    temp = temp+16;
                } else if (t == 3 && arr[j][t] == '0'){
                    continue;
                }
                //8
                if(t == 4 && arr[j][t] == '1'){
                    temp = temp+8;
                } else if (t == 4 && arr[j][t] == '0'){
                    continue;
                }
                //4
                if(t == 5 && arr[j][t] == '1'){
                    temp = temp+4;
                } else if (t == 5 && arr[j][t] == '0'){
                    continue;
                }
                //2
                if(t == 6 && arr[j][t] == '1'){
                    temp = temp+2;
                } else if (t == 6 && arr[j][t] == '0'){
                    continue;
                }
                //1
                if(t == 7 && arr[j][t] == '1'){
                    temp = temp+1;
                } else if (t == 7 && arr[j][t] == '0'){
                    //cout << t << " boom1 " << arr[j][t] << endl;
                    continue;
                }
                //cout << "temp yra: " << temp << endl;
            }
            arrpass[j] = alphaM[temp-1];
        } else if(arr[j][0] == '0' && arr[j][1] == '1' && arr[j][2] == '0'){
            temp = 0;
            //cout << "Didzioji raide" << endl;
            for(int t=3; t<=n; t++){
                //16
                if(t == 3 && arr[j][t] == '1'){
                    temp = temp+16;
                } else if (t == 3 && arr[j][t] == '0'){
                    continue;
                }
                //8
                if(t == 4 && arr[j][t] == '1'){
                    temp = temp+8;
                } else if (t == 4 && arr[j][t] == '0'){
                    continue;
                }
                //4
                if(t == 5 && arr[j][t] == '1'){
                    temp = temp+4;
                } else if (t == 5 && arr[j][t] == '0'){
                    continue;
                }
                //2
                if(t == 6 && arr[j][t] == '1'){
                    temp = temp+2;
                } else if (t == 6 && arr[j][t] == '0'){
                    continue;
                }
                //1
                if(t == 7 && arr[j][t] == '1'){
                    temp = temp+1;
                } else if (t == 7 && arr[j][t] == '0'){
                    continue;
                }
                //cout << "temp yra: " << temp << endl;
            }
            arrpass[j] = alphaD[temp-1];
        } else if(arr[j][0] == '0' && arr[j][1] == '0' && arr[j][2] == '1' && arr[j][3] == '1'){
            temp = 0;
            //cout << "Skaicius" << endl;
            for(int t=4; t<=n; t++){
                //8
                if(t == 4 && arr[j][t] == '1'){
                    temp = temp+8;
                } else if (t == 4 && arr[j][t] == '0'){
                    continue;
                }
                //4
                if(t == 5 && arr[j][t] == '1'){
                    temp = temp+4;
                } else if (t == 5 && arr[j][t] == '0'){
                    continue;
                }
                //2
                if(t == 6 && arr[j][t] == '1'){
                    temp = temp+2;
                } else if (t == 6 && arr[j][t] == '0'){
                    continue;
                }
                //1
                if(t == 7 && arr[j][t] == '1'){
                    temp = temp+1;
                } else if (t == 7 && arr[j][t] == '0'){
                    continue;
                }
                //cout << "temp yra: " << temp << endl;
            }
            arrpass[j] = numb[temp];
        }
    }

    for(int y=0; y<n; y++){
        fr << arrpass[y];
    }

    fd.close();
    fr.close();

    return 0;

}
