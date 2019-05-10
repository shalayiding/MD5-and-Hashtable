# Welcome to the MD5-and-Hashtable wiki!
## MD5
If giving string is "MD5" after translate to binary is ​
01101000 01100001 01101000 01100001​
Total bit of the string is ->4*8=32​
MD5 hashing formula is we want to get Len % 512 = 448 (bit) append 1 and 0 until 448.
Settup basic 4 register 👍 
* ` 	state[0] = 0x67452301;`
* 	`state[1] = 0xefcdab89;`
* 	`state[2] = 0x98badcfe;`
* 	`state[3] = 0x10325476;`
Assume we have 448 bit after we fill the bit in step one we want to use another 64 bit to represent input string we gona take the upper bit of the 448.
MD5 function : [MD5 function](http://www.zedwood.com/article/cpp-md5-function)

Inorder to see  the result : run  
> * `cd MD5/`
> * `g++ hash_md5.cpp md5_main.cpp  -o MD5`
> * `./MD5 testmessage`

Hash table: 
run : 
> * `python Table_G.py`

