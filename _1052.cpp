#include "pch.h"
#include "_1052.h"
struct expressionS
{
	int leftHand;
	int leftEye;
	int mouth;
	int rightHand;
	int rightEye;
};

_1052::_1052()
{
	string hand, mouth, eye;
	getline(cin, hand);
	getline(cin, mouth);
	getline(cin, eye);

	int N;
	cin >> N;
	vector<expressionS> list;
	for (int i = 0; i < N; i++)
	{
		expressionS temp;
		cin >> temp.leftHand >> temp.leftEye >> temp.mouth >> temp.rightEye >> temp.rightHand;
		list.push_back(temp);
	}
	string reg2("\[.*\]");

	smatch result;

	regex pattern2(reg2, regex::icase);
	regex_match(hand, result, pattern2);




	/*sregex_iterator ip_it1(hand.begin(), hand.end(), reg2);
	sregex_iterator ip_end1;
	vector <string> handV;
	for (;ip_it1 != ip_end1; ++ip_it1)
	{
		handV.push_back(ip_it1->str());
	}
	sregex_iterator ip_it2(eye.begin(), eye.end(), reg2);
	sregex_iterator ip_end2;
	vector <string> eyeV;
	for (; ip_it2 != ip_end2; ++ip_it2)
	{
		eyeV.push_back(ip_it2->str());
	}
	sregex_iterator ip_it3(mouth.begin(), mouth.end(), reg2);
	sregex_iterator ip_end3;
	vector <string> mouthV;
	for (; ip_it3 != ip_end3; ++ip_it3)
	{
		mouthV.push_back(ip_it3->str());
	}*/
	/*for (int i = 0; i < N; i++)
	{
		cout << handV[list[i].leftHand] << eyeV[list[i].leftEye] << mouthV[list[i].mouth] << eyeV[list[i].rightEye] << handV[list[i].rightHand];
		if (i!=N)
		{
			cout << "\n";
		}
	}*/
}


_1052::~_1052()
{
}
