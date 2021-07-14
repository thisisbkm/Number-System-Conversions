#include <iostream>
#include <conio.h>
#define ARRAY_SIZE 20
#include <string.h>
using namespace std;

class conversion{
    private:
        int i,a,b,div;
        int arr[50]={0};
    public:
        void Dec2Bin();
        void Bin2Dec();
        void Dec2Oct();
        void Oct2Dec();
        void Dec2Hex();
        void Hex2Dec();
};

void conversion::Dec2Bin(){
    cout<<"\n\t\t\t Enter Your Decimal Number :: ";cin>>a;div=a;
        for(i=0;div != 0;i++){
            arr[i]=div%2;
            div/=2;
        }
        cout<<"\n\t\t\tBinary Number is :: ";
        for(i;i>=0;i--){
            cout<<arr[i];
        }
        fflush(stdin);
        cout<<"\n\t\t\t\t\t\t\t Press any Key to Continue...";getch();
        
}
void conversion::Bin2Dec(){
    int arrv[8]={12,64,32,16,8,4,2,1},rem;
    cout<<"\n\t\t\t Enter Your Binary Number :: ";cin>>a;div=a;
    for(i=7;i>=0;i--){
        arr[i]=div%10;
        div/=10;
    }
    b=0;
    for(i=7;i>=0;i--){
        b+=arr[i]*arrv[i];
    }
    cout<<"\n\t\t\tDecimal Number is :: "<<b;
    fflush(stdin);
    cout<<"\n\t\t\t\t\t\t\t Press any Key to Continue...";getch();
}
void conversion::Dec2Oct(){
    cout<<"\n\t\t\t Enter Your Decimal Number :: ";cin>>a;div=a;
        for(i=7;i>=0&&div!=1||div!=0;i--){
            arr[i]=div%8;
            div/=8;
        }
        cout<<"\n\t\t\tOctal Number is :: ";
        for(i=0;i<8;i++){
            cout<<arr[i];
        }
        fflush(stdin);
        cout<<"\n\t\t\t\t\t\t\t Press any Key to Continue...";getch();
        
}
void conversion::Oct2Dec(){
    int arrv[8]={2097152,262144,32768,4096,512,64,8,1},rem;
    cout<<"\n\t\t\t Enter Your Octal Number :: ";cin>>a;div=a;
    for(i=7;i>=0;i--){
        arr[i]=div%10;
        div/=10;
    }
    b=0;
    for(i=7;i>=0;i--){
        b+=arr[i]*arrv[i];
    }
    cout<<"\n\t\t\tDecimal Number is :: "<<b;
    fflush(stdin);
    cout<<"\n\t\t\t\t\t\t\t Press any Key to Continue...";getch();
}
void conversion::Dec2Hex(){
    int r;
    char hex[50]={0};
    cout<<"\n\t\t\t Enter Your Decimal Number :: ";cin>>a;div=a;
    for(i=0;div != 0;i++)
    {
        r = div % 16;
        if (r < 10)
            hex[i] = r + 48;
        else
            hex[i] = r + 55;
        div /= 16;
    }
    cout << "\nHexadecimal equivalent of " << a << " is : ";
    for (i; i >= 0; i--){
        cout << hex[i];}
    fflush(stdin);
    cout<<"\n\t\t\t\t\t\t\t Press any Key to Continue...";getch();
}
void conversion::Hex2Dec(){
    char hex[ARRAY_SIZE];
    long long decimal = 0, base = 1;
    int i = 0, value, length;
    cout<<"\n\t\t\t Enter Hexadecimal Number :: ";
    fflush(stdin);
    fgets(hex,ARRAY_SIZE,stdin);
    length = strlen(hex);
    for(i = length--; i >= 0; i--)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += (hex[i] - 48) * base;
            base *= 16;
        }
        else if(hex[i] >= 'A' && hex[i] <= 'F')
        {
            decimal += (hex[i] - 55) * base;
            base *= 16;
        }
        else if(hex[i] >= 'a' && hex[i] <= 'f')
        {
            decimal += (hex[i] - 87) * base;
            base *= 16;
        }
    }
    cout << "\nDecimal equivalent of " << hex << " is :: "<<decimal;
    cout<<"\n\t\t\t\t\t\t\t Press any Key to Continue...";getch();
}
void menu(){
    int n;
    cout<<"\n\n\n\t\t\t\tChoice\t\t Conversion Type\n";
    cout<<"\t\t\t\t---------------------------------\n";
    cout<<"\t\t\t\t   1\t\tDecimal to Binary\n";
    cout<<"\t\t\t\t   2\t\tBinary to Decimal\n";
    cout<<"\t\t\t\t   3\t\tDecimal to Octal\n";
    cout<<"\t\t\t\t   4\t\tOctal to Decimal\n";
    cout<<"\t\t\t\t   5\t\tDecimal to HexaDecimal\n";
    cout<<"\t\t\t\t   6\t\tHexaDecimal to Decimal\n";
    cout<<"\n\t\t\t\t Enter Your Choice :: ";cin>>n;

    system("cls");
    fflush(stdin);
    conversion C;
    switch (n)
    {
    case 1:
        C.Dec2Bin();
        break;
    case 2:
        C.Bin2Dec();
        break;
    case 3:
        C.Dec2Oct();
        break;
    case 4:
        C.Oct2Dec();
        break;
    case 5:
        C.Dec2Hex();
        break;
    case 6:
        C.Hex2Dec();
        break;
    default:
        cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\tEnter a Valid Choice !!";
        _sleep(1000);
        cout<<"\n\n\t\t\t\t\t\t Do You Want To Continue..??(Y/N)";char a;cin>>a;
        (a=='Y'||a=='y')
                ?menu()
                :exit(0);
    }
}
int main(){
    static int s = 2000;
    system("cls");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t Welcome To The Calculator !!"<<endl;
    cout<<"\n\t\t\t\t\t\t\t Press any Key to Continue...";getch();//holds screen
    system("cls");
    menu();
    cout<<"\n\n\t\t\t\t\t\t Do You Want To Perform Another Operation..??(Y/N):: ";char a;cin>>a;
    system("cls");
    _sleep(s);
        (a=='Y'||a=='y')
                ?menu()
                :exit(0);
}