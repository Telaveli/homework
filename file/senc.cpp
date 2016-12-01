#include <iostream>
using namespace std;

////////////პროგრამა ითვლის ყველა რიცხვის ჯამს მითითებული რიცხვიდან მითითებულ რიცხვამდე.//////////
int main() {
	int startnum,endnum;
	int sum = startnum+1;
cout<<"\tპროგრამა ითვლის ყველა რიცხვის ჯამს მითითებული რიცხვიდან მითითებულ რიცხვამდე."<< endl;
cout<<"\tსაწყისი რიცხვი თუ არის 1, ხოლო ბოლო რიცხვია 10 პროგრამა დაითვლის 1+2+3+4+5+6+7+8+9+10 ციფრების ჯამს :)  "<<endl;
cout<<"საწყისი რიცხვი: ";
	cin>>startnum;
	int stnum = startnum;
cout <<"ბოლო რიცხვი :";
	cin>>endnum;

	while ( startnum<endnum){
		++startnum;
		sum += startnum;
		}
	cout<<"------------------------------------"<<endl;
	cout<<"რიცხვი "<<stnum<<"_დან "<<"რიცხვ "<<endnum<<"_მდე ყველა რიცხვის ჯამი არის: "<<sum<<endl;
return 0;
}
