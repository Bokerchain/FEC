#ifndef _GALOIS8BIT_H_ 
#define _GALOIS8BIT_H_

class galois8bit
{
public:
	galois8bit(void);
	~galois8bit(void);
public:
	//* galoisAdd - �����������м��㲢����A,B֮��;
	unsigned char galoisAdd (unsigned char A, unsigned char B);
	//* galoisSub - �����������м��㲢����A,B֮��;
	unsigned char galoisSub (unsigned char A, unsigned char B);
	//* galoisMul - �����������м��㲢����A,B֮��;
	unsigned char galoisMul (unsigned char A, unsigned char B);
	//* galoisDiv - �����������м��㲢����A,B֮��;
	unsigned char galoisDiv (unsigned char A, unsigned char B);
	//* galoisPow - �����������м��㲢����A��B�η�;
	unsigned char galoisPow (unsigned char A, unsigned char B);
	//* galoisInv - �����������м��㲢����A�ĵ���;
	unsigned char galoisInv (unsigned char A);
	//* ��ʼ��٤�޻���;
	void galoisEightBitInit(void);
};

#endif
