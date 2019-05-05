#ifndef BZF_MD5_H
#define BZF_MD5_H
#include<cstring>
#include<iostream>
using namespace std;

class MD5
{
public:

	MD5();
	MD5(const string & text);
	typedef unsigned int size_type; //32 bit 
	void update(const unsigned char *buf, size_type length);
	void update(const char *buf, size_type length);
	MD5 & finalize();
	string hexdigest() const;
	friend ostream & operator<<(ostream &, MD5 md5);



private:
	void init();
	typedef unsigned char self_int_1;
	typedef unsigned int self_int_4;
	enum { blocksize = 64 };

	void transform(const self_int_1 block[blocksize]);
	static void decode(self_int_4 output[], const self_int_1 input[], size_type len);
	static void encode(self_int_1 output[], const self_int_4 input[], size_type len);

	bool finalized;
	self_int_1 buffer[blocksize];
	self_int_4 count[2];
	self_int_4 state[4];
	self_int_1 digest[16];

	static inline self_int_4 F(self_int_4 x, self_int_4 y, self_int_4 z);
	static inline self_int_4 G(self_int_4 x, self_int_4 y, self_int_4 z);
	static inline self_int_4 H(self_int_4 x, self_int_4 y, self_int_4 z);
	static inline self_int_4 I(self_int_4 x, self_int_4 y, self_int_4 z);

	static inline self_int_4 rotate_left(self_int_4 x, int n);

	static inline void FF(self_int_4 &a, self_int_4 b, self_int_4 c, self_int_4 d, self_int_4 x, self_int_4 s, self_int_4 ac);
	static inline void GG(self_int_4 &a, self_int_4 b, self_int_4 c, self_int_4 d, self_int_4 x, self_int_4 s, self_int_4 ac);
	static inline void HH(self_int_4 &a, self_int_4 b, self_int_4 c, self_int_4 d, self_int_4 x, self_int_4 s, self_int_4 ac);
	static inline void II(self_int_4 &a, self_int_4 b, self_int_4 c, self_int_4 d, self_int_4 x, self_int_4 s, self_int_4 ac);
};

string hash_md5(const string str);
#endif
