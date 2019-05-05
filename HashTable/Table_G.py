

f = open('game_list','r')

if f.mode != 'r':
	print('error')
else:
	info = f.read()
info = info.replace('\n','')
info = info.split(',')
print('data set ---------')
print(info)


def Build_Hash_Table(info):
	hash_table={}
	for i in info:
		temp =0
		for c in i:
			temp+=ord(c)
		hash_table[temp]=i
	return hash_table

hash_table = Build_Hash_Table(info)
print('hash table --------')
print(hash_table)

print('test ------------')
val =int( raw_input('give name to search in Hash table :'))
print(val)
def Search_inHash(val,hash_table):
	if val in hash_table:
		print(hash_table[val])
	else :
		print('val is not exist in hash_table')

Search_inHash(val,hash_table)

