#ifndef _GALOIS8BIT_H_ 
#define _GALOIS8BIT_H_

class galois8bit
{
public:
	galois8bit(void);
	~galois8bit(void);
public:
	//* galoisAdd - 在迦罗瓦域中计算并返回A,B之和;
	unsigned char galoisAdd (unsigned char A, unsigned char B);
	//* galoisSub - 在迦罗瓦域中计算并返回A,B之差;
	unsigned char galoisSub (unsigned char A, unsigned char B);
	//* galoisMul - 在迦罗瓦域中计算并返回A,B之积;
	unsigned char galoisMul (unsigned char A, unsigned char B);
	//* galoisDiv - 在迦罗瓦域中计算并返回A,B之商;
	unsigned char galoisDiv (unsigned char A, unsigned char B);
	//* galoisPow - 在迦罗瓦域中计算并返回A的B次方;
	unsigned char galoisPow (unsigned char A, unsigned char B);
	//* galoisInv - 在迦罗瓦域中计算并返回A的倒数;
	unsigned char galoisInv (unsigned char A);
	//* 初始化伽罗华域;
	void galoisEightBitInit(void);
};

#endif
